/* Generated code for Python module 'anyio$_core$_subprocesses'
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



/* The "module_anyio$_core$_subprocesses" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_subprocesses;
PyDictObject *moduledict_anyio$_core$_subprocesses;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_8f57142597442f8d1182e70d9c4cfba8;
PyObject *const_dict_f40940a3395dfc40f0007788502efc63;
PyObject *const_str_plain_drain_stream;
PyObject *const_str_digest_f38f3c063c129f65f328b875c81c082e;
PyObject *const_str_plain_stdin;
PyObject *const_str_plain_input;
PyObject *const_str_digest_287e8214850d69ace88b23282955e674;
PyObject *const_str_plain_open_process;
PyObject *const_str_plain_command;
PyObject *const_str_plain_PIPE;
PyObject *const_str_plain_stdout;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_cwd;
PyObject *const_str_plain_env;
PyObject *const_str_plain_startupinfo;
PyObject *const_str_plain_creationflags;
PyObject *const_str_plain_start_new_session;
PyObject *const_str_plain_pass_fds;
PyObject *const_str_plain_user;
PyObject *const_str_plain_group;
PyObject *const_str_plain_extra_groups;
PyObject *const_str_plain_umask;
PyObject *const_tuple_7a93eea852241af2c140d770e1fb75a8_tuple;
PyObject *const_str_plain_create_task_group;
PyObject *const_str_plain_start_soon;
PyObject *const_str_plain_aclose;
PyObject *const_str_plain_wait;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_check;
PyObject *const_str_plain_returncode;
PyObject *const_str_plain_CalledProcessError;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_CompletedProcess;
PyObject *const_str_plain_run_process;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_buffer;
PyObject *const_str_plain_write;
PyObject *const_str_plain_getvalue;
PyObject *const_str_plain_stream_contents;
PyObject *const_str_plain_index;
PyObject *const_str_digest_059aaf0277630f542fb28d44cdb10483;
PyObject *const_str_plain_get_async_backend;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_ec662c30c2e2a9dab1890f36eaef9254_tuple;
PyObject *const_str_plain_AsyncIterable;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_PathLike;
PyObject *const_str_plain_subprocess;
PyObject *const_tuple_b2835c3a88a92647b377b2e6d0084cdf_tuple;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_Process_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_Process;
PyObject *const_str_plain__eventloop;
PyObject *const_tuple_str_plain_get_async_backend_tuple;
PyObject *const_str_plain__tasks;
PyObject *const_tuple_str_plain_create_task_group_tuple;
PyObject *const_str_plain_TypeAlias;
PyObject *const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple;
PyObject *const_str_plain_StrOrBytesPath;
PyObject *const_dict_1437346bde0b802e1d602d44de4949d7;
PyObject *const_dict_10afb630b37e89dc36da37c2b944078c;
PyObject *const_str_digest_9f06b41410601bb1c8ceced57bf7166a;
PyObject *const_str_digest_b1063f80b35f6a787f9c7c898d34754d;
PyObject *const_tuple_47189f3c4f7e3e227c50604ab383d11e_tuple;
PyObject *const_tuple_str_plain_stream_contents_tuple;
PyObject *const_tuple_4af5fefbed53bcb81b57a019420f4459_tuple;
PyObject *const_tuple_98993c60ebbbfa50597b0e304e928ed7_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[78];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio._core._subprocesses"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f57142597442f8d1182e70d9c4cfba8);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_f40940a3395dfc40f0007788502efc63);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_drain_stream);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_input);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_287e8214850d69ace88b23282955e674);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_process);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_command);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdout);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_cwd);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_env);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_startupinfo);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_creationflags);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_new_session);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_pass_fds);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_user);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_groups);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_umask);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_7a93eea852241af2c140d770e1fb75a8_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_check);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_returncode);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_CalledProcessError);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletedProcess);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_process);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_buffer);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_contents);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_059aaf0277630f542fb28d44cdb10483);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_ec662c30c2e2a9dab1890f36eaef9254_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_b2835c3a88a92647b377b2e6d0084cdf_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Process);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__tasks);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_task_group_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrOrBytesPath);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_1437346bde0b802e1d602d44de4949d7);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_dict_10afb630b37e89dc36da37c2b944078c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f06b41410601bb1c8ceced57bf7166a);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1063f80b35f6a787f9c7c898d34754d);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_47189f3c4f7e3e227c50604ab383d11e_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_contents_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_4af5fefbed53bcb81b57a019420f4459_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_98993c60ebbbfa50597b0e304e928ed7_tuple);
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
void checkModuleConstants_anyio$_core$_subprocesses(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f57142597442f8d1182e70d9c4cfba8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f57142597442f8d1182e70d9c4cfba8);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_f40940a3395dfc40f0007788502efc63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f40940a3395dfc40f0007788502efc63);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_drain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_drain_stream);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_287e8214850d69ace88b23282955e674));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_287e8214850d69ace88b23282955e674);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_process);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_command));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_command);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PIPE);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdout);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_cwd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cwd);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_env);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_startupinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startupinfo);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_creationflags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_creationflags);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_new_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_new_session);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_pass_fds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pass_fds);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_groups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_groups);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_umask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umask);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_7a93eea852241af2c140d770e1fb75a8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7a93eea852241af2c140d770e1fb75a8_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task_group);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_soon);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_returncode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_returncode);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_CalledProcessError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CalledProcessError);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletedProcess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletedProcess);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_process);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buffer);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_contents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_contents);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_059aaf0277630f542fb28d44cdb10483));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_059aaf0277630f542fb28d44cdb10483);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_async_backend);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_ec662c30c2e2a9dab1890f36eaef9254_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec662c30c2e2a9dab1890f36eaef9254_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterable);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PathLike);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_b2835c3a88a92647b377b2e6d0084cdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b2835c3a88a92647b377b2e6d0084cdf_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Process_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Process);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__eventloop);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_async_backend_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tasks);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_task_group_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_task_group_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrOrBytesPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrOrBytesPath);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_1437346bde0b802e1d602d44de4949d7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1437346bde0b802e1d602d44de4949d7);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_dict_10afb630b37e89dc36da37c2b944078c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_10afb630b37e89dc36da37c2b944078c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f06b41410601bb1c8ceced57bf7166a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f06b41410601bb1c8ceced57bf7166a);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1063f80b35f6a787f9c7c898d34754d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1063f80b35f6a787f9c7c898d34754d);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_47189f3c4f7e3e227c50604ab383d11e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_47189f3c4f7e3e227c50604ab383d11e_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stream_contents_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stream_contents_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_4af5fefbed53bcb81b57a019420f4459_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4af5fefbed53bcb81b57a019420f4459_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_98993c60ebbbfa50597b0e304e928ed7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_98993c60ebbbfa50597b0e304e928ed7_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_anyio$_core$_subprocesses$CalledProcessError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CalledProcessError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CalledProcessError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CalledProcessError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CalledProcessError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CalledProcessError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CalledProcessError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CalledProcessError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CalledProcessError);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$CompletedProcess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletedProcess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CompletedProcess);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CompletedProcess, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CompletedProcess);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CompletedProcess, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletedProcess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletedProcess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletedProcess);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$PIPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_PIPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PIPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PIPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PIPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PIPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_PIPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_PIPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PIPE);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$create_task_group(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_task_group);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_task_group, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_task_group);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_task_group, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$get_async_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_async_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_async_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_async_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_async_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_subprocesses$open_process(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_subprocesses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_subprocesses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_subprocesses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_process);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_process, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_process);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_process, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5b31f5340576d9a98f8d5419c4d8642e;
static PyCodeObject *code_objects_eca41c106493b0c4ab1c10dfddb55ecb;
static PyCodeObject *code_objects_69e1cf526cb0762acc7ad9afdd11c5e8;
static PyCodeObject *code_objects_ba0a3afcdc3054e12e9d5b9c49a2b394;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9f06b41410601bb1c8ceced57bf7166a); CHECK_OBJECT(module_filename_obj);
code_objects_5b31f5340576d9a98f8d5419c4d8642e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b1063f80b35f6a787f9c7c898d34754d, mod_consts.const_str_digest_b1063f80b35f6a787f9c7c898d34754d, NULL, NULL, 0, 0, 0);
code_objects_eca41c106493b0c4ab1c10dfddb55ecb = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_drain_stream, mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e, mod_consts.const_tuple_47189f3c4f7e3e227c50604ab383d11e_tuple, mod_consts.const_tuple_str_plain_stream_contents_tuple, 2, 0, 0);
code_objects_69e1cf526cb0762acc7ad9afdd11c5e8 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_process, mod_consts.const_str_plain_open_process, mod_consts.const_tuple_4af5fefbed53bcb81b57a019420f4459_tuple, NULL, 1, 13, 0);
code_objects_ba0a3afcdc3054e12e9d5b9c49a2b394 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_process, mod_consts.const_str_plain_run_process, mod_consts.const_tuple_98993c60ebbbfa50597b0e304e928ed7_tuple, NULL, 1, 15, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__2_open_process(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$_core$_subprocesses$$$function__1_run_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_command = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_input = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_stdin = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_stdout = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_stderr = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_check = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_cwd = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_env = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_startupinfo = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_creationflags = Nuitka_Cell_New1(python_pars[9]);
struct Nuitka_CellObject *par_start_new_session = Nuitka_Cell_New1(python_pars[10]);
struct Nuitka_CellObject *par_pass_fds = Nuitka_Cell_New1(python_pars[11]);
struct Nuitka_CellObject *par_user = Nuitka_Cell_New1(python_pars[12]);
struct Nuitka_CellObject *par_group = Nuitka_Cell_New1(python_pars[13]);
struct Nuitka_CellObject *par_extra_groups = Nuitka_Cell_New1(python_pars[14]);
struct Nuitka_CellObject *par_umask = Nuitka_Cell_New1(python_pars[15]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[16];
tmp_closure_1[0] = par_check;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_command;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_creationflags;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_cwd;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_env;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_extra_groups;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_group;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_input;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_pass_fds;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_start_new_session;
Py_INCREF(tmp_closure_1[9]);
tmp_closure_1[10] = par_startupinfo;
Py_INCREF(tmp_closure_1[10]);
tmp_closure_1[11] = par_stderr;
Py_INCREF(tmp_closure_1[11]);
tmp_closure_1[12] = par_stdin;
Py_INCREF(tmp_closure_1[12]);
tmp_closure_1[13] = par_stdout;
Py_INCREF(tmp_closure_1[13]);
tmp_closure_1[14] = par_umask;
Py_INCREF(tmp_closure_1[14]);
tmp_closure_1[15] = par_user;
Py_INCREF(tmp_closure_1[15]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_command);
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
par_command = NULL;
CHECK_OBJECT(par_input);
CHECK_OBJECT(par_input);
Py_DECREF(par_input);
par_input = NULL;
CHECK_OBJECT(par_stdin);
CHECK_OBJECT(par_stdin);
Py_DECREF(par_stdin);
par_stdin = NULL;
CHECK_OBJECT(par_stdout);
CHECK_OBJECT(par_stdout);
Py_DECREF(par_stdout);
par_stdout = NULL;
CHECK_OBJECT(par_stderr);
CHECK_OBJECT(par_stderr);
Py_DECREF(par_stderr);
par_stderr = NULL;
CHECK_OBJECT(par_check);
CHECK_OBJECT(par_check);
Py_DECREF(par_check);
par_check = NULL;
CHECK_OBJECT(par_cwd);
CHECK_OBJECT(par_cwd);
Py_DECREF(par_cwd);
par_cwd = NULL;
CHECK_OBJECT(par_env);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
par_env = NULL;
CHECK_OBJECT(par_startupinfo);
CHECK_OBJECT(par_startupinfo);
Py_DECREF(par_startupinfo);
par_startupinfo = NULL;
CHECK_OBJECT(par_creationflags);
CHECK_OBJECT(par_creationflags);
Py_DECREF(par_creationflags);
par_creationflags = NULL;
CHECK_OBJECT(par_start_new_session);
CHECK_OBJECT(par_start_new_session);
Py_DECREF(par_start_new_session);
par_start_new_session = NULL;
CHECK_OBJECT(par_pass_fds);
CHECK_OBJECT(par_pass_fds);
Py_DECREF(par_pass_fds);
par_pass_fds = NULL;
CHECK_OBJECT(par_user);
CHECK_OBJECT(par_user);
Py_DECREF(par_user);
par_user = NULL;
CHECK_OBJECT(par_group);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);
par_group = NULL;
CHECK_OBJECT(par_extra_groups);
CHECK_OBJECT(par_extra_groups);
Py_DECREF(par_extra_groups);
par_extra_groups = NULL;
CHECK_OBJECT(par_umask);
CHECK_OBJECT(par_umask);
Py_DECREF(par_umask);
par_umask = NULL;
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
struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_locals {
struct Nuitka_CellObject *var_stream_contents;
PyObject *var_drain_stream;
PyObject *var_process;
PyObject *var_tg;
PyObject *var_output;
PyObject *var_errors;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
};
#endif

static PyObject *anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_locals *coroutine_heap = (struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_stream_contents = Nuitka_Cell_NewEmpty();
coroutine_heap->var_drain_stream = NULL;
coroutine_heap->var_process = NULL;
coroutine_heap->var_tg = NULL;
coroutine_heap->var_output = NULL;
coroutine_heap->var_errors = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f40940a3395dfc40f0007788502efc63);
tmp_closure_1[0] = coroutine_heap->var_stream_contents;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream(tstate, tmp_annotations_1, tmp_closure_1);

assert(coroutine_heap->var_drain_stream == NULL);
coroutine_heap->var_drain_stream = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ba0a3afcdc3054e12e9d5b9c49a2b394, module_anyio$_core$_subprocesses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine->m_closure[12]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stdin);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[12]);
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_input);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[7]);
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_287e8214850d69ace88b23282955e674;
coroutine->m_frame->m_frame.f_lineno = 89;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 89;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_kw_call_dict_value_12_1;
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_called_value_1 = module_var_accessor_anyio$_core$_subprocesses$open_process(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_open_process);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_command);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_input);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[7]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_dict_value_0_1 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[12]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stdin);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[12]);
condexpr_end_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[13]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stdout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[13]);
if (Nuitka_Cell_GET(coroutine->m_closure[11]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stderr);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[11]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cwd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[10]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_startupinfo);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 98;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_5_1 = Nuitka_Cell_GET(coroutine->m_closure[10]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_creationflags);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 99;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_start_new_session);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 100;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_7_1 = Nuitka_Cell_GET(coroutine->m_closure[9]);
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_pass_fds);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 101;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_8_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
if (Nuitka_Cell_GET(coroutine->m_closure[15]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_user);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 102;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_9_1 = Nuitka_Cell_GET(coroutine->m_closure[15]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 103;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_10_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_groups);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_11_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[14]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_umask);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 105;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_12_1 = Nuitka_Cell_GET(coroutine->m_closure[14]);
coroutine->m_frame->m_frame.f_lineno = 91;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_7a93eea852241af2c140d770e1fb75a8_tuple);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_condition_result_2, sizeof(nuitka_bool), &tmp_truth_name_1, sizeof(int), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), &tmp_kw_call_dict_value_5_1, sizeof(PyObject *), &tmp_kw_call_dict_value_6_1, sizeof(PyObject *), &tmp_kw_call_dict_value_7_1, sizeof(PyObject *), &tmp_kw_call_dict_value_8_1, sizeof(PyObject *), &tmp_kw_call_dict_value_9_1, sizeof(PyObject *), &tmp_kw_call_dict_value_10_1, sizeof(PyObject *), &tmp_kw_call_dict_value_11_1, sizeof(PyObject *), &tmp_kw_call_dict_value_12_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_condition_result_2, sizeof(nuitka_bool), &tmp_truth_name_1, sizeof(int), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), &tmp_kw_call_dict_value_5_1, sizeof(PyObject *), &tmp_kw_call_dict_value_6_1, sizeof(PyObject *), &tmp_kw_call_dict_value_7_1, sizeof(PyObject *), &tmp_kw_call_dict_value_8_1, sizeof(PyObject *), &tmp_kw_call_dict_value_9_1, sizeof(PyObject *), &tmp_kw_call_dict_value_10_1, sizeof(PyObject *), &tmp_kw_call_dict_value_11_1, sizeof(PyObject *), &tmp_kw_call_dict_value_12_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = yield_return_value;
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___aenter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_4 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___aexit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
coroutine->m_frame->m_frame.f_lineno = 91;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_expression_value_6 = coroutine_heap->tmp_with_2__enter;
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_enter);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_2__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_2__enter = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_assign_source_7 = coroutine_heap->tmp_with_2__enter;
assert(coroutine_heap->var_process == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_process = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_REPEATED(tstate, 2, Py_None);
assert(Nuitka_Cell_GET(coroutine_heap->var_stream_contents) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_stream_contents, tmp_assign_source_8);

}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_anyio$_core$_subprocesses$create_task_group(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_create_task_group);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___aenter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_8 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_11 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___aexit__);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
coroutine->m_frame->m_frame.f_lineno = 108;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_10 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_enter);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
tmp_assign_source_12 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_14 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_tg == NULL);
Py_INCREF(tmp_assign_source_14);
coroutine_heap->var_tg = tmp_assign_source_14;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_11 = coroutine_heap->var_process;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_stdout);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(coroutine_heap->var_tg);
tmp_expression_value_12 = coroutine_heap->var_tg;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_start_soon);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(coroutine_heap->var_drain_stream);
tmp_args_element_value_1 = coroutine_heap->var_drain_stream;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_13 = coroutine_heap->var_process;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_stdout);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_3 = const_int_0;
coroutine->m_frame->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_14 = coroutine_heap->var_process;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_stderr);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(coroutine_heap->var_tg);
tmp_expression_value_15 = coroutine_heap->var_tg;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_start_soon);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(coroutine_heap->var_drain_stream);
tmp_args_element_value_4 = coroutine_heap->var_drain_stream;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_16 = coroutine_heap->var_process;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_stderr);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_6 = const_int_pos_1;
coroutine->m_frame->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_4;
int tmp_truth_name_5;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_17 = coroutine_heap->var_process;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_stdin);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_3);

coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_input);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}

tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[7]));
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_7;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 116;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_21 = coroutine_heap->var_process;
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_stdin);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_send);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_input);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_expression_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_18 = ASYNC_AWAIT(tstate, tmp_expression_value_19, await_normal);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_18;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 117;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_24 = coroutine_heap->var_process;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_stdin);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
coroutine->m_frame->m_frame.f_lineno = 117;
tmp_expression_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_22 = ASYNC_AWAIT(tstate, tmp_expression_value_23, await_normal);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_22;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_4:;
{
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_called_instance_2;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 119;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_called_instance_2 = coroutine_heap->var_process;
coroutine->m_frame->m_frame.f_lineno = 119;
tmp_expression_value_26 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_wait);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_expression_value_25 = ASYNC_AWAIT(tstate, tmp_expression_value_26, await_normal);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_25;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_7;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_15;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
coroutine->m_frame->m_frame.f_lineno = 108;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_28 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_8;
}
tmp_expression_value_27 = ASYNC_AWAIT(tstate, tmp_expression_value_28, await_exit);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_27;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_28, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_8;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_8;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 108;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto try_except_handler_8;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 108;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto try_except_handler_8;
branch_end_5:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_called_value_9;
PyObject *tmp_await_result_4;
coroutine->m_frame->m_frame.f_lineno = 108;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_expression_value_30 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
tmp_expression_value_29 = ASYNC_AWAIT(tstate, tmp_expression_value_30, await_exit);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_29;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
branch_no_7:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_called_value_10;
PyObject *tmp_await_result_5;
coroutine->m_frame->m_frame.f_lineno = 108;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_10 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_expression_value_32 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_exit);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 9;
coroutine->m_yield_from = tmp_expression_value_31;
coroutine->m_awaiting = true;
return NULL;

yield_return_9:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_5;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
branch_no_8:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
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
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_10 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
coroutine->m_frame->m_frame.f_lineno = 91;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_11 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_11 = EXC_TYPE(tstate);
tmp_args_element_value_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_12); 
tmp_args_element_value_13 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_13 == NULL) {
    tmp_args_element_value_13 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_expression_value_34 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_9;
}
tmp_expression_value_33 = ASYNC_AWAIT(tstate, tmp_expression_value_34, await_exit);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_9;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 10;
coroutine->m_yield_from = tmp_expression_value_33;
coroutine->m_awaiting = true;
return NULL;

yield_return_10:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_11, sizeof(bool), &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_9;
}
tmp_operand_value_2 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_9;
}
tmp_condition_result_11 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto try_except_handler_9;
branch_no_10:;
goto branch_end_9;
branch_no_9:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto try_except_handler_9;
branch_end_9:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_called_value_12;
PyObject *tmp_await_result_6;
coroutine->m_frame->m_frame.f_lineno = 91;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_12 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_expression_value_36 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_expression_value_35 = ASYNC_AWAIT(tstate, tmp_expression_value_36, await_exit);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_36, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 11;
coroutine->m_yield_from = tmp_expression_value_35;
coroutine->m_awaiting = true;
return NULL;

yield_return_11:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_36, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
branch_no_11:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_called_value_13;
PyObject *tmp_await_result_7;
coroutine->m_frame->m_frame.f_lineno = 91;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_13 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_expression_value_38 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_expression_value_37 = ASYNC_AWAIT(tstate, tmp_expression_value_38, await_exit);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_38, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 12;
coroutine->m_yield_from = tmp_expression_value_37;
coroutine->m_awaiting = true;
return NULL;

yield_return_12:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_38, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_2;
}
tmp_await_result_7 = yield_return_value;
CHECK_OBJECT(tmp_await_result_7);
Py_DECREF(tmp_await_result_7);
}
branch_no_12:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
Py_DECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
Py_DECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
Py_DECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_stream_contents));
tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine_heap->var_stream_contents);
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_10;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_11;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_11;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_9;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_10;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_20 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var_output == NULL);
Py_INCREF(tmp_assign_source_20);
coroutine_heap->var_output = tmp_assign_source_20;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_21 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var_errors == NULL);
Py_INCREF(tmp_assign_source_21);
coroutine_heap->var_errors = tmp_assign_source_21;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_6;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_39;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_check);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_6 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_39 = coroutine_heap->var_process;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_returncode);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = const_int_0;
tmp_and_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_14 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_14 = module_var_accessor_anyio$_core$_subprocesses$CalledProcessError(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_CalledProcessError);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_anyio$_core$_subprocesses$cast(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_40 = coroutine_heap->var_process;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_returncode);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_14);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_command);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_output);
tmp_args_element_value_18 = coroutine_heap->var_output;
CHECK_OBJECT(coroutine_heap->var_errors);
tmp_args_element_value_19 = coroutine_heap->var_errors;
coroutine->m_frame->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
tmp_called_value_16 = module_var_accessor_anyio$_core$_subprocesses$CompletedProcess(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_CompletedProcess);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_command);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_20 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_value_17 = module_var_accessor_anyio$_core$_subprocesses$cast(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(coroutine_heap->var_process);
tmp_expression_value_41 = coroutine_heap->var_process;
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_returncode);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_output);
tmp_args_element_value_24 = coroutine_heap->var_output;
CHECK_OBJECT(coroutine_heap->var_errors);
tmp_args_element_value_25 = coroutine_heap->var_errors;
coroutine->m_frame->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_24, tmp_args_element_value_25};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cccccccccccccccccooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

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
    coroutine->m_closure[1],
    coroutine->m_closure[7],
    coroutine->m_closure[12],
    coroutine->m_closure[13],
    coroutine->m_closure[11],
    coroutine->m_closure[0],
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[10],
    coroutine->m_closure[2],
    coroutine->m_closure[9],
    coroutine->m_closure[8],
    coroutine->m_closure[15],
    coroutine->m_closure[6],
    coroutine->m_closure[5],
    coroutine->m_closure[14],
    coroutine_heap->var_stream_contents,
    coroutine_heap->var_drain_stream,
    coroutine_heap->var_process,
    coroutine_heap->var_tg,
    coroutine_heap->var_output,
    coroutine_heap->var_errors
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_stream_contents);
CHECK_OBJECT(coroutine_heap->var_stream_contents);
Py_DECREF(coroutine_heap->var_stream_contents);
coroutine_heap->var_stream_contents = NULL;
CHECK_OBJECT(coroutine_heap->var_drain_stream);
CHECK_OBJECT(coroutine_heap->var_drain_stream);
Py_DECREF(coroutine_heap->var_drain_stream);
coroutine_heap->var_drain_stream = NULL;
CHECK_OBJECT(coroutine_heap->var_process);
CHECK_OBJECT(coroutine_heap->var_process);
Py_DECREF(coroutine_heap->var_process);
coroutine_heap->var_process = NULL;
Py_XDECREF(coroutine_heap->var_tg);
coroutine_heap->var_tg = NULL;
CHECK_OBJECT(coroutine_heap->var_output);
CHECK_OBJECT(coroutine_heap->var_output);
Py_DECREF(coroutine_heap->var_output);
coroutine_heap->var_output = NULL;
CHECK_OBJECT(coroutine_heap->var_errors);
CHECK_OBJECT(coroutine_heap->var_errors);
Py_DECREF(coroutine_heap->var_errors);
coroutine_heap->var_errors = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_stream_contents);
CHECK_OBJECT(coroutine_heap->var_stream_contents);
Py_DECREF(coroutine_heap->var_stream_contents);
coroutine_heap->var_stream_contents = NULL;
CHECK_OBJECT(coroutine_heap->var_drain_stream);
CHECK_OBJECT(coroutine_heap->var_drain_stream);
Py_DECREF(coroutine_heap->var_drain_stream);
coroutine_heap->var_drain_stream = NULL;
Py_XDECREF(coroutine_heap->var_process);
coroutine_heap->var_process = NULL;
Py_XDECREF(coroutine_heap->var_tg);
coroutine_heap->var_tg = NULL;
Py_XDECREF(coroutine_heap->var_output);
coroutine_heap->var_output = NULL;
Py_XDECREF(coroutine_heap->var_errors);
coroutine_heap->var_errors = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_11;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_context,
        module_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_run_process,
        NULL,
        code_objects_ba0a3afcdc3054e12e9d5b9c49a2b394,
        closure,
        16,
#if 1
        sizeof(struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_index = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_index;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_stream;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[0];
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_stream);
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
par_stream = NULL;
CHECK_OBJECT(par_index);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
par_index = NULL;
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
struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_locals {
PyObject *var_buffer;
PyObject *var_chunk;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
bool tmp_result;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_locals *coroutine_heap = (struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_buffer = NULL;
coroutine_heap->var_chunk = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_eca41c106493b0c4ab1c10dfddb55ecb, module_anyio$_core$_subprocesses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_1 == NULL));
coroutine->m_frame->m_frame.f_lineno = 82;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 82;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_buffer == NULL);
coroutine_heap->var_buffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_value_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}

tmp_value_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = yield_return_value;
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_value_value_2;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_2 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto try_except_handler_3;
}
tmp_assign_source_3 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = coroutine_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_4 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var_chunk;
    coroutine_heap->var_chunk = tmp_assign_source_4;
    Py_INCREF(coroutine_heap->var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (coroutine_heap->var_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_buffer);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 84;
coroutine_heap->type_description_1 = "ccooc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = coroutine_heap->var_buffer;
CHECK_OBJECT(coroutine_heap->var_chunk);
tmp_args_element_value_1 = coroutine_heap->var_chunk;
coroutine->m_frame->m_frame.f_lineno = 84;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 84;
coroutine_heap->type_description_1 = "ccooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "ccooc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (coroutine_heap->var_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_buffer);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = coroutine_heap->var_buffer;
coroutine->m_frame->m_frame.f_lineno = 86;
tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getvalue);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stream_contents);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_index);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 86;
coroutine_heap->type_description_1 = "ccooc";
    goto frame_exception_exit_1;
}
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
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
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_buffer,
    coroutine_heap->var_chunk,
    coroutine->m_closure[2]
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_buffer);
coroutine_heap->var_buffer = NULL;
Py_XDECREF(coroutine_heap->var_chunk);
coroutine_heap->var_chunk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_buffer);
coroutine_heap->var_buffer = NULL;
Py_XDECREF(coroutine_heap->var_chunk);
coroutine_heap->var_chunk = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_context,
        module_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_drain_stream,
        mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e,
        code_objects_eca41c106493b0c4ab1c10dfddb55ecb,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream$$$coroutine__1_drain_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_subprocesses$$$function__2_open_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_command = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_stdin = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_stdout = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_stderr = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_cwd = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_env = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_startupinfo = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_creationflags = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_start_new_session = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_pass_fds = Nuitka_Cell_New1(python_pars[9]);
struct Nuitka_CellObject *par_user = Nuitka_Cell_New1(python_pars[10]);
struct Nuitka_CellObject *par_group = Nuitka_Cell_New1(python_pars[11]);
struct Nuitka_CellObject *par_extra_groups = Nuitka_Cell_New1(python_pars[12]);
struct Nuitka_CellObject *par_umask = Nuitka_Cell_New1(python_pars[13]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[14];
tmp_closure_1[0] = par_command;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_creationflags;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_cwd;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_env;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_extra_groups;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_group;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_pass_fds;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_start_new_session;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_startupinfo;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_stderr;
Py_INCREF(tmp_closure_1[9]);
tmp_closure_1[10] = par_stdin;
Py_INCREF(tmp_closure_1[10]);
tmp_closure_1[11] = par_stdout;
Py_INCREF(tmp_closure_1[11]);
tmp_closure_1[12] = par_umask;
Py_INCREF(tmp_closure_1[12]);
tmp_closure_1[13] = par_user;
Py_INCREF(tmp_closure_1[13]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_command);
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
par_command = NULL;
CHECK_OBJECT(par_stdin);
CHECK_OBJECT(par_stdin);
Py_DECREF(par_stdin);
par_stdin = NULL;
CHECK_OBJECT(par_stdout);
CHECK_OBJECT(par_stdout);
Py_DECREF(par_stdout);
par_stdout = NULL;
CHECK_OBJECT(par_stderr);
CHECK_OBJECT(par_stderr);
Py_DECREF(par_stderr);
par_stderr = NULL;
CHECK_OBJECT(par_cwd);
CHECK_OBJECT(par_cwd);
Py_DECREF(par_cwd);
par_cwd = NULL;
CHECK_OBJECT(par_env);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
par_env = NULL;
CHECK_OBJECT(par_startupinfo);
CHECK_OBJECT(par_startupinfo);
Py_DECREF(par_startupinfo);
par_startupinfo = NULL;
CHECK_OBJECT(par_creationflags);
CHECK_OBJECT(par_creationflags);
Py_DECREF(par_creationflags);
par_creationflags = NULL;
CHECK_OBJECT(par_start_new_session);
CHECK_OBJECT(par_start_new_session);
Py_DECREF(par_start_new_session);
par_start_new_session = NULL;
CHECK_OBJECT(par_pass_fds);
CHECK_OBJECT(par_pass_fds);
Py_DECREF(par_pass_fds);
par_pass_fds = NULL;
CHECK_OBJECT(par_user);
CHECK_OBJECT(par_user);
Py_DECREF(par_user);
par_user = NULL;
CHECK_OBJECT(par_group);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);
par_group = NULL;
CHECK_OBJECT(par_extra_groups);
CHECK_OBJECT(par_extra_groups);
Py_DECREF(par_extra_groups);
par_extra_groups = NULL;
CHECK_OBJECT(par_umask);
CHECK_OBJECT(par_umask);
Py_DECREF(par_umask);
par_umask = NULL;
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
struct anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_locals {
PyObject *var_kwargs;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_locals *coroutine_heap = (struct anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_kwargs = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(coroutine_heap->var_kwargs == NULL);
coroutine_heap->var_kwargs = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_69e1cf526cb0762acc7ad9afdd11c5e8, module_anyio$_core$_subprocesses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[13]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_user);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[13]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[13]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_user);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_dictset_value = Nuitka_Cell_GET(coroutine->m_closure[13]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
coroutine_heap->tmp_dictset_dict = coroutine_heap->var_kwargs;
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_user;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

assert(!(coroutine_heap->tmp_res != 0));
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 181;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 182;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_dictset_value = Nuitka_Cell_GET(coroutine->m_closure[5]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
coroutine_heap->tmp_dictset_dict = coroutine_heap->var_kwargs;
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_group;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

assert(!(coroutine_heap->tmp_res != 0));
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_groups);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 184;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 185;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_dictset_value = Nuitka_Cell_GET(coroutine->m_closure[5]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
coroutine_heap->tmp_dictset_dict = coroutine_heap->var_kwargs;
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_extra_groups;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

assert(!(coroutine_heap->tmp_res != 0));
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (Nuitka_Cell_GET(coroutine->m_closure[12]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_umask);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(coroutine->m_closure[12]);
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 187;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
if (Nuitka_Cell_GET(coroutine->m_closure[12]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_umask);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 188;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_dictset_value = Nuitka_Cell_GET(coroutine->m_closure[12]);
CHECK_OBJECT(coroutine_heap->var_kwargs);
coroutine_heap->tmp_dictset_dict = coroutine_heap->var_kwargs;
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_umask;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

assert(!(coroutine_heap->tmp_res != 0));
branch_no_4:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
coroutine->m_frame->m_frame.f_lineno = 190;
tmp_called_value_1 = module_var_accessor_anyio$_core$_subprocesses$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 190;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_open_process);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_command);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 191;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_stdin;
if (Nuitka_Cell_GET(coroutine->m_closure[10]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stdin);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 192;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[10]);
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 9 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_stdout;
if (Nuitka_Cell_GET(coroutine->m_closure[11]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stdout);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 193;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[11]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_stderr;
if (Nuitka_Cell_GET(coroutine->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stderr);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 194;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[9]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_cwd;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cwd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 195;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_env;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 196;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_startupinfo;
if (Nuitka_Cell_GET(coroutine->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_startupinfo);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 197;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[8]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_creationflags;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_creationflags);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 198;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_start_new_session;
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_start_new_session);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 199;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_pass_fds;
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_pass_fds);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 200;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[6]);
coroutine_heap->tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(coroutine_heap->var_kwargs);
tmp_direct_call_arg4_1 = coroutine_heap->var_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_direct_call_arg4_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), &tmp_direct_call_arg4_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 190;
coroutine_heap->type_description_1 = "cccccccccccccco";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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
    coroutine->m_closure[10],
    coroutine->m_closure[11],
    coroutine->m_closure[9],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[8],
    coroutine->m_closure[1],
    coroutine->m_closure[7],
    coroutine->m_closure[6],
    coroutine->m_closure[13],
    coroutine->m_closure[5],
    coroutine->m_closure[4],
    coroutine->m_closure[12],
    coroutine_heap->var_kwargs
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_kwargs);
CHECK_OBJECT(coroutine_heap->var_kwargs);
Py_DECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_kwargs);
CHECK_OBJECT(coroutine_heap->var_kwargs);
Py_DECREF(coroutine_heap->var_kwargs);
coroutine_heap->var_kwargs = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

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

static PyObject *MAKE_COROUTINE_anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_context,
        module_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_open_process,
        NULL,
        code_objects_69e1cf526cb0762acc7ad9afdd11c5e8,
        closure,
        14,
#if 1
        sizeof(struct anyio$_core$_subprocesses$$$function__2_open_process$$$coroutine__1_open_process_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_subprocesses$$$function__1_run_process,
        mod_consts.const_str_plain_run_process,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ba0a3afcdc3054e12e9d5b9c49a2b394,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_subprocesses,
        mod_consts.const_str_digest_8f57142597442f8d1182e70d9c4cfba8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream,
        mod_consts.const_str_plain_drain_stream,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f38f3c063c129f65f328b875c81c082e,
#endif
        code_objects_eca41c106493b0c4ab1c10dfddb55ecb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_subprocesses,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__2_open_process(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_subprocesses$$$function__2_open_process,
        mod_consts.const_str_plain_open_process,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_69e1cf526cb0762acc7ad9afdd11c5e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_subprocesses,
        mod_consts.const_str_digest_059aaf0277630f542fb28d44cdb10483,
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

static function_impl_code const function_table_anyio$_core$_subprocesses[] = {
impl_anyio$_core$_subprocesses$$$function__1_run_process$$$coroutine__1_run_process$$$function__1_drain_stream,
impl_anyio$_core$_subprocesses$$$function__1_run_process,
impl_anyio$_core$_subprocesses$$$function__2_open_process,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$_core$_subprocesses);
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
        module_anyio$_core$_subprocesses,
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
        function_table_anyio$_core$_subprocesses,
        sizeof(function_table_anyio$_core$_subprocesses) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio._core._subprocesses";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$_core$_subprocesses(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$_core$_subprocesses");

    // Store the module for future use.
    module_anyio$_core$_subprocesses = module;

    moduledict_anyio$_core$_subprocesses = MODULE_DICT(module_anyio$_core$_subprocesses);

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
        PRINT_STRING("anyio$_core$_subprocesses: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$_core$_subprocesses: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$_core$_subprocesses: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._subprocesses" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$_core$_subprocesses\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_subprocesses,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_subprocesses,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_subprocesses,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_subprocesses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_subprocesses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_subprocesses);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$_core$_subprocesses);
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

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_subprocesses;
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
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$_core$_subprocesses = MAKE_MODULE_FRAME(code_objects_5b31f5340576d9a98f8d5419c4d8642e, module_anyio$_core$_subprocesses);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_subprocesses);
assert(Py_REFCNT(frame_frame_anyio$_core$_subprocesses) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$_core$_subprocesses$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$_core$_subprocesses$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_subprocesses;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_ec662c30c2e2a9dab1890f36eaef9254_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$_core$_subprocesses->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

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
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_AsyncIterable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncIterable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterable, tmp_assign_source_8);
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
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
tmp_import_name_from_5 = IMPORT_HARD_OS();
assert(!(tmp_import_name_from_5 == NULL));
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_PathLike,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_PathLike);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_subprocesses;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_b2835c3a88a92647b377b2e6d0084cdf_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$_core$_subprocesses->m_frame.f_lineno = 7;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_PIPE,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PIPE);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_PIPE, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_CalledProcessError,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_CalledProcessError);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CalledProcessError, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_CompletedProcess,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_CompletedProcess);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletedProcess, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_18 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_18);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_subprocesses;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Process_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_anyio$_core$_subprocesses->m_frame.f_lineno = 10;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_Process,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Process);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_Process, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__eventloop;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$_core$_subprocesses;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_get_async_backend_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anyio$_core$_subprocesses->m_frame.f_lineno = 11;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_get_async_backend,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_get_async_backend);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__tasks;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$_core$_subprocesses;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_create_task_group_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anyio$_core$_subprocesses->m_frame.f_lineno = 12;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_create_task_group,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_create_task_group);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
tmp_import_name_from_16 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_16 == NULL));
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anyio$_core$_subprocesses,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_subprocesses$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple;
tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_StrOrBytesPath, tmp_assign_source_27);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_anyio$_core$_subprocesses$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_StrOrBytesPath;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
tmp_dict_key_1 = mod_consts.const_str_plain_input;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 15 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_stdin;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_stdout;
tmp_dict_value_1 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_stderr;
tmp_dict_value_1 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_check;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_cwd;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_env;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_startupinfo;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_creationflags;
tmp_dict_value_1 = const_int_0;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_start_new_session;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_pass_fds;
tmp_dict_value_1 = const_tuple_empty;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_user;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_group;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_groups;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_umask;
tmp_dict_value_1 = const_int_neg_1;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1437346bde0b802e1d602d44de4949d7);

tmp_assign_source_28 = MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__1_run_process(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_run_process, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_2;
tmp_dict_key_2 = mod_consts.const_str_plain_stdin;
tmp_dict_value_2 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_2 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_stdout;
tmp_dict_value_2 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_stderr;
tmp_dict_value_2 = module_var_accessor_anyio$_core$_subprocesses$PIPE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PIPE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_cwd;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_env;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_startupinfo;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_creationflags;
tmp_dict_value_2 = const_int_0;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_start_new_session;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_pass_fds;
tmp_dict_value_2 = const_tuple_empty;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_user;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_group;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_extra_groups;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_umask;
tmp_dict_value_2 = const_int_neg_1;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_10afb630b37e89dc36da37c2b944078c);

tmp_assign_source_29 = MAKE_FUNCTION_anyio$_core$_subprocesses$$$function__2_open_process(tstate, tmp_kw_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process, tmp_assign_source_29);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_subprocesses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_subprocesses->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_subprocesses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$_core$_subprocesses);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$_core$_subprocesses", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._subprocesses" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$_core$_subprocesses);
    return module_anyio$_core$_subprocesses;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_subprocesses, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_subprocesses", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

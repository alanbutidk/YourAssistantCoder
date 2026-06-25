/* Generated code for Python module 'anyio$abc$_eventloop'
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



/* The "module_anyio$abc$_eventloop" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_eventloop;
PyDictObject *moduledict_anyio$abc$_eventloop;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_9ebaa0af3a29f211d10303d0412afd95;
PyObject *const_str_plain_checkpoint;
PyObject *const_str_digest_a4c22a28dec2cb486923d25242669b8d;
PyObject *const_str_digest_2b3bb8c9e345a2ef80e7390b5b7d1bc8;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_current_effective_deadline;
PyObject *const_str_plain_math;
PyObject *const_str_plain_inf;
PyObject *const_str_plain_checkpoint_if_cancelled;
PyObject *const_str_digest_f99091ebafb9458194bc1134fd1531c7;
PyObject *const_str_digest_bc0c850947f25ad55194bbf6e3d7296a;
PyObject *const_str_plain_create_cancel_scope;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_shield_tuple;
PyObject *const_str_plain_sleep;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_cancel_shielded_checkpoint;
PyObject *const_str_digest_5a954641e74060e491eae5d7035504d3;
PyObject *const_str_digest_f8d9d73720e53eb2e0938a2ad03a82cb;
PyObject *const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f;
PyObject *const_str_plain_run_sync_in_worker_thread;
PyObject *const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3;
PyObject *const_str_plain_open_process;
PyObject *const_str_digest_dbd84da4290b5857f509296661f7badc;
PyObject *const_str_plain_connect_tcp;
PyObject *const_str_digest_b8aa81d12b32e5f10020071ae0786ec8;
PyObject *const_str_plain_connect_unix;
PyObject *const_str_digest_2588151892296a506d54715728524894;
PyObject *const_str_plain_create_udp_socket;
PyObject *const_str_digest_86612086649285aa8508d7d10e3b6cbe;
PyObject *const_str_plain_create_unix_datagram_socket;
PyObject *const_str_digest_a390923b459889e2e6f5ac4f11e35963;
PyObject *const_str_plain_getaddrinfo;
PyObject *const_str_digest_d77cb694d056511c6d85872c54f0aaaa;
PyObject *const_str_plain_getnameinfo;
PyObject *const_str_digest_718d097ac977f1c2dee18185a27f86e2;
PyObject *const_str_plain_wait_readable;
PyObject *const_str_digest_e844eec4df1e415ee331df6623aababa;
PyObject *const_str_plain_wait_writable;
PyObject *const_str_digest_79562e71a6cd880a6637c007c8cbf931;
PyObject *const_str_plain_wrap_listener_socket;
PyObject *const_str_digest_41702868d440aaa9f3a63ff02b0137d3;
PyObject *const_str_plain_wrap_stream_socket;
PyObject *const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34;
PyObject *const_str_plain_wrap_unix_stream_socket;
PyObject *const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2;
PyObject *const_str_plain_wrap_udp_socket;
PyObject *const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5;
PyObject *const_str_plain_wrap_connected_udp_socket;
PyObject *const_str_digest_3dca7c7d3925ded3cb1462ec19660b18;
PyObject *const_str_plain_wrap_unix_datagram_socket;
PyObject *const_str_digest_890a279c9083a8a1def1abb33742b695;
PyObject *const_str_plain_wrap_connected_unix_datagram_socket;
PyObject *const_str_digest_344999ff0894464cf51f976f11db0de9;
PyObject *const_str_plain_wait_all_tasks_blocked;
PyObject *const_str_digest_83208cad653b0ee7c4554ce458eb56ef;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_a39737fdacf2d676276e76e36ad74e0f_tuple;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_AbstractContextManager_tuple;
PyObject *const_str_plain_AbstractContextManager;
PyObject *const_str_plain_PathLike;
PyObject *const_str_plain_signal;
PyObject *const_tuple_str_plain_Signals_tuple;
PyObject *const_str_plain_Signals;
PyObject *const_str_plain_socket;
PyObject *const_tuple_99a30164d6ff21e2a192b0133b41017a_tuple;
PyObject *const_str_plain_AddressFamily;
PyObject *const_str_plain_SocketKind;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_TypeVarTuple;
PyObject *const_str_plain_Unpack;
PyObject *const_str_plain_TypeAlias;
PyObject *const_tuple_str_plain_T_Retval_tuple;
PyObject *const_str_plain_T_Retval;
PyObject *const_tuple_str_plain_PosArgsT_tuple;
PyObject *const_str_plain_PosArgsT;
PyObject *const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple;
PyObject *const_str_plain_StrOrBytesPath;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_AsyncBackend_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_13db0bbe48e74b2c054f7d5913250bd7;
PyObject *const_str_plain_AsyncBackend;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_56;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_468707ce6c851dc22187169cfddbfa3c;
PyObject *const_str_digest_79c411a7a843b282d982409bd4474852;
PyObject *const_str_plain_run;
PyObject *const_str_digest_999e702b04d89210164febda7de418d0;
PyObject *const_dict_d8a87def7d74b8d00e0a6e345b09bc91;
PyObject *const_str_digest_4ac91c7db8eee61115cd30b770bfd34b;
PyObject *const_str_plain_current_token;
PyObject *const_str_digest_6d260af7bf72e96d7faf29919699cd44;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_9682d51aa24e3f78607e1311b0196286;
PyObject *const_str_plain_current_time;
PyObject *const_str_digest_2f9440e808b0abeb757da041ff833e1a;
PyObject *const_dict_46f821f7c855f20ab60347e7e95ebcb0;
PyObject *const_str_digest_24fc8457d12567e2e8d98d3ac1c8db32;
PyObject *const_str_plain_cancelled_exception_class;
PyObject *const_str_digest_50aadd812d6a324a1aa7733fe72207eb;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_dict_71683d80165d2f2ee081c315af2fdde6;
PyObject *const_str_plain_deadline;
PyObject *const_str_plain_shield;
PyObject *const_dict_5ee376269e2d8d72b4bcdba9abb452a8;
PyObject *const_str_digest_f741d761e26bf78678d40e54fe48ef3c;
PyObject *const_str_digest_e5b9f31aed2069dad819c2984d6b766f;
PyObject *const_str_digest_12d5715e89f530221668e692e1b5755e;
PyObject *const_dict_a389fab803381b5660cb3d11330c1d51;
PyObject *const_str_plain_create_task_group;
PyObject *const_str_digest_847ba7076a5807378a267a49aaf94c01;
PyObject *const_dict_e23711663ec8616750b0e4713750b11a;
PyObject *const_str_plain_create_event;
PyObject *const_str_digest_be2b7e29a24741c9512d1c9357c2f467;
PyObject *const_dict_a13293be0da2e10430752e813781f9c5;
PyObject *const_str_plain_create_lock;
PyObject *const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1;
PyObject *const_dict_68253d6e44dfbb09b70616558803e639;
PyObject *const_dict_5b7365a8957b6100e3e7e43774f909af;
PyObject *const_str_plain_create_semaphore;
PyObject *const_str_digest_0bd2fef5d075755fb699701c033ffe97;
PyObject *const_dict_6139eb96854c06a3d6d676456fdbbed6;
PyObject *const_str_plain_create_capacity_limiter;
PyObject *const_str_digest_7d6ee6203f8fd2dce0874a664515c26f;
PyObject *const_tuple_false_none_tuple;
PyObject *const_dict_75b924c22afb758f620c69b36fd753fe;
PyObject *const_str_plain_check_cancelled;
PyObject *const_str_digest_7cb34ee088291762118e3eae33170ca8;
PyObject *const_dict_519d06b021080285f448db02586d39b1;
PyObject *const_str_plain_run_async_from_thread;
PyObject *const_str_digest_6525689759d94fbfa0916cbbd9fab162;
PyObject *const_dict_d9290d6b200b64fbb5d775553cc9f25e;
PyObject *const_str_plain_run_sync_from_thread;
PyObject *const_str_digest_4da7c8026af3efde1a413f010c7b57c1;
PyObject *const_dict_3f6dc272301686aa94d15afaf4b720cb;
PyObject *const_str_plain_create_blocking_portal;
PyObject *const_str_digest_dd7bedce6b617e390054511e601ec965;
PyObject *const_dict_b615d3ef20c16203ea99dfe0e7772412;
PyObject *const_dict_84a3053a6047f2a4fd5e0ead5b0bd968;
PyObject *const_str_plain_setup_process_pool_exit_at_shutdown;
PyObject *const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_f3d283cf18d735706bc4bc59ab6c3d63;
PyObject *const_dict_68115f14644a33c382f78da4e1493da0;
PyObject *const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504;
PyObject *const_str_plain_create_tcp_listener;
PyObject *const_str_digest_c03ac417e89e2a27409ae665b893240e;
PyObject *const_str_plain_create_unix_listener;
PyObject *const_str_digest_2d366544e7b9a9398699038d1f2698dd;
PyObject *const_dict_a071bd2cd3dee4334ed0d0ab9a65cb13;
PyObject *const_dict_a1310c8a2f0dbb58f865faf3db5fab05;
PyObject *const_dict_763b8b5ed60520b3b67e4bc1bc806006;
PyObject *const_dict_b75ad09c22c23b29a5782200cbbb5689;
PyObject *const_dict_8d7622b98e721396ddd13c171944b107;
PyObject *const_dict_cd07e58c8034eb3549629ecc622a02fc;
PyObject *const_dict_c9ee88435f8e2f4041208bf94f03cda7;
PyObject *const_dict_9ea223a816a5d2258bc92415f2879627;
PyObject *const_str_plain_notify_closing;
PyObject *const_str_digest_ceb723981137768e3346694c1fe65af4;
PyObject *const_dict_43ac9f4e78e72da9b622fe67ffbc3b45;
PyObject *const_dict_f5d4d7734f95d194caf1f4a467ac34de;
PyObject *const_dict_6e56cd58c0a56055c522c8252de2662e;
PyObject *const_dict_7871975fc11528f789e7cf084c9188f0;
PyObject *const_dict_bcda7eb29122871b149409334f16936b;
PyObject *const_dict_ae2f5bce61555f84fe61d5810627c3fb;
PyObject *const_dict_8ce7dab9b242d689da32ffbb5b22386a;
PyObject *const_str_plain_current_default_thread_limiter;
PyObject *const_str_digest_b27445edf7f0fcd7dc81996862b355d7;
PyObject *const_dict_43cc275393bc4db959b6f539031d0ece;
PyObject *const_str_plain_open_signal_receiver;
PyObject *const_str_digest_21b4ee4f49f5704c218038c587134ba8;
PyObject *const_dict_68903ff9fbc38ab67503b52b11ef1fac;
PyObject *const_str_plain_get_current_task;
PyObject *const_str_digest_45ebf931a0518bc68e72626faf7b6e65;
PyObject *const_dict_0026de76138e1a0cc7eace7aa12ff6c6;
PyObject *const_str_plain_get_running_tasks;
PyObject *const_str_digest_395ce486dc98d6a8c419e7c8482043aa;
PyObject *const_dict_5998a197eb13357e5f5a710d1963c711;
PyObject *const_str_plain_create_test_runner;
PyObject *const_str_digest_999a38095cda6722f0d97920ba8a7344;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_fd261849bd33f9507af1cd1661c56967;
PyObject *const_str_digest_4a767ab45f0bdfaa21061992bec94433;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_tuple_f1c7af4972d2aa7c0d799b95a02c7dab_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_path_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_total_tokens_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_fast_acquire_tuple;
PyObject *const_tuple_5e9a89951a36d6e8c6f689da70e2e5d4_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_sock_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_options_tuple;
PyObject *const_tuple_2514148e87841b104a7411c8b559baa3_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple;
PyObject *const_tuple_d62609ce98fe0d70234056c4abef441e_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_sockaddr_str_plain_flags_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_obj_tuple;
PyObject *const_tuple_8fb715243bf80d416d844d5e214dba2e_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_signals_tuple;
PyObject *const_tuple_dc54bde17f2b81a9c1b323d934133b62_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple;
PyObject *const_tuple_fa71e36439f92ffc93be8801d9e464f5_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_workers_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_delay_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[229];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio.abc._eventloop"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ebaa0af3a29f211d10303d0412afd95);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b3bb8c9e345a2ef80e7390b5b7d1bc8);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_inf);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc0c850947f25ad55194bbf6e3d7296a);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_cancel_scope);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8d9d73720e53eb2e0938a2ad03a82cb);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_in_worker_thread);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_process);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect_tcp);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect_unix);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_2588151892296a506d54715728524894);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_udp_socket);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_unix_datagram_socket);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_getnameinfo);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_readable);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_listener_socket);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_stream_socket);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_stream_socket);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_udp_socket);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_udp_socket);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_datagram_socket);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_all_tasks_blocked);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_a39737fdacf2d676276e76e36ad74e0f_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractContextManager_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractContextManager);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_signal);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signals_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signals);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_99a30164d6ff21e2a192b0133b41017a_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_AddressFamily);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketKind);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVarTuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Unpack);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_Retval_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_T_Retval);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PosArgsT_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_PosArgsT);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrOrBytesPath);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBackend_tuple_empty_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_13db0bbe48e74b2c054f7d5913250bd7);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBackend);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_56);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_468707ce6c851dc22187169cfddbfa3c);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_79c411a7a843b282d982409bd4474852);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_999e702b04d89210164febda7de418d0);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ac91c7db8eee61115cd30b770bfd34b);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_token);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d260af7bf72e96d7faf29919699cd44);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_9682d51aa24e3f78607e1311b0196286);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f9440e808b0abeb757da041ff833e1a);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_46f821f7c855f20ab60347e7e95ebcb0);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_24fc8457d12567e2e8d98d3ac1c8db32);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_exception_class);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_50aadd812d6a324a1aa7733fe72207eb);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_71683d80165d2f2ee081c315af2fdde6);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_deadline);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_shield);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_f741d761e26bf78678d40e54fe48ef3c);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5b9f31aed2069dad819c2984d6b766f);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_12d5715e89f530221668e692e1b5755e);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_847ba7076a5807378a267a49aaf94c01);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_event);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_be2b7e29a24741c9512d1c9357c2f467);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_a13293be0da2e10430752e813781f9c5);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_lock);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_68253d6e44dfbb09b70616558803e639);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_5b7365a8957b6100e3e7e43774f909af);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_semaphore);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bd2fef5d075755fb699701c033ffe97);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_6139eb96854c06a3d6d676456fdbbed6);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_capacity_limiter);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d6ee6203f8fd2dce0874a664515c26f);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_75b924c22afb758f620c69b36fd753fe);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_cancelled);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb34ee088291762118e3eae33170ca8);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_519d06b021080285f448db02586d39b1);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_async_from_thread);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_6525689759d94fbfa0916cbbd9fab162);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_d9290d6b200b64fbb5d775553cc9f25e);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_from_thread);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_4da7c8026af3efde1a413f010c7b57c1);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_3f6dc272301686aa94d15afaf4b720cb);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_blocking_portal);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd7bedce6b617e390054511e601ec965);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_b615d3ef20c16203ea99dfe0e7772412);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_84a3053a6047f2a4fd5e0ead5b0bd968);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_f3d283cf18d735706bc4bc59ab6c3d63);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_68115f14644a33c382f78da4e1493da0);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_tcp_listener);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_c03ac417e89e2a27409ae665b893240e);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_unix_listener);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d366544e7b9a9398699038d1f2698dd);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_a071bd2cd3dee4334ed0d0ab9a65cb13);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_a1310c8a2f0dbb58f865faf3db5fab05);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_763b8b5ed60520b3b67e4bc1bc806006);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_b75ad09c22c23b29a5782200cbbb5689);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_8d7622b98e721396ddd13c171944b107);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_cd07e58c8034eb3549629ecc622a02fc);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_c9ee88435f8e2f4041208bf94f03cda7);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_closing);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_ceb723981137768e3346694c1fe65af4);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_43ac9f4e78e72da9b622fe67ffbc3b45);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_f5d4d7734f95d194caf1f4a467ac34de);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_6e56cd58c0a56055c522c8252de2662e);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_7871975fc11528f789e7cf084c9188f0);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_bcda7eb29122871b149409334f16936b);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_ae2f5bce61555f84fe61d5810627c3fb);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_8ce7dab9b242d689da32ffbb5b22386a);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_default_thread_limiter);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_b27445edf7f0fcd7dc81996862b355d7);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_43cc275393bc4db959b6f539031d0ece);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_21b4ee4f49f5704c218038c587134ba8);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_68903ff9fbc38ab67503b52b11ef1fac);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_task);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ebf931a0518bc68e72626faf7b6e65);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_0026de76138e1a0cc7eace7aa12ff6c6);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_tasks);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_395ce486dc98d6a8c419e7c8482043aa);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_5998a197eb13357e5f5a710d1963c711);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_test_runner);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_999a38095cda6722f0d97920ba8a7344);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd261849bd33f9507af1cd1661c56967);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a767ab45f0bdfaa21061992bec94433);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_f1c7af4972d2aa7c0d799b95a02c7dab_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_path_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_total_tokens_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_fast_acquire_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_5e9a89951a36d6e8c6f689da70e2e5d4_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_options_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_2514148e87841b104a7411c8b559baa3_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_d62609ce98fe0d70234056c4abef441e_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sockaddr_str_plain_flags_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_8fb715243bf80d416d844d5e214dba2e_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_signals_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_dc54bde17f2b81a9c1b323d934133b62_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_fa71e36439f92ffc93be8801d9e464f5_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_workers_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_delay_tuple);
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
void checkModuleConstants_anyio$abc$_eventloop(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ebaa0af3a29f211d10303d0412afd95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ebaa0af3a29f211d10303d0412afd95);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b3bb8c9e345a2ef80e7390b5b7d1bc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b3bb8c9e345a2ef80e7390b5b7d1bc8);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_effective_deadline);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_inf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inf);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint_if_cancelled);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc0c850947f25ad55194bbf6e3d7296a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc0c850947f25ad55194bbf6e3d7296a);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_cancel_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_cancel_scope);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_shielded_checkpoint);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8d9d73720e53eb2e0938a2ad03a82cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8d9d73720e53eb2e0938a2ad03a82cb);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_in_worker_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_sync_in_worker_thread);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_process);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect_tcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connect_tcp);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect_unix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connect_unix);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_2588151892296a506d54715728524894));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2588151892296a506d54715728524894);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_udp_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_udp_socket);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_unix_datagram_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_unix_datagram_socket);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_getaddrinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getaddrinfo);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_getnameinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getnameinfo);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_readable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_readable);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_writable);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_listener_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_listener_socket);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_stream_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_stream_socket);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_stream_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_unix_stream_socket);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_udp_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_udp_socket);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_udp_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_connected_udp_socket);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_datagram_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_unix_datagram_socket);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_connected_unix_datagram_socket);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_all_tasks_blocked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_all_tasks_blocked);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_a39737fdacf2d676276e76e36ad74e0f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a39737fdacf2d676276e76e36ad74e0f_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractContextManager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AbstractContextManager_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractContextManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractContextManager);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PathLike);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signal);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signals_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Signals_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signals);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_99a30164d6ff21e2a192b0133b41017a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_99a30164d6ff21e2a192b0133b41017a_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_AddressFamily));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AddressFamily);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketKind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketKind);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVarTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVarTuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Unpack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Unpack);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_Retval_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_Retval_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_T_Retval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T_Retval);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PosArgsT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PosArgsT_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_PosArgsT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PosArgsT);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrOrBytesPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrOrBytesPath);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBackend_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncBackend_tuple_empty_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_13db0bbe48e74b2c054f7d5913250bd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13db0bbe48e74b2c054f7d5913250bd7);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBackend);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_56));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_56);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_468707ce6c851dc22187169cfddbfa3c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_468707ce6c851dc22187169cfddbfa3c);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_79c411a7a843b282d982409bd4474852));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79c411a7a843b282d982409bd4474852);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_999e702b04d89210164febda7de418d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_999e702b04d89210164febda7de418d0);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ac91c7db8eee61115cd30b770bfd34b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ac91c7db8eee61115cd30b770bfd34b);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_token);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d260af7bf72e96d7faf29919699cd44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d260af7bf72e96d7faf29919699cd44);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_9682d51aa24e3f78607e1311b0196286));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9682d51aa24e3f78607e1311b0196286);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f9440e808b0abeb757da041ff833e1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f9440e808b0abeb757da041ff833e1a);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_46f821f7c855f20ab60347e7e95ebcb0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_46f821f7c855f20ab60347e7e95ebcb0);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_24fc8457d12567e2e8d98d3ac1c8db32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24fc8457d12567e2e8d98d3ac1c8db32);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_exception_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled_exception_class);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_50aadd812d6a324a1aa7733fe72207eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50aadd812d6a324a1aa7733fe72207eb);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_71683d80165d2f2ee081c315af2fdde6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71683d80165d2f2ee081c315af2fdde6);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deadline);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_shield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shield);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_f741d761e26bf78678d40e54fe48ef3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f741d761e26bf78678d40e54fe48ef3c);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5b9f31aed2069dad819c2984d6b766f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5b9f31aed2069dad819c2984d6b766f);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_12d5715e89f530221668e692e1b5755e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12d5715e89f530221668e692e1b5755e);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task_group);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_847ba7076a5807378a267a49aaf94c01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_847ba7076a5807378a267a49aaf94c01);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_event);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_be2b7e29a24741c9512d1c9357c2f467));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be2b7e29a24741c9512d1c9357c2f467);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_a13293be0da2e10430752e813781f9c5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a13293be0da2e10430752e813781f9c5);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_lock);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_68253d6e44dfbb09b70616558803e639));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68253d6e44dfbb09b70616558803e639);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_5b7365a8957b6100e3e7e43774f909af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5b7365a8957b6100e3e7e43774f909af);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_semaphore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_semaphore);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bd2fef5d075755fb699701c033ffe97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bd2fef5d075755fb699701c033ffe97);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_6139eb96854c06a3d6d676456fdbbed6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6139eb96854c06a3d6d676456fdbbed6);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_capacity_limiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_capacity_limiter);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d6ee6203f8fd2dce0874a664515c26f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d6ee6203f8fd2dce0874a664515c26f);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_75b924c22afb758f620c69b36fd753fe));
CHECK_OBJECT_DEEP(mod_consts.const_dict_75b924c22afb758f620c69b36fd753fe);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_cancelled);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb34ee088291762118e3eae33170ca8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb34ee088291762118e3eae33170ca8);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_519d06b021080285f448db02586d39b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_519d06b021080285f448db02586d39b1);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_async_from_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_async_from_thread);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_6525689759d94fbfa0916cbbd9fab162));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6525689759d94fbfa0916cbbd9fab162);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_d9290d6b200b64fbb5d775553cc9f25e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d9290d6b200b64fbb5d775553cc9f25e);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_from_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_sync_from_thread);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_4da7c8026af3efde1a413f010c7b57c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4da7c8026af3efde1a413f010c7b57c1);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_3f6dc272301686aa94d15afaf4b720cb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3f6dc272301686aa94d15afaf4b720cb);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_blocking_portal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_blocking_portal);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd7bedce6b617e390054511e601ec965));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd7bedce6b617e390054511e601ec965);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_b615d3ef20c16203ea99dfe0e7772412));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b615d3ef20c16203ea99dfe0e7772412);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_84a3053a6047f2a4fd5e0ead5b0bd968));
CHECK_OBJECT_DEEP(mod_consts.const_dict_84a3053a6047f2a4fd5e0ead5b0bd968);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_f3d283cf18d735706bc4bc59ab6c3d63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3d283cf18d735706bc4bc59ab6c3d63);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_68115f14644a33c382f78da4e1493da0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68115f14644a33c382f78da4e1493da0);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504));
CHECK_OBJECT_DEEP(mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_tcp_listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_tcp_listener);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_c03ac417e89e2a27409ae665b893240e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c03ac417e89e2a27409ae665b893240e);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_unix_listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_unix_listener);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d366544e7b9a9398699038d1f2698dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d366544e7b9a9398699038d1f2698dd);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_a071bd2cd3dee4334ed0d0ab9a65cb13));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a071bd2cd3dee4334ed0d0ab9a65cb13);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_a1310c8a2f0dbb58f865faf3db5fab05));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a1310c8a2f0dbb58f865faf3db5fab05);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_763b8b5ed60520b3b67e4bc1bc806006));
CHECK_OBJECT_DEEP(mod_consts.const_dict_763b8b5ed60520b3b67e4bc1bc806006);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_b75ad09c22c23b29a5782200cbbb5689));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b75ad09c22c23b29a5782200cbbb5689);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_8d7622b98e721396ddd13c171944b107));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8d7622b98e721396ddd13c171944b107);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_cd07e58c8034eb3549629ecc622a02fc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cd07e58c8034eb3549629ecc622a02fc);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_c9ee88435f8e2f4041208bf94f03cda7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c9ee88435f8e2f4041208bf94f03cda7);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_closing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_closing);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_ceb723981137768e3346694c1fe65af4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ceb723981137768e3346694c1fe65af4);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_43ac9f4e78e72da9b622fe67ffbc3b45));
CHECK_OBJECT_DEEP(mod_consts.const_dict_43ac9f4e78e72da9b622fe67ffbc3b45);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_f5d4d7734f95d194caf1f4a467ac34de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5d4d7734f95d194caf1f4a467ac34de);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_6e56cd58c0a56055c522c8252de2662e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e56cd58c0a56055c522c8252de2662e);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_7871975fc11528f789e7cf084c9188f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7871975fc11528f789e7cf084c9188f0);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_bcda7eb29122871b149409334f16936b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bcda7eb29122871b149409334f16936b);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_ae2f5bce61555f84fe61d5810627c3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ae2f5bce61555f84fe61d5810627c3fb);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_8ce7dab9b242d689da32ffbb5b22386a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8ce7dab9b242d689da32ffbb5b22386a);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_default_thread_limiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_default_thread_limiter);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_b27445edf7f0fcd7dc81996862b355d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b27445edf7f0fcd7dc81996862b355d7);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_43cc275393bc4db959b6f539031d0ece));
CHECK_OBJECT_DEEP(mod_consts.const_dict_43cc275393bc4db959b6f539031d0ece);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_signal_receiver);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_21b4ee4f49f5704c218038c587134ba8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21b4ee4f49f5704c218038c587134ba8);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_68903ff9fbc38ab67503b52b11ef1fac));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68903ff9fbc38ab67503b52b11ef1fac);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_current_task);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ebf931a0518bc68e72626faf7b6e65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45ebf931a0518bc68e72626faf7b6e65);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_0026de76138e1a0cc7eace7aa12ff6c6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0026de76138e1a0cc7eace7aa12ff6c6);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_tasks);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_395ce486dc98d6a8c419e7c8482043aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_395ce486dc98d6a8c419e7c8482043aa);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_5998a197eb13357e5f5a710d1963c711));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5998a197eb13357e5f5a710d1963c711);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_test_runner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_test_runner);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_999a38095cda6722f0d97920ba8a7344));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_999a38095cda6722f0d97920ba8a7344);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd261849bd33f9507af1cd1661c56967));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd261849bd33f9507af1cd1661c56967);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a767ab45f0bdfaa21061992bec94433));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a767ab45f0bdfaa21061992bec94433);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_f1c7af4972d2aa7c0d799b95a02c7dab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f1c7af4972d2aa7c0d799b95a02c7dab_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_path_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_total_tokens_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_total_tokens_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_fast_acquire_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_fast_acquire_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_5e9a89951a36d6e8c6f689da70e2e5d4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5e9a89951a36d6e8c6f689da70e2e5d4_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_options_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_2514148e87841b104a7411c8b559baa3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2514148e87841b104a7411c8b559baa3_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_d62609ce98fe0d70234056c4abef441e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d62609ce98fe0d70234056c4abef441e_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sockaddr_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_sockaddr_str_plain_flags_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_8fb715243bf80d416d844d5e214dba2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8fb715243bf80d416d844d5e214dba2e_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_signals_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_signals_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_dc54bde17f2b81a9c1b323d934133b62_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc54bde17f2b81a9c1b323d934133b62_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_fa71e36439f92ffc93be8801d9e464f5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa71e36439f92ffc93be8801d9e464f5_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_workers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_workers_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_delay_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_delay_tuple);
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
static PyObject *module_var_accessor_anyio$abc$_eventloop$ABCMeta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$TypeVarTuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVarTuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVarTuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVarTuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVarTuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVarTuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVarTuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVarTuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVarTuple);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_eventloop$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_eventloop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_eventloop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_eventloop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8df1ae2ffc33e4ca1c19088a198645e4;
static PyCodeObject *code_objects_aaf7c399ae22ed07f39c7ad474c0944e;
static PyCodeObject *code_objects_98d3e77e7f87aa5e68e693ad40ed9536;
static PyCodeObject *code_objects_7738f7b1ab6dc0f2d0c83c858879e738;
static PyCodeObject *code_objects_ab4dac301a27fdf255249041bd3bfa3c;
static PyCodeObject *code_objects_ee44fa01a293d9cc64102240bf4832be;
static PyCodeObject *code_objects_25c34123c23e7c0271f4eda7cda31e72;
static PyCodeObject *code_objects_94008ceee9053a5e30b0aa1462411de6;
static PyCodeObject *code_objects_bc53a25031a283ac212308bb0ea9e20e;
static PyCodeObject *code_objects_9523beddaaf0ed9158643483a111217f;
static PyCodeObject *code_objects_c3ab59f55b8ca0eccd8db1965507d2aa;
static PyCodeObject *code_objects_1b72a9d699fccee44a4839afe54ada70;
static PyCodeObject *code_objects_ee79721b5fcb4dc4fd2f23402f756158;
static PyCodeObject *code_objects_1734f19000ed3776b0da9cce3c540d8e;
static PyCodeObject *code_objects_1f29304ec64cbd713b09e75e3c0b307f;
static PyCodeObject *code_objects_ffd151b82a77997e2d1e7c1beae0ba85;
static PyCodeObject *code_objects_1c2613b6e3dc7249646d2736e53fdd7f;
static PyCodeObject *code_objects_829da45e5d980a795df8996b64fdf37d;
static PyCodeObject *code_objects_a02782cb1d93fbdb240c111b1a0d5fda;
static PyCodeObject *code_objects_08b33fb3eda206109c4469912fc37dd5;
static PyCodeObject *code_objects_6ab83ac8790e8db7f138e5b9491d486a;
static PyCodeObject *code_objects_6a31fff855fd0930001821395db2570a;
static PyCodeObject *code_objects_055f305153e15e4f8693d3b2552ff6ff;
static PyCodeObject *code_objects_7a6e91fd22ae2f7fee711ef3823cd688;
static PyCodeObject *code_objects_2a050a4cfc1334da2d9109d29d9118fd;
static PyCodeObject *code_objects_8c10f29ca8e8fc48644c012d8c93cfac;
static PyCodeObject *code_objects_5465abc5e7f852f4f8c964b49e1b6bc9;
static PyCodeObject *code_objects_2f9d8ddedd52a4b9ff6a67186d48c903;
static PyCodeObject *code_objects_1f9ff99d441b7f58730a7b6362f1b6a4;
static PyCodeObject *code_objects_ac78010cd1da0ea86c87d9745798534c;
static PyCodeObject *code_objects_44b4fa2649bcdbef4d8018d4c3ca7cca;
static PyCodeObject *code_objects_db8d6d865963607804e8e66ff192d0d2;
static PyCodeObject *code_objects_ff64c91978745da1fe60d4cd5b15dd48;
static PyCodeObject *code_objects_f5a3115b8d61135190e928ca00ef0718;
static PyCodeObject *code_objects_5e79a2b833ffe35bb75e7d8d1343a70a;
static PyCodeObject *code_objects_3f32c4ddafa24566306014235c40c03b;
static PyCodeObject *code_objects_3f6a7edd147e2068243415045441f64e;
static PyCodeObject *code_objects_3a7035944110d4cb587f96d51da871c9;
static PyCodeObject *code_objects_4d33ce7a145d494d211db8988e26d6d1;
static PyCodeObject *code_objects_825f475f8757d931b3113c8f771cb865;
static PyCodeObject *code_objects_fafed5f4ad2a63a1314c9c52a3b054bc;
static PyCodeObject *code_objects_b216a12365f971484c3aab0aa8959929;
static PyCodeObject *code_objects_bbb626744540ef00445b237315182223;
static PyCodeObject *code_objects_00fc33181be71b1dbc8fa6f836da556b;
static PyCodeObject *code_objects_055db0fe9a8c917860f470827d274ce3;
static PyCodeObject *code_objects_efac02acf5c4ba587e50287d86281d14;
static PyCodeObject *code_objects_0e2b698aa06f511b4b67c68cfd3cb80e;
static PyCodeObject *code_objects_5e02b39acf336c9c50363f7d9cef3c43;
static PyCodeObject *code_objects_9d70d5f535f70759fff132cc1750b30d;
static PyCodeObject *code_objects_ce3711a0ef5c744290848a3215f5d3ce;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fd261849bd33f9507af1cd1661c56967); CHECK_OBJECT(module_filename_obj);
code_objects_8df1ae2ffc33e4ca1c19088a198645e4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4a767ab45f0bdfaa21061992bec94433, mod_consts.const_str_digest_4a767ab45f0bdfaa21061992bec94433, NULL, NULL, 0, 0, 0);
code_objects_aaf7c399ae22ed07f39c7ad474c0944e = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncBackend, mod_consts.const_str_plain_AsyncBackend, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_98d3e77e7f87aa5e68e693ad40ed9536 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel_shielded_checkpoint, mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_7738f7b1ab6dc0f2d0c83c858879e738 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancelled_exception_class, mod_consts.const_str_digest_50aadd812d6a324a1aa7733fe72207eb, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_ab4dac301a27fdf255249041bd3bfa3c = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_check_cancelled, mod_consts.const_str_digest_7cb34ee088291762118e3eae33170ca8, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_ee44fa01a293d9cc64102240bf4832be = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_checkpoint, mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_25c34123c23e7c0271f4eda7cda31e72 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_checkpoint_if_cancelled, mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_94008ceee9053a5e30b0aa1462411de6 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connect_tcp, mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8, mod_consts.const_tuple_f1c7af4972d2aa7c0d799b95a02c7dab_tuple, NULL, 4, 0, 0);
code_objects_bc53a25031a283ac212308bb0ea9e20e = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_connect_unix, mod_consts.const_str_digest_2588151892296a506d54715728524894, mod_consts.const_tuple_str_plain_cls_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_9523beddaaf0ed9158643483a111217f = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_blocking_portal, mod_consts.const_str_digest_dd7bedce6b617e390054511e601ec965, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_c3ab59f55b8ca0eccd8db1965507d2aa = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_cancel_scope, mod_consts.const_str_digest_f741d761e26bf78678d40e54fe48ef3c, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple, NULL, 1, 2, 0);
code_objects_1b72a9d699fccee44a4839afe54ada70 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_capacity_limiter, mod_consts.const_str_digest_7d6ee6203f8fd2dce0874a664515c26f, mod_consts.const_tuple_str_plain_cls_str_plain_total_tokens_tuple, NULL, 2, 0, 0);
code_objects_ee79721b5fcb4dc4fd2f23402f756158 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_event, mod_consts.const_str_digest_be2b7e29a24741c9512d1c9357c2f467, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_1734f19000ed3776b0da9cce3c540d8e = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_lock, mod_consts.const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1, mod_consts.const_tuple_str_plain_cls_str_plain_fast_acquire_tuple, NULL, 1, 1, 0);
code_objects_1f29304ec64cbd713b09e75e3c0b307f = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_semaphore, mod_consts.const_str_digest_0bd2fef5d075755fb699701c033ffe97, mod_consts.const_tuple_5e9a89951a36d6e8c6f689da70e2e5d4_tuple, NULL, 2, 2, 0);
code_objects_ffd151b82a77997e2d1e7c1beae0ba85 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_task_group, mod_consts.const_str_digest_847ba7076a5807378a267a49aaf94c01, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_1c2613b6e3dc7249646d2736e53fdd7f = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_tcp_listener, mod_consts.const_str_digest_c03ac417e89e2a27409ae665b893240e, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_829da45e5d980a795df8996b64fdf37d = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_test_runner, mod_consts.const_str_digest_999a38095cda6722f0d97920ba8a7344, mod_consts.const_tuple_str_plain_cls_str_plain_options_tuple, NULL, 2, 0, 0);
code_objects_a02782cb1d93fbdb240c111b1a0d5fda = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_udp_socket, mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe, mod_consts.const_tuple_2514148e87841b104a7411c8b559baa3_tuple, NULL, 5, 0, 0);
code_objects_08b33fb3eda206109c4469912fc37dd5 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_unix_datagram_socket, mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963, mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple, NULL, 3, 0, 0);
code_objects_6ab83ac8790e8db7f138e5b9491d486a = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_unix_datagram_socket, mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963, mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple, NULL, 3, 0, 0);
code_objects_6a31fff855fd0930001821395db2570a = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_unix_datagram_socket, mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963, mod_consts.const_tuple_str_plain_cls_str_plain_raw_socket_str_plain_remote_path_tuple, NULL, 3, 0, 0);
code_objects_055f305153e15e4f8693d3b2552ff6ff = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_unix_listener, mod_consts.const_str_digest_2d366544e7b9a9398699038d1f2698dd, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_7a6e91fd22ae2f7fee711ef3823cd688 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_default_thread_limiter, mod_consts.const_str_digest_b27445edf7f0fcd7dc81996862b355d7, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_2a050a4cfc1334da2d9109d29d9118fd = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_effective_deadline, mod_consts.const_str_digest_12d5715e89f530221668e692e1b5755e, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_8c10f29ca8e8fc48644c012d8c93cfac = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_time, mod_consts.const_str_digest_2f9440e808b0abeb757da041ff833e1a, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_5465abc5e7f852f4f8c964b49e1b6bc9 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_token, mod_consts.const_str_digest_6d260af7bf72e96d7faf29919699cd44, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_2f9d8ddedd52a4b9ff6a67186d48c903 = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_current_task, mod_consts.const_str_digest_45ebf931a0518bc68e72626faf7b6e65, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_1f9ff99d441b7f58730a7b6362f1b6a4 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_running_tasks, mod_consts.const_str_digest_395ce486dc98d6a8c419e7c8482043aa, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_ac78010cd1da0ea86c87d9745798534c = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getaddrinfo, mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa, mod_consts.const_tuple_d62609ce98fe0d70234056c4abef441e_tuple, NULL, 3, 4, 0);
code_objects_44b4fa2649bcdbef4d8018d4c3ca7cca = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getnameinfo, mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2, mod_consts.const_tuple_str_plain_cls_str_plain_sockaddr_str_plain_flags_tuple, NULL, 3, 0, 0);
code_objects_db8d6d865963607804e8e66ff192d0d2 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_notify_closing, mod_consts.const_str_digest_ceb723981137768e3346694c1fe65af4, mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple, NULL, 2, 0, 0);
code_objects_ff64c91978745da1fe60d4cd5b15dd48 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_process, mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc, mod_consts.const_tuple_8fb715243bf80d416d844d5e214dba2e_tuple, NULL, 2, 3, 0);
code_objects_f5a3115b8d61135190e928ca00ef0718 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_signal_receiver, mod_consts.const_str_digest_21b4ee4f49f5704c218038c587134ba8, mod_consts.const_tuple_str_plain_cls_str_plain_signals_tuple, NULL, 1, 0, 0);
code_objects_5e79a2b833ffe35bb75e7d8d1343a70a = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_999e702b04d89210164febda7de418d0, mod_consts.const_tuple_dc54bde17f2b81a9c1b323d934133b62_tuple, NULL, 5, 0, 0);
code_objects_3f32c4ddafa24566306014235c40c03b = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_async_from_thread, mod_consts.const_str_digest_6525689759d94fbfa0916cbbd9fab162, mod_consts.const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple, NULL, 4, 0, 0);
code_objects_3f6a7edd147e2068243415045441f64e = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_sync_from_thread, mod_consts.const_str_digest_4da7c8026af3efde1a413f010c7b57c1, mod_consts.const_tuple_str_plain_cls_str_plain_func_str_plain_args_str_plain_token_tuple, NULL, 4, 0, 0);
code_objects_3a7035944110d4cb587f96d51da871c9 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_sync_in_worker_thread, mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3, mod_consts.const_tuple_fa71e36439f92ffc93be8801d9e464f5_tuple, NULL, 5, 0, 0);
code_objects_4d33ce7a145d494d211db8988e26d6d1 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown, mod_consts.const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f, mod_consts.const_tuple_str_plain_cls_str_plain_workers_tuple, NULL, 2, 0, 0);
code_objects_825f475f8757d931b3113c8f771cb865 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep, mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f, mod_consts.const_tuple_str_plain_cls_str_plain_delay_tuple, NULL, 2, 0, 0);
code_objects_fafed5f4ad2a63a1314c9c52a3b054bc = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_all_tasks_blocked, mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_b216a12365f971484c3aab0aa8959929 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_readable, mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa, mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple, NULL, 2, 0, 0);
code_objects_bbb626744540ef00445b237315182223 = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_writable, mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931, mod_consts.const_tuple_str_plain_cls_str_plain_obj_tuple, NULL, 2, 0, 0);
code_objects_00fc33181be71b1dbc8fa6f836da556b = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_connected_udp_socket, mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_055db0fe9a8c917860f470827d274ce3 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket, mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_efac02acf5c4ba587e50287d86281d14 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_listener_socket, mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_0e2b698aa06f511b4b67c68cfd3cb80e = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_stream_socket, mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_5e02b39acf336c9c50363f7d9cef3c43 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_udp_socket, mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_9d70d5f535f70759fff132cc1750b30d = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_unix_datagram_socket, mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_ce3711a0ef5c744290848a3215f5d3ce = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_unix_stream_socket, mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2, mod_consts.const_tuple_str_plain_cls_str_plain_sock_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_lock(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_create_semaphore(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_create_capacity_limiter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_check_cancelled(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_run_async_from_thread(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_run_sync_from_thread(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_create_blocking_portal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_open_process(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_setup_process_pool_exit_at_shutdown(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_tcp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_connect_unix(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_tcp_listener(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_unix_listener(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_udp_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getaddrinfo(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_getnameinfo(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_readable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_wait_writable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_notify_closing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_wrap_listener_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_wrap_stream_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_wrap_udp_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__43_current_default_thread_limiter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__44_open_signal_receiver(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__45_get_current_task(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__46_get_running_tasks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__48_create_test_runner(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_eventloop$$$function__5_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_checkpoint,
        mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d,
        code_objects_ee44fa01a293d9cc64102240bf4832be,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_cls;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_25c34123c23e7c0271f4eda7cda31e72, module_anyio$abc$_eventloop, sizeof(void *));
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 120;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_effective_deadline);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_anyio$abc$_eventloop$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_inf);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 121;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 121;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_checkpoint);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_1:;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
        mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7,
        code_objects_25c34123c23e7c0271f4eda7cda31e72,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_cls;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
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
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_98d3e77e7f87aa5e68e693ad40ed9536, module_anyio$abc$_eventloop, sizeof(void *));
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_cancel_scope);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 132;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 132;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
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
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 133;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 133;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 133;
tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_sleep,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 133;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 133;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 133;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
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
coroutine->m_frame->m_frame.f_lineno = 132;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
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
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
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
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
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
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 132;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 132;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 132;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
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

goto frame_exception_exit_1;
// End of try:
try_end_4:;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
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
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_cancel_shielded_checkpoint,
        mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3,
        code_objects_98d3e77e7f87aa5e68e693ad40ed9536,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__8_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_delay = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_delay);
CHECK_OBJECT(par_delay);
Py_DECREF(par_delay);
par_delay = NULL;
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
struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_sleep,
        mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f,
        code_objects_825f475f8757d931b3113c8f771cb865,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *par_args = python_pars[2];
PyObject *par_abandon_on_cancel = python_pars[3];
PyObject *par_limiter = python_pars[4];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_func);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
par_func = NULL;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
CHECK_OBJECT(par_abandon_on_cancel);
CHECK_OBJECT(par_abandon_on_cancel);
Py_DECREF(par_abandon_on_cancel);
par_abandon_on_cancel = NULL;
CHECK_OBJECT(par_limiter);
CHECK_OBJECT(par_limiter);
Py_DECREF(par_limiter);
par_limiter = NULL;
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
struct anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_run_sync_in_worker_thread,
        mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3,
        code_objects_3a7035944110d4cb587f96d51da871c9,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__21_open_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_command = python_pars[1];
PyObject *par_stdin = python_pars[2];
PyObject *par_stdout = python_pars[3];
PyObject *par_stderr = python_pars[4];
PyObject *par_kwargs = python_pars[5];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_open_process,
        mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc,
        code_objects_ff64c91978745da1fe60d4cd5b15dd48,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__21_open_process$$$coroutine__1_open_process_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__23_connect_tcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_local_address = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_local_address);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
par_local_address = NULL;
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
struct anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_connect_tcp,
        mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8,
        code_objects_94008ceee9053a5e30b0aa1462411de6,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__23_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__24_connect_unix(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_path);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
par_path = NULL;
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
struct anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_connect_unix,
        mod_consts.const_str_digest_2588151892296a506d54715728524894,
        code_objects_bc53a25031a283ac212308bb0ea9e20e,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__24_connect_unix$$$coroutine__1_connect_unix_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__27_create_udp_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_family = python_pars[1];
PyObject *par_local_address = python_pars[2];
PyObject *par_remote_address = python_pars[3];
PyObject *par_reuse_port = python_pars[4];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_family);
CHECK_OBJECT(par_family);
Py_DECREF(par_family);
par_family = NULL;
CHECK_OBJECT(par_local_address);
CHECK_OBJECT(par_local_address);
Py_DECREF(par_local_address);
par_local_address = NULL;
CHECK_OBJECT(par_remote_address);
CHECK_OBJECT(par_remote_address);
Py_DECREF(par_remote_address);
par_remote_address = NULL;
CHECK_OBJECT(par_reuse_port);
CHECK_OBJECT(par_reuse_port);
Py_DECREF(par_reuse_port);
par_reuse_port = NULL;
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
struct anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_create_udp_socket,
        mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe,
        code_objects_a02782cb1d93fbdb240c111b1a0d5fda,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__27_create_udp_socket$$$coroutine__1_create_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_raw_socket = python_pars[1];
PyObject *par_remote_path = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_raw_socket);
CHECK_OBJECT(par_raw_socket);
Py_DECREF(par_raw_socket);
par_raw_socket = NULL;
CHECK_OBJECT(par_remote_path);
CHECK_OBJECT(par_remote_path);
Py_DECREF(par_remote_path);
par_remote_path = NULL;
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
struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_create_unix_datagram_socket,
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
        code_objects_08b33fb3eda206109c4469912fc37dd5,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_raw_socket = python_pars[1];
PyObject *par_remote_path = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_raw_socket);
CHECK_OBJECT(par_raw_socket);
Py_DECREF(par_raw_socket);
par_raw_socket = NULL;
CHECK_OBJECT(par_remote_path);
CHECK_OBJECT(par_remote_path);
Py_DECREF(par_remote_path);
par_remote_path = NULL;
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
struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_create_unix_datagram_socket,
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
        code_objects_6ab83ac8790e8db7f138e5b9491d486a,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_raw_socket = python_pars[1];
PyObject *par_remote_path = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_raw_socket);
CHECK_OBJECT(par_raw_socket);
Py_DECREF(par_raw_socket);
par_raw_socket = NULL;
CHECK_OBJECT(par_remote_path);
CHECK_OBJECT(par_remote_path);
Py_DECREF(par_remote_path);
par_remote_path = NULL;
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
struct anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_create_unix_datagram_socket,
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
        code_objects_6a31fff855fd0930001821395db2570a,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__31_getaddrinfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_host = python_pars[1];
PyObject *par_port = python_pars[2];
PyObject *par_family = python_pars[3];
PyObject *par_type = python_pars[4];
PyObject *par_proto = python_pars[5];
PyObject *par_flags = python_pars[6];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
CHECK_OBJECT(par_family);
CHECK_OBJECT(par_family);
Py_DECREF(par_family);
par_family = NULL;
CHECK_OBJECT(par_type);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
par_type = NULL;
CHECK_OBJECT(par_proto);
CHECK_OBJECT(par_proto);
Py_DECREF(par_proto);
par_proto = NULL;
CHECK_OBJECT(par_flags);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
par_flags = NULL;
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
struct anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_getaddrinfo,
        mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa,
        code_objects_ac78010cd1da0ea86c87d9745798534c,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__31_getaddrinfo$$$coroutine__1_getaddrinfo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__32_getnameinfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sockaddr = python_pars[1];
PyObject *par_flags = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sockaddr);
CHECK_OBJECT(par_sockaddr);
Py_DECREF(par_sockaddr);
par_sockaddr = NULL;
CHECK_OBJECT(par_flags);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
par_flags = NULL;
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
struct anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_getnameinfo,
        mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2,
        code_objects_44b4fa2649bcdbef4d8018d4c3ca7cca,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__32_getnameinfo$$$coroutine__1_getnameinfo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__33_wait_readable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_obj);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
par_obj = NULL;
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
struct anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wait_readable,
        mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa,
        code_objects_b216a12365f971484c3aab0aa8959929,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__33_wait_readable$$$coroutine__1_wait_readable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__34_wait_writable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_obj);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
par_obj = NULL;
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
struct anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wait_writable,
        mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931,
        code_objects_bbb626744540ef00445b237315182223,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__34_wait_writable$$$coroutine__1_wait_writable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__36_wrap_listener_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_listener_socket,
        mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3,
        code_objects_efac02acf5c4ba587e50287d86281d14,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__36_wrap_listener_socket$$$coroutine__1_wrap_listener_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__37_wrap_stream_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_stream_socket,
        mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34,
        code_objects_0e2b698aa06f511b4b67c68cfd3cb80e,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__37_wrap_stream_socket$$$coroutine__1_wrap_stream_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_unix_stream_socket,
        mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2,
        code_objects_ce3711a0ef5c744290848a3215f5d3ce,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket$$$coroutine__1_wrap_unix_stream_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__39_wrap_udp_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_udp_socket,
        mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5,
        code_objects_5e02b39acf336c9c50363f7d9cef3c43,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__39_wrap_udp_socket$$$coroutine__1_wrap_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_connected_udp_socket,
        mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18,
        code_objects_00fc33181be71b1dbc8fa6f836da556b,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket$$$coroutine__1_wrap_connected_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_unix_datagram_socket,
        mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695,
        code_objects_9d70d5f535f70759fff132cc1750b30d,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket$$$coroutine__1_wrap_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_sock = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_sock);
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
par_sock = NULL;
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
struct anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wrap_connected_unix_datagram_socket,
        mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9,
        code_objects_055db0fe9a8c917860f470827d274ce3,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket$$$coroutine__1_wrap_connected_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
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
struct anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context,
        module_anyio$abc$_eventloop,
        mod_consts.const_str_plain_wait_all_tasks_blocked,
        mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef,
        code_objects_fafed5f4ad2a63a1314c9c52a3b054bc,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_current_effective_deadline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12d5715e89f530221668e692e1b5755e,
#endif
        code_objects_2a050a4cfc1334da2d9109d29d9118fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_e5b9f31aed2069dad819c2984d6b766f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_task_group,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_847ba7076a5807378a267a49aaf94c01,
#endif
        code_objects_ffd151b82a77997e2d1e7c1beae0ba85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be2b7e29a24741c9512d1c9357c2f467,
#endif
        code_objects_ee79721b5fcb4dc4fd2f23402f756158,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_lock(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_lock,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4fbf92e83ef5f6e04cbc14de01c0ead1,
#endif
        code_objects_1734f19000ed3776b0da9cce3c540d8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_create_semaphore(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_semaphore,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0bd2fef5d075755fb699701c033ffe97,
#endif
        code_objects_1f29304ec64cbd713b09e75e3c0b307f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_create_capacity_limiter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_capacity_limiter,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d6ee6203f8fd2dce0874a664515c26f,
#endif
        code_objects_1b72a9d699fccee44a4839afe54ada70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread,
        mod_consts.const_str_plain_run_sync_in_worker_thread,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0aa50357b9bf9d4c6882b6bdd14255a3,
#endif
        code_objects_3a7035944110d4cb587f96d51da871c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_check_cancelled(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_check_cancelled,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7cb34ee088291762118e3eae33170ca8,
#endif
        code_objects_ab4dac301a27fdf255249041bd3bfa3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_run_async_from_thread(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run_async_from_thread,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6525689759d94fbfa0916cbbd9fab162,
#endif
        code_objects_3f32c4ddafa24566306014235c40c03b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_run_sync_from_thread(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run_sync_from_thread,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4da7c8026af3efde1a413f010c7b57c1,
#endif
        code_objects_3f6a7edd147e2068243415045441f64e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999e702b04d89210164febda7de418d0,
#endif
        code_objects_5e79a2b833ffe35bb75e7d8d1343a70a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_79c411a7a843b282d982409bd4474852,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_create_blocking_portal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_blocking_portal,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd7bedce6b617e390054511e601ec965,
#endif
        code_objects_9523beddaaf0ed9158643483a111217f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_open_process(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__21_open_process,
        mod_consts.const_str_plain_open_process,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dbd84da4290b5857f509296661f7badc,
#endif
        code_objects_ff64c91978745da1fe60d4cd5b15dd48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_setup_process_pool_exit_at_shutdown(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9db9c7f1f6d5835a5b7469bb2e130d2f,
#endif
        code_objects_4d33ce7a145d494d211db8988e26d6d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_tcp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__23_connect_tcp,
        mod_consts.const_str_plain_connect_tcp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8aa81d12b32e5f10020071ae0786ec8,
#endif
        code_objects_94008ceee9053a5e30b0aa1462411de6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_connect_unix(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__24_connect_unix,
        mod_consts.const_str_plain_connect_unix,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2588151892296a506d54715728524894,
#endif
        code_objects_bc53a25031a283ac212308bb0ea9e20e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_tcp_listener(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_tcp_listener,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c03ac417e89e2a27409ae665b893240e,
#endif
        code_objects_1c2613b6e3dc7249646d2736e53fdd7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_unix_listener(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_unix_listener,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d366544e7b9a9398699038d1f2698dd,
#endif
        code_objects_055f305153e15e4f8693d3b2552ff6ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_udp_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__27_create_udp_socket,
        mod_consts.const_str_plain_create_udp_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86612086649285aa8508d7d10e3b6cbe,
#endif
        code_objects_a02782cb1d93fbdb240c111b1a0d5fda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket,
        mod_consts.const_str_plain_create_unix_datagram_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
#endif
        code_objects_08b33fb3eda206109c4469912fc37dd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket,
        mod_consts.const_str_plain_create_unix_datagram_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
#endif
        code_objects_6ab83ac8790e8db7f138e5b9491d486a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_current_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d260af7bf72e96d7faf29919699cd44,
#endif
        code_objects_5465abc5e7f852f4f8c964b49e1b6bc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_4ac91c7db8eee61115cd30b770bfd34b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket,
        mod_consts.const_str_plain_create_unix_datagram_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a390923b459889e2e6f5ac4f11e35963,
#endif
        code_objects_6a31fff855fd0930001821395db2570a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getaddrinfo(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__31_getaddrinfo,
        mod_consts.const_str_plain_getaddrinfo,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d77cb694d056511c6d85872c54f0aaaa,
#endif
        code_objects_ac78010cd1da0ea86c87d9745798534c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_getnameinfo(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__32_getnameinfo,
        mod_consts.const_str_plain_getnameinfo,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_718d097ac977f1c2dee18185a27f86e2,
#endif
        code_objects_44b4fa2649bcdbef4d8018d4c3ca7cca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_readable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__33_wait_readable,
        mod_consts.const_str_plain_wait_readable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e844eec4df1e415ee331df6623aababa,
#endif
        code_objects_b216a12365f971484c3aab0aa8959929,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_wait_writable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__34_wait_writable,
        mod_consts.const_str_plain_wait_writable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_79562e71a6cd880a6637c007c8cbf931,
#endif
        code_objects_bbb626744540ef00445b237315182223,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_notify_closing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_notify_closing,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ceb723981137768e3346694c1fe65af4,
#endif
        code_objects_db8d6d865963607804e8e66ff192d0d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_wrap_listener_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__36_wrap_listener_socket,
        mod_consts.const_str_plain_wrap_listener_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41702868d440aaa9f3a63ff02b0137d3,
#endif
        code_objects_efac02acf5c4ba587e50287d86281d14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_wrap_stream_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__37_wrap_stream_socket,
        mod_consts.const_str_plain_wrap_stream_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab489ac8e8fb00e39663ac77b73ffc34,
#endif
        code_objects_0e2b698aa06f511b4b67c68cfd3cb80e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket,
        mod_consts.const_str_plain_wrap_unix_stream_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e09eaa1d77de0c8ec4b5e9e730a78fa2,
#endif
        code_objects_ce3711a0ef5c744290848a3215f5d3ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_wrap_udp_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__39_wrap_udp_socket,
        mod_consts.const_str_plain_wrap_udp_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c229f7bc3b710b93cf28b4eed1d82a5,
#endif
        code_objects_5e02b39acf336c9c50363f7d9cef3c43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_current_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2f9440e808b0abeb757da041ff833e1a,
#endif
        code_objects_8c10f29ca8e8fc48644c012d8c93cfac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_9682d51aa24e3f78607e1311b0196286,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket,
        mod_consts.const_str_plain_wrap_connected_udp_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3dca7c7d3925ded3cb1462ec19660b18,
#endif
        code_objects_00fc33181be71b1dbc8fa6f836da556b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket,
        mod_consts.const_str_plain_wrap_unix_datagram_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_890a279c9083a8a1def1abb33742b695,
#endif
        code_objects_9d70d5f535f70759fff132cc1750b30d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket,
        mod_consts.const_str_plain_wrap_connected_unix_datagram_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_344999ff0894464cf51f976f11db0de9,
#endif
        code_objects_055db0fe9a8c917860f470827d274ce3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__43_current_default_thread_limiter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_current_default_thread_limiter,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b27445edf7f0fcd7dc81996862b355d7,
#endif
        code_objects_7a6e91fd22ae2f7fee711ef3823cd688,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__44_open_signal_receiver(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_open_signal_receiver,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_21b4ee4f49f5704c218038c587134ba8,
#endif
        code_objects_f5a3115b8d61135190e928ca00ef0718,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__45_get_current_task(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_current_task,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45ebf931a0518bc68e72626faf7b6e65,
#endif
        code_objects_2f9d8ddedd52a4b9ff6a67186d48c903,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__46_get_running_tasks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_running_tasks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_395ce486dc98d6a8c419e7c8482043aa,
#endif
        code_objects_1f9ff99d441b7f58730a7b6362f1b6a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked,
        mod_consts.const_str_plain_wait_all_tasks_blocked,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_83208cad653b0ee7c4554ce458eb56ef,
#endif
        code_objects_fafed5f4ad2a63a1314c9c52a3b054bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__48_create_test_runner(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_test_runner,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999a38095cda6722f0d97920ba8a7344,
#endif
        code_objects_829da45e5d980a795df8996b64fdf37d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_cancelled_exception_class,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_50aadd812d6a324a1aa7733fe72207eb,
#endif
        code_objects_7738f7b1ab6dc0f2d0c83c858879e738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_24fc8457d12567e2e8d98d3ac1c8db32,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__5_checkpoint,
        mod_consts.const_str_plain_checkpoint,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a4c22a28dec2cb486923d25242669b8d,
#endif
        code_objects_ee44fa01a293d9cc64102240bf4832be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_9ebaa0af3a29f211d10303d0412afd95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f99091ebafb9458194bc1134fd1531c7,
#endif
        code_objects_25c34123c23e7c0271f4eda7cda31e72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_2b3bb8c9e345a2ef80e7390b5b7d1bc8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint,
        mod_consts.const_str_plain_cancel_shielded_checkpoint,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a954641e74060e491eae5d7035504d3,
#endif
        code_objects_98d3e77e7f87aa5e68e693ad40ed9536,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_bc0c850947f25ad55194bbf6e3d7296a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__8_sleep,
        mod_consts.const_str_plain_sleep,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6fc96cfbceec9cdfe13a52e5a7ccf9f,
#endif
        code_objects_825f475f8757d931b3113c8f771cb865,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts.const_str_digest_f8d9d73720e53eb2e0938a2ad03a82cb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_create_cancel_scope,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f741d761e26bf78678d40e54fe48ef3c,
#endif
        code_objects_c3ab59f55b8ca0eccd8db1965507d2aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
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

static function_impl_code const function_table_anyio$abc$_eventloop[] = {
impl_anyio$abc$_eventloop$$$function__5_checkpoint,
impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled,
impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint,
impl_anyio$abc$_eventloop$$$function__8_sleep,
impl_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread,
impl_anyio$abc$_eventloop$$$function__21_open_process,
impl_anyio$abc$_eventloop$$$function__23_connect_tcp,
impl_anyio$abc$_eventloop$$$function__24_connect_unix,
impl_anyio$abc$_eventloop$$$function__27_create_udp_socket,
impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket,
impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket,
impl_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket,
impl_anyio$abc$_eventloop$$$function__31_getaddrinfo,
impl_anyio$abc$_eventloop$$$function__32_getnameinfo,
impl_anyio$abc$_eventloop$$$function__33_wait_readable,
impl_anyio$abc$_eventloop$$$function__34_wait_writable,
impl_anyio$abc$_eventloop$$$function__36_wrap_listener_socket,
impl_anyio$abc$_eventloop$$$function__37_wrap_stream_socket,
impl_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket,
impl_anyio$abc$_eventloop$$$function__39_wrap_udp_socket,
impl_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket,
impl_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket,
impl_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket,
impl_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$abc$_eventloop);
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
        module_anyio$abc$_eventloop,
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
        function_table_anyio$abc$_eventloop,
        sizeof(function_table_anyio$abc$_eventloop) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio.abc._eventloop";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$abc$_eventloop(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$abc$_eventloop");

    // Store the module for future use.
    module_anyio$abc$_eventloop = module;

    moduledict_anyio$abc$_eventloop = MODULE_DICT(module_anyio$abc$_eventloop);

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
        PRINT_STRING("anyio$abc$_eventloop: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$abc$_eventloop: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$abc$_eventloop: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._eventloop" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$abc$_eventloop\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_eventloop,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_eventloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_eventloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_eventloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_eventloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_eventloop);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$abc$_eventloop);
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

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_eventloop;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$abc$_eventloop = MAKE_MODULE_FRAME(code_objects_8df1ae2ffc33e4ca1c19088a198645e4, module_anyio$abc$_eventloop);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_eventloop);
assert(Py_REFCNT(frame_frame_anyio$abc$_eventloop) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$abc$_eventloop$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$abc$_eventloop$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

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
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_ABCMeta,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABCMeta);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta, tmp_assign_source_9);
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
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_10);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_a39737fdacf2d676276e76e36ad74e0f_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 6;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AbstractContextManager_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 7;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_AbstractContextManager,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_AbstractContextManager);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractContextManager, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
tmp_import_name_from_8 = IMPORT_HARD_OS();
assert(!(tmp_import_name_from_8 == NULL));
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_PathLike,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_PathLike);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_signal;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Signals_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 9;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Signals,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Signals);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Signals, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$abc$_eventloop;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_99a30164d6ff21e2a192b0133b41017a_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 10;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_AddressFamily,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_AddressFamily);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily, tmp_assign_source_20);
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
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_SocketKind,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_SocketKind);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketKind, tmp_assign_source_21);
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
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_socket,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_socket);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_22);
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
tmp_assign_source_23 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_23 == NULL));
assert(tmp_import_from_4__module == NULL);
Py_INCREF(tmp_assign_source_23);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = Py_False;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_30 == NULL));
assert(tmp_import_from_5__module == NULL);
Py_INCREF(tmp_assign_source_30);
tmp_import_from_5__module = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_TypeVarTuple,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_TypeVarTuple);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVarTuple, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_Unpack,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Unpack);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_Unpack, tmp_assign_source_32);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_20;
tmp_import_name_from_20 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_20 == NULL));
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anyio$abc$_eventloop,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_eventloop$TypeVar(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 51;
tmp_assign_source_34 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_T_Retval_tuple);

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_T_Retval, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_anyio$abc$_eventloop$TypeVarTuple(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVarTuple);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 52;
tmp_assign_source_35 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_PosArgsT_tuple);

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_PosArgsT, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$abc$_eventloop$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_ffd4768bf3fd680c8a1d346189ce4c8a_tuple;
tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_StrOrBytesPath, tmp_assign_source_36);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_anyio$abc$_eventloop$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_StrOrBytesPath;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_1 = module_var_accessor_anyio$abc$_eventloop$ABCMeta(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCMeta);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto try_except_handler_6;
}
tmp_assign_source_37 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_37, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
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
tmp_assign_source_38 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_38 == NULL) {
    tmp_assign_source_38 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_38);
}
assert(!(tmp_assign_source_38 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_38 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_38);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_38;
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


exception_lineno = 56;

    goto try_except_handler_6;
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


exception_lineno = 56;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_AsyncBackend_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 56;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_39;
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


exception_lineno = 56;

    goto try_except_handler_6;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
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


exception_lineno = 56;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_6;
}
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_40;
}
branch_end_2:;
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_13db0bbe48e74b2c054f7d5913250bd7;
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncBackend;
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_56;
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_8;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2 = MAKE_CLASS_FRAME(tstate, code_objects_aaf7c399ae22ed07f39c7ad474c0944e, module_anyio$abc$_eventloop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2);
assert(Py_REFCNT(frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_4 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_5 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_468707ce6c851dc22187169cfddbfa3c);

tmp_args_element_value_2 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(tstate, tmp_annotations_1);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 58;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 57;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(tstate, tmp_annotations_2);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 80;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 79;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_current_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_3;
tmp_called_value_8 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_9 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_6 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(tstate, tmp_annotations_3);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 88;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 87;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_current_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_4;
tmp_called_value_10 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_11 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_46f821f7c855f20ab60347e7e95ebcb0);

tmp_args_element_value_8 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(tstate, tmp_annotations_4);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 97;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 96;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_cancelled_exception_class, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_5;
tmp_called_value_12 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_13 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_10 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(tstate, tmp_annotations_5);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 102;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 101;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_checkpoint, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_6;
tmp_called_value_14 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_11 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(tstate, tmp_annotations_6);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 111;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_checkpoint_if_cancelled, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_7;
tmp_called_value_15 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_12 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(tstate, tmp_annotations_7);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 123;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_cancel_shielded_checkpoint, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_8;
tmp_called_value_16 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_17 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_71683d80165d2f2ee081c315af2fdde6);

tmp_args_element_value_14 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(tstate, tmp_annotations_8);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 136;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 135;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_sleep, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_annotations_9;
tmp_called_value_18 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_19 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_2 = mod_consts.const_str_plain_deadline;
tmp_expression_value_7 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_math);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_anyio$abc$_eventloop$math(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_called_value_19);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_inf);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_called_value_19);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_shield;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);

tmp_args_element_value_16 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(tstate, tmp_kw_defaults_1, tmp_annotations_9);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 145;
tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 144;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_cancel_scope, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_10;
tmp_called_value_20 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_21 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_18 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(tstate, tmp_annotations_10);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 152;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 151;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_current_effective_deadline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_11;
tmp_called_value_22 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_23 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);

tmp_args_element_value_20 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(tstate, tmp_annotations_11);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 166;
tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 165;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_task_group, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_22;
PyObject *tmp_annotations_12;
tmp_called_value_24 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_25 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e23711663ec8616750b0e4713750b11a);

tmp_args_element_value_22 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(tstate, tmp_annotations_12);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 171;
tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 170;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_24;
PyObject *tmp_annotations_13;
tmp_called_value_26 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_26 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_27 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_27 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_26);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_a13293be0da2e10430752e813781f9c5);

tmp_args_element_value_24 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_lock(tstate, tmp_annotations_13);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 176;
tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 175;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_lock, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_26;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_14;
tmp_called_value_28 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_29 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_29 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_68253d6e44dfbb09b70616558803e639);
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_5b7365a8957b6100e3e7e43774f909af);

tmp_args_element_value_26 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_create_semaphore(tstate, tmp_kw_defaults_2, tmp_annotations_14);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 181;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 180;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_semaphore, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_28;
PyObject *tmp_annotations_15;
tmp_called_value_30 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_30 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_31 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_30);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_6139eb96854c06a3d6d676456fdbbed6);

tmp_args_element_value_28 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_create_capacity_limiter(tstate, tmp_annotations_15);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 192;
tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_30);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 191;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_capacity_limiter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_29;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_30;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_16;
tmp_called_value_32 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_32 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_33 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_33 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_32);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_1 = mod_consts.const_tuple_false_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_75b924c22afb758f620c69b36fd753fe);
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_30 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_in_worker_thread(tstate, tmp_defaults_1, tmp_annotations_16);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 197;
tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_32);

exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 196;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_run_sync_in_worker_thread, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_31;
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_32;
PyObject *tmp_annotations_17;
tmp_called_value_34 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_34 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_35 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_35 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_34);

exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_32 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_check_cancelled(tstate, tmp_annotations_17);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 208;
tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_34);

exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 207;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_check_cancelled, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_36;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_34;
PyObject *tmp_annotations_18;
tmp_called_value_36 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_36 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_37 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_37 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_36);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_519d06b021080285f448db02586d39b1);

tmp_args_element_value_34 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_run_async_from_thread(tstate, tmp_annotations_18);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 213;
tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_34);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_36);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 212;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_33);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_run_async_from_thread, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_35;
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_36;
PyObject *tmp_annotations_19;
tmp_called_value_38 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_38 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_39 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_39 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_38);

exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_d9290d6b200b64fbb5d775553cc9f25e);

tmp_args_element_value_36 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_run_sync_from_thread(tstate, tmp_annotations_19);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 223;
tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_38);

exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 222;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_35);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_run_sync_from_thread, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_37;
PyObject *tmp_called_value_41;
PyObject *tmp_args_element_value_38;
PyObject *tmp_annotations_20;
tmp_called_value_40 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_40 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_41 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_41 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_40);

exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_3f6dc272301686aa94d15afaf4b720cb);

tmp_args_element_value_38 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_create_blocking_portal(tstate, tmp_annotations_20);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 233;
tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_38);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_40);

exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 232;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_37);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_blocking_portal, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_42;
PyObject *tmp_args_element_value_39;
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_40;
PyObject *tmp_annotations_21;
tmp_called_value_42 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_42 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_43 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_43 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_42);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_b615d3ef20c16203ea99dfe0e7772412);

tmp_args_element_value_40 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_open_process(tstate, tmp_annotations_21);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 238;
tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_42);

exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 237;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_39);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_open_process, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_44;
PyObject *tmp_args_element_value_41;
PyObject *tmp_called_value_45;
PyObject *tmp_args_element_value_42;
PyObject *tmp_annotations_22;
tmp_called_value_44 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_44 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_45 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_45 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_44);

exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_84a3053a6047f2a4fd5e0ead5b0bd968);

tmp_args_element_value_42 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_setup_process_pool_exit_at_shutdown(tstate, tmp_annotations_22);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 251;
tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_42);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_args_element_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_44);

exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 250;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_41);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_setup_process_pool_exit_at_shutdown, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_43;
PyObject *tmp_called_value_47;
PyObject *tmp_args_element_value_44;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_23;
tmp_called_value_46 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_46 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_47 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_47 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_46);

exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_f3d283cf18d735706bc4bc59ab6c3d63);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_44 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_tcp(tstate, tmp_defaults_2, tmp_annotations_23);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 256;
tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_44);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_args_element_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_46);

exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 255;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_43);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_connect_tcp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_48;
PyObject *tmp_args_element_value_45;
PyObject *tmp_called_value_49;
PyObject *tmp_args_element_value_46;
PyObject *tmp_annotations_24;
tmp_called_value_48 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_48 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_49 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_49 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_48);

exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_68115f14644a33c382f78da4e1493da0);

tmp_args_element_value_46 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_connect_unix(tstate, tmp_annotations_24);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 263;
tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_46);
CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_args_element_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_48);

exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 262;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_45);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_connect_unix, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_50;
PyObject *tmp_args_element_value_47;
PyObject *tmp_called_value_51;
PyObject *tmp_args_element_value_48;
PyObject *tmp_annotations_25;
tmp_called_value_50 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_50 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_51 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_51 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_50);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504);

tmp_args_element_value_48 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_tcp_listener(tstate, tmp_annotations_25);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 268;
tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_48);
CHECK_OBJECT(tmp_called_value_51);
Py_DECREF(tmp_called_value_51);
CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_50);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 267;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_47);
CHECK_OBJECT(tmp_called_value_50);
Py_DECREF(tmp_called_value_50);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_tcp_listener, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_52;
PyObject *tmp_args_element_value_49;
PyObject *tmp_called_value_53;
PyObject *tmp_args_element_value_50;
PyObject *tmp_annotations_26;
tmp_called_value_52 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_52 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_53 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_53 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_52);

exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504);

tmp_args_element_value_50 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_unix_listener(tstate, tmp_annotations_26);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 273;
tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_50);
CHECK_OBJECT(tmp_called_value_53);
Py_DECREF(tmp_called_value_53);
CHECK_OBJECT(tmp_args_element_value_50);
Py_DECREF(tmp_args_element_value_50);
if (tmp_args_element_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_52);

exception_lineno = 273;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 272;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_49);
CHECK_OBJECT(tmp_called_value_52);
Py_DECREF(tmp_called_value_52);
CHECK_OBJECT(tmp_args_element_value_49);
Py_DECREF(tmp_args_element_value_49);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_unix_listener, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_54;
PyObject *tmp_args_element_value_51;
PyObject *tmp_called_value_55;
PyObject *tmp_args_element_value_52;
PyObject *tmp_annotations_27;
tmp_called_value_54 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_54 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_54 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_54);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_55 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_55 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_54);

exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_a071bd2cd3dee4334ed0d0ab9a65cb13);

tmp_args_element_value_52 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_udp_socket(tstate, tmp_annotations_27);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 278;
tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_52);
CHECK_OBJECT(tmp_called_value_55);
Py_DECREF(tmp_called_value_55);
CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_args_element_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_54);

exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 277;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_51);
CHECK_OBJECT(tmp_called_value_54);
Py_DECREF(tmp_called_value_54);
CHECK_OBJECT(tmp_args_element_value_51);
Py_DECREF(tmp_args_element_value_51);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_udp_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_56;
PyObject *tmp_args_element_value_53;
PyObject *tmp_called_value_57;
PyObject *tmp_args_element_value_54;
PyObject *tmp_annotations_28;
tmp_called_value_56 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_56 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_57 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_overload);

if (tmp_called_value_57 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_57 = module_var_accessor_anyio$abc$_eventloop$overload(tstate);
if (unlikely(tmp_called_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_56);

exception_lineno = 289;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_57);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_a1310c8a2f0dbb58f865faf3db5fab05);

tmp_args_element_value_54 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(tstate, tmp_annotations_28);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 289;
tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_54);
CHECK_OBJECT(tmp_called_value_57);
Py_DECREF(tmp_called_value_57);
CHECK_OBJECT(tmp_args_element_value_54);
Py_DECREF(tmp_args_element_value_54);
if (tmp_args_element_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_56);

exception_lineno = 289;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 288;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_53);
CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_element_value_53);
Py_DECREF(tmp_args_element_value_53);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_unix_datagram_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_58;
PyObject *tmp_args_element_value_55;
PyObject *tmp_called_value_59;
PyObject *tmp_args_element_value_56;
PyObject *tmp_annotations_29;
tmp_called_value_58 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_58 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_59 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_overload);

if (tmp_called_value_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_59 = module_var_accessor_anyio$abc$_eventloop$overload(tstate);
if (unlikely(tmp_called_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_58);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_763b8b5ed60520b3b67e4bc1bc806006);

tmp_args_element_value_56 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(tstate, tmp_annotations_29);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 295;
tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_56);
CHECK_OBJECT(tmp_called_value_59);
Py_DECREF(tmp_called_value_59);
CHECK_OBJECT(tmp_args_element_value_56);
Py_DECREF(tmp_args_element_value_56);
if (tmp_args_element_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_58);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 294;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_55);
CHECK_OBJECT(tmp_called_value_58);
Py_DECREF(tmp_called_value_58);
CHECK_OBJECT(tmp_args_element_value_55);
Py_DECREF(tmp_args_element_value_55);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_unix_datagram_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_60;
PyObject *tmp_args_element_value_57;
PyObject *tmp_called_value_61;
PyObject *tmp_args_element_value_58;
PyObject *tmp_annotations_30;
tmp_called_value_60 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_60 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_60 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_60);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_61 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_61 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_61 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_60);

exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_61);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_b75ad09c22c23b29a5782200cbbb5689);

tmp_args_element_value_58 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_create_unix_datagram_socket(tstate, tmp_annotations_30);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 301;
tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_58);
CHECK_OBJECT(tmp_called_value_61);
Py_DECREF(tmp_called_value_61);
CHECK_OBJECT(tmp_args_element_value_58);
Py_DECREF(tmp_args_element_value_58);
if (tmp_args_element_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_60);

exception_lineno = 301;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 300;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_57);
CHECK_OBJECT(tmp_called_value_60);
Py_DECREF(tmp_called_value_60);
CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_unix_datagram_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_62;
PyObject *tmp_args_element_value_59;
PyObject *tmp_called_value_63;
PyObject *tmp_args_element_value_60;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_31;
tmp_called_value_62 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_62 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_62 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_62);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_63 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_63 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_62);

exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_8d7622b98e721396ddd13c171944b107);
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_cd07e58c8034eb3549629ecc622a02fc);

tmp_args_element_value_60 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getaddrinfo(tstate, tmp_kw_defaults_3, tmp_annotations_31);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 308;
tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_60);
CHECK_OBJECT(tmp_called_value_63);
Py_DECREF(tmp_called_value_63);
CHECK_OBJECT(tmp_args_element_value_60);
Py_DECREF(tmp_args_element_value_60);
if (tmp_args_element_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_62);

exception_lineno = 308;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 307;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_59);
CHECK_OBJECT(tmp_called_value_62);
Py_DECREF(tmp_called_value_62);
CHECK_OBJECT(tmp_args_element_value_59);
Py_DECREF(tmp_args_element_value_59);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_getaddrinfo, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_64;
PyObject *tmp_args_element_value_61;
PyObject *tmp_called_value_65;
PyObject *tmp_args_element_value_62;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_32;
tmp_called_value_64 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_64 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_65 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_65 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_64);

exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_3 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_c9ee88435f8e2f4041208bf94f03cda7);
Py_INCREF(tmp_defaults_3);

tmp_args_element_value_62 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_getnameinfo(tstate, tmp_defaults_3, tmp_annotations_32);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 330;
tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_62);
CHECK_OBJECT(tmp_called_value_65);
Py_DECREF(tmp_called_value_65);
CHECK_OBJECT(tmp_args_element_value_62);
Py_DECREF(tmp_args_element_value_62);
if (tmp_args_element_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_64);

exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 329;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_61);
CHECK_OBJECT(tmp_called_value_64);
Py_DECREF(tmp_called_value_64);
CHECK_OBJECT(tmp_args_element_value_61);
Py_DECREF(tmp_args_element_value_61);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_getnameinfo, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_66;
PyObject *tmp_args_element_value_63;
PyObject *tmp_called_value_67;
PyObject *tmp_args_element_value_64;
PyObject *tmp_annotations_33;
tmp_called_value_66 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_66 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_67 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_67 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_67 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_66);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_67);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627);

tmp_args_element_value_64 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_readable(tstate, tmp_annotations_33);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 337;
tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_64);
CHECK_OBJECT(tmp_called_value_67);
Py_DECREF(tmp_called_value_67);
CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_args_element_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_66);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 336;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_63);
CHECK_OBJECT(tmp_called_value_66);
Py_DECREF(tmp_called_value_66);
CHECK_OBJECT(tmp_args_element_value_63);
Py_DECREF(tmp_args_element_value_63);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wait_readable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_68;
PyObject *tmp_args_element_value_65;
PyObject *tmp_called_value_69;
PyObject *tmp_args_element_value_66;
PyObject *tmp_annotations_34;
tmp_called_value_68 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_68 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_68 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_68);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_69 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_69 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_68);

exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627);

tmp_args_element_value_66 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_wait_writable(tstate, tmp_annotations_34);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 342;
tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_66);
CHECK_OBJECT(tmp_called_value_69);
Py_DECREF(tmp_called_value_69);
CHECK_OBJECT(tmp_args_element_value_66);
Py_DECREF(tmp_args_element_value_66);
if (tmp_args_element_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_68);

exception_lineno = 342;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 341;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_65);
CHECK_OBJECT(tmp_called_value_68);
Py_DECREF(tmp_called_value_68);
CHECK_OBJECT(tmp_args_element_value_65);
Py_DECREF(tmp_args_element_value_65);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wait_writable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_70;
PyObject *tmp_args_element_value_67;
PyObject *tmp_called_value_71;
PyObject *tmp_args_element_value_68;
PyObject *tmp_annotations_35;
tmp_called_value_70 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_70 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_70 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_70);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_71 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_71 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_71 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_70);

exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_71);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_9ea223a816a5d2258bc92415f2879627);

tmp_args_element_value_68 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_notify_closing(tstate, tmp_annotations_35);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 347;
tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_68);
CHECK_OBJECT(tmp_called_value_71);
Py_DECREF(tmp_called_value_71);
CHECK_OBJECT(tmp_args_element_value_68);
Py_DECREF(tmp_args_element_value_68);
if (tmp_args_element_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_70);

exception_lineno = 347;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 346;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_67);
CHECK_OBJECT(tmp_called_value_70);
Py_DECREF(tmp_called_value_70);
CHECK_OBJECT(tmp_args_element_value_67);
Py_DECREF(tmp_args_element_value_67);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_notify_closing, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_72;
PyObject *tmp_args_element_value_69;
PyObject *tmp_called_value_73;
PyObject *tmp_args_element_value_70;
PyObject *tmp_annotations_36;
tmp_called_value_72 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_72 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_72 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_72);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_73 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_73 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_73 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_72);

exception_lineno = 352;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_73);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_92c6df9c6a1f2a6ddc6d9e0ff3c63504);

tmp_args_element_value_70 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_wrap_listener_socket(tstate, tmp_annotations_36);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 352;
tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_70);
CHECK_OBJECT(tmp_called_value_73);
Py_DECREF(tmp_called_value_73);
CHECK_OBJECT(tmp_args_element_value_70);
Py_DECREF(tmp_args_element_value_70);
if (tmp_args_element_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_72);

exception_lineno = 352;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 351;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_69);
CHECK_OBJECT(tmp_called_value_72);
Py_DECREF(tmp_called_value_72);
CHECK_OBJECT(tmp_args_element_value_69);
Py_DECREF(tmp_args_element_value_69);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_listener_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_74;
PyObject *tmp_args_element_value_71;
PyObject *tmp_called_value_75;
PyObject *tmp_args_element_value_72;
PyObject *tmp_annotations_37;
tmp_called_value_74 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_74 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_75 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_75 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_75 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_74);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_75);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_43ac9f4e78e72da9b622fe67ffbc3b45);

tmp_args_element_value_72 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_wrap_stream_socket(tstate, tmp_annotations_37);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 357;
tmp_args_element_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_72);
CHECK_OBJECT(tmp_called_value_75);
Py_DECREF(tmp_called_value_75);
CHECK_OBJECT(tmp_args_element_value_72);
Py_DECREF(tmp_args_element_value_72);
if (tmp_args_element_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_74);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 356;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_71);
CHECK_OBJECT(tmp_called_value_74);
Py_DECREF(tmp_called_value_74);
CHECK_OBJECT(tmp_args_element_value_71);
Py_DECREF(tmp_args_element_value_71);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_stream_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_76;
PyObject *tmp_args_element_value_73;
PyObject *tmp_called_value_77;
PyObject *tmp_args_element_value_74;
PyObject *tmp_annotations_38;
tmp_called_value_76 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_76 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_76 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_76);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_77 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_77 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_77 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_76);

exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_77);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_f5d4d7734f95d194caf1f4a467ac34de);

tmp_args_element_value_74 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wrap_unix_stream_socket(tstate, tmp_annotations_38);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 362;
tmp_args_element_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_74);
CHECK_OBJECT(tmp_called_value_77);
Py_DECREF(tmp_called_value_77);
CHECK_OBJECT(tmp_args_element_value_74);
Py_DECREF(tmp_args_element_value_74);
if (tmp_args_element_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_76);

exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 361;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_73);
CHECK_OBJECT(tmp_called_value_76);
Py_DECREF(tmp_called_value_76);
CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_unix_stream_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_78;
PyObject *tmp_args_element_value_75;
PyObject *tmp_called_value_79;
PyObject *tmp_args_element_value_76;
PyObject *tmp_annotations_39;
tmp_called_value_78 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_78 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_79 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_79 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_78);

exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_6e56cd58c0a56055c522c8252de2662e);

tmp_args_element_value_76 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_wrap_udp_socket(tstate, tmp_annotations_39);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 367;
tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_76);
CHECK_OBJECT(tmp_called_value_79);
Py_DECREF(tmp_called_value_79);
CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_args_element_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_78);

exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 366;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_75);
CHECK_OBJECT(tmp_called_value_78);
Py_DECREF(tmp_called_value_78);
CHECK_OBJECT(tmp_args_element_value_75);
Py_DECREF(tmp_args_element_value_75);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_udp_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_80;
PyObject *tmp_args_element_value_77;
PyObject *tmp_called_value_81;
PyObject *tmp_args_element_value_78;
PyObject *tmp_annotations_40;
tmp_called_value_80 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_80 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_81 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_81 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_81 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_80);

exception_lineno = 372;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_81);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_7871975fc11528f789e7cf084c9188f0);

tmp_args_element_value_78 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__40_wrap_connected_udp_socket(tstate, tmp_annotations_40);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 372;
tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_78);
CHECK_OBJECT(tmp_called_value_81);
Py_DECREF(tmp_called_value_81);
CHECK_OBJECT(tmp_args_element_value_78);
Py_DECREF(tmp_args_element_value_78);
if (tmp_args_element_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_80);

exception_lineno = 372;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 371;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_77);
CHECK_OBJECT(tmp_called_value_80);
Py_DECREF(tmp_called_value_80);
CHECK_OBJECT(tmp_args_element_value_77);
Py_DECREF(tmp_args_element_value_77);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_connected_udp_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_82;
PyObject *tmp_args_element_value_79;
PyObject *tmp_called_value_83;
PyObject *tmp_args_element_value_80;
PyObject *tmp_annotations_41;
tmp_called_value_82 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_82 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_82 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_82);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_83 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_83 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_83 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_82);

exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_83);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_bcda7eb29122871b149409334f16936b);

tmp_args_element_value_80 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__41_wrap_unix_datagram_socket(tstate, tmp_annotations_41);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 377;
tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_80);
CHECK_OBJECT(tmp_called_value_83);
Py_DECREF(tmp_called_value_83);
CHECK_OBJECT(tmp_args_element_value_80);
Py_DECREF(tmp_args_element_value_80);
if (tmp_args_element_value_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_82);

exception_lineno = 377;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 376;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_79);
CHECK_OBJECT(tmp_called_value_82);
Py_DECREF(tmp_called_value_82);
CHECK_OBJECT(tmp_args_element_value_79);
Py_DECREF(tmp_args_element_value_79);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_unix_datagram_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_84;
PyObject *tmp_args_element_value_81;
PyObject *tmp_called_value_85;
PyObject *tmp_args_element_value_82;
PyObject *tmp_annotations_42;
tmp_called_value_84 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_84 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_84 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_84);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_85 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_85 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_84);

exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_ae2f5bce61555f84fe61d5810627c3fb);

tmp_args_element_value_82 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__42_wrap_connected_unix_datagram_socket(tstate, tmp_annotations_42);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 382;
tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_82);
CHECK_OBJECT(tmp_called_value_85);
Py_DECREF(tmp_called_value_85);
CHECK_OBJECT(tmp_args_element_value_82);
Py_DECREF(tmp_args_element_value_82);
if (tmp_args_element_value_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_84);

exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 381;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_81);
CHECK_OBJECT(tmp_called_value_84);
Py_DECREF(tmp_called_value_84);
CHECK_OBJECT(tmp_args_element_value_81);
Py_DECREF(tmp_args_element_value_81);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_86;
PyObject *tmp_args_element_value_83;
PyObject *tmp_called_value_87;
PyObject *tmp_args_element_value_84;
PyObject *tmp_annotations_43;
tmp_called_value_86 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_86 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_86 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_86);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_87 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_87 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_87 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_87 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_87 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_86);

exception_lineno = 389;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_87);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_8ce7dab9b242d689da32ffbb5b22386a);

tmp_args_element_value_84 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__43_current_default_thread_limiter(tstate, tmp_annotations_43);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 389;
tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_84);
CHECK_OBJECT(tmp_called_value_87);
Py_DECREF(tmp_called_value_87);
CHECK_OBJECT(tmp_args_element_value_84);
Py_DECREF(tmp_args_element_value_84);
if (tmp_args_element_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_86);

exception_lineno = 389;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 388;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_83);
CHECK_OBJECT(tmp_called_value_86);
Py_DECREF(tmp_called_value_86);
CHECK_OBJECT(tmp_args_element_value_83);
Py_DECREF(tmp_args_element_value_83);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_current_default_thread_limiter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_88;
PyObject *tmp_args_element_value_85;
PyObject *tmp_called_value_89;
PyObject *tmp_args_element_value_86;
PyObject *tmp_annotations_44;
tmp_called_value_88 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_88 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_88 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_88);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_89 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_89 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_89 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_88);

exception_lineno = 394;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_89);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_43cc275393bc4db959b6f539031d0ece);

tmp_args_element_value_86 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__44_open_signal_receiver(tstate, tmp_annotations_44);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 394;
tmp_args_element_value_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_86);
CHECK_OBJECT(tmp_called_value_89);
Py_DECREF(tmp_called_value_89);
CHECK_OBJECT(tmp_args_element_value_86);
Py_DECREF(tmp_args_element_value_86);
if (tmp_args_element_value_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_88);

exception_lineno = 394;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 393;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_85);
CHECK_OBJECT(tmp_called_value_88);
Py_DECREF(tmp_called_value_88);
CHECK_OBJECT(tmp_args_element_value_85);
Py_DECREF(tmp_args_element_value_85);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_open_signal_receiver, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_90;
PyObject *tmp_args_element_value_87;
PyObject *tmp_called_value_91;
PyObject *tmp_args_element_value_88;
PyObject *tmp_annotations_45;
tmp_called_value_90 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_90 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_90 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_90);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_91 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_91 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_91 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_91 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_90);

exception_lineno = 401;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_91);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_45 = DICT_COPY(tstate, mod_consts.const_dict_68903ff9fbc38ab67503b52b11ef1fac);

tmp_args_element_value_88 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__45_get_current_task(tstate, tmp_annotations_45);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 401;
tmp_args_element_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_88);
CHECK_OBJECT(tmp_called_value_91);
Py_DECREF(tmp_called_value_91);
CHECK_OBJECT(tmp_args_element_value_88);
Py_DECREF(tmp_args_element_value_88);
if (tmp_args_element_value_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_90);

exception_lineno = 401;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 400;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_87);
CHECK_OBJECT(tmp_called_value_90);
Py_DECREF(tmp_called_value_90);
CHECK_OBJECT(tmp_args_element_value_87);
Py_DECREF(tmp_args_element_value_87);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_get_current_task, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_92;
PyObject *tmp_args_element_value_89;
PyObject *tmp_called_value_93;
PyObject *tmp_args_element_value_90;
PyObject *tmp_annotations_46;
tmp_called_value_92 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_92 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_93 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_93 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_93 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_92);

exception_lineno = 406;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_93);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_46 = DICT_COPY(tstate, mod_consts.const_dict_0026de76138e1a0cc7eace7aa12ff6c6);

tmp_args_element_value_90 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__46_get_running_tasks(tstate, tmp_annotations_46);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 406;
tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_90);
CHECK_OBJECT(tmp_called_value_93);
Py_DECREF(tmp_called_value_93);
CHECK_OBJECT(tmp_args_element_value_90);
Py_DECREF(tmp_args_element_value_90);
if (tmp_args_element_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_92);

exception_lineno = 406;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 405;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_89);
CHECK_OBJECT(tmp_called_value_92);
Py_DECREF(tmp_called_value_92);
CHECK_OBJECT(tmp_args_element_value_89);
Py_DECREF(tmp_args_element_value_89);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_get_running_tasks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_94;
PyObject *tmp_args_element_value_91;
PyObject *tmp_called_value_95;
PyObject *tmp_args_element_value_92;
PyObject *tmp_annotations_47;
tmp_called_value_94 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_94 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_94 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_94);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_95 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_95 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_95 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_94);

exception_lineno = 411;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_95);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_47 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_92 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__47_wait_all_tasks_blocked(tstate, tmp_annotations_47);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 411;
tmp_args_element_value_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_92);
CHECK_OBJECT(tmp_called_value_95);
Py_DECREF(tmp_called_value_95);
CHECK_OBJECT(tmp_args_element_value_92);
Py_DECREF(tmp_args_element_value_92);
if (tmp_args_element_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_94);

exception_lineno = 411;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 410;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_91);
CHECK_OBJECT(tmp_called_value_94);
Py_DECREF(tmp_called_value_94);
CHECK_OBJECT(tmp_args_element_value_91);
Py_DECREF(tmp_args_element_value_91);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_wait_all_tasks_blocked, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_96;
PyObject *tmp_args_element_value_93;
PyObject *tmp_called_value_97;
PyObject *tmp_args_element_value_94;
PyObject *tmp_annotations_48;
tmp_called_value_96 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, const_str_plain_classmethod);

if (tmp_called_value_96 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_96 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_96);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_97 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_97 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_97 = module_var_accessor_anyio$abc$_eventloop$abstractmethod(tstate);
if (unlikely(tmp_called_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_96);

exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_97);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_48 = DICT_COPY(tstate, mod_consts.const_dict_5998a197eb13357e5f5a710d1963c711);

tmp_args_element_value_94 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__48_create_test_runner(tstate, tmp_annotations_48);

frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 416;
tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_94);
CHECK_OBJECT(tmp_called_value_97);
Py_DECREF(tmp_called_value_97);
CHECK_OBJECT(tmp_args_element_value_94);
Py_DECREF(tmp_args_element_value_94);
if (tmp_args_element_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_96);

exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame.f_lineno = 415;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_93);
CHECK_OBJECT(tmp_called_value_96);
Py_DECREF(tmp_called_value_96);
CHECK_OBJECT(tmp_args_element_value_93);
Py_DECREF(tmp_args_element_value_93);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain_create_test_runner, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_eventloop$$$class__1_AsyncBackend_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_8;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_98;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_98 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_AsyncBackend;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_eventloop->m_frame.f_lineno = 56;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_98, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_41 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56);
locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56);
locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_56 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 56;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBackend, tmp_assign_source_41);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_eventloop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_eventloop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_eventloop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$abc$_eventloop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$abc$_eventloop", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._eventloop" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$abc$_eventloop);
    return module_anyio$abc$_eventloop;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_eventloop", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

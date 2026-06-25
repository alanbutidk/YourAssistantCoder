/* Generated code for Python module 'anyio$abc$_sockets'
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



/* The "module_anyio$abc$_sockets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_sockets;
PyDictObject *moduledict_anyio$abc$_sockets;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_socket;
PyObject *const_tuple_str_plain_fileno_tuple;
PyObject *const_str_plain_errno;
PyObject *const_str_plain_ENOTSOCK;
PyObject *const_str_digest_345f2e4fa1959dc3d1100c2b1b9c7d1e;
PyObject *const_str_digest_20d042a69d7204436603986855341beb;
PyObject *const_str_digest_a52c61f23cdf471732bb20dc6263c6ac;
PyObject *const_str_digest_8506c5668e34e138d310e1f4a69be6ce;
PyObject *const_str_plain___qualname__;
PyObject *const_str_digest_412c26dae09643c7c8e8c93e3c956ce1;
PyObject *const_str_plain_getpeername;
PyObject *const_str_plain_family;
PyObject *const_str_plain_AF_INET;
PyObject *const_str_plain_AF_INET6;
PyObject *const_str_plain_getsockname;
PyObject *const_str_plain_AF_UNSPEC;
PyObject *const_str_digest_bd9b5dc4f45855a950afded70b781de6;
PyObject *const_str_digest_263a8fc50d20f0578d26622d304dec5e;
PyObject *const_str_digest_a4734934d9ea3759d91f06172643bdfe;
PyObject *const_str_plain_detach;
PyObject *const_str_plain_setblocking;
PyObject *const_tuple_false_tuple;
PyObject *const_str_digest_4848b78d6f300f18d6e6880f5a60ea23;
PyObject *const_tuple_str_plain_convert_ipv6_sockaddr_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_convert_ipv6_sockaddr;
PyObject *const_str_plain_SocketAttribute;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_999ed851eced5e2359f0322304b1990c;
PyObject *const_str_plain_local_address;
PyObject *const_str_plain_raw_socket;
PyObject *const_str_plain__raw_socket;
PyObject *const_str_plain_remote_address;
PyObject *const_str_plain_AddressFamily;
PyObject *const_str_plain_local_port;
PyObject *const_str_plain_remote_port;
PyObject *const_str_plain_self;
PyObject *const_str_plain_convert;
PyObject *const_str_plain_peername;
PyObject *const_str_digest_a19af2ed4d4a2b78a9f7410d46898780;
PyObject *const_str_plain__validate_socket;
PyObject *const_str_plain_sock_or_fd;
PyObject *const_str_plain_SOCK_STREAM;
PyObject *const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4;
PyObject *const_str_plain_get_async_backend;
PyObject *const_str_plain_wrap_stream_socket;
PyObject *const_str_plain_from_socket;
PyObject *const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd;
PyObject *const_str_digest_553ef6198406eec9bd685e13747bb586;
PyObject *const_str_plain_AF_UNIX;
PyObject *const_str_plain_wrap_unix_stream_socket;
PyObject *const_str_digest_a829f904a7a044418029559865c9486d;
PyObject *const_str_digest_55c365c2719e819f6ae942d0ef2c64f6;
PyObject *const_str_plain_send_fds;
PyObject *const_str_digest_91518875f795d1d065f85ead128d9fb6;
PyObject *const_str_digest_67f6ecc5b1aca5f8225161a054b0af95;
PyObject *const_str_plain_receive_fds;
PyObject *const_str_digest_34ea938a88088f25ec1a1676c1c3a944;
PyObject *const_str_digest_e7d3be9ac53f4a388f97bf112996bbfe;
PyObject *const_dict_475659b0d9872d1702c42382d2589e78;
PyObject *const_str_plain_wrap_listener_socket;
PyObject *const_str_digest_1aafb82b5b9261d57f494264e752d60d;
PyObject *const_str_digest_f5f62b8a3fb3b3bfbae4b2fa77171f37;
PyObject *const_str_plain_accept;
PyObject *const_str_digest_345a17104ad219e77d1181ffa8d69168;
PyObject *const_tuple_str_plain_create_task_group_tuple;
PyObject *const_str_plain_create_task_group;
PyObject *const_str_plain_AsyncExitStack;
PyObject *const_str_plain_task_group;
PyObject *const_str_plain_enter_async_context;
PyObject *const_str_plain_start_soon;
PyObject *const_str_plain_handler;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_serve;
PyObject *const_str_digest_2876917990360b2a8779bacd1d4f309f;
PyObject *const_str_digest_b8cf5bd6034cd003cb37964eed552526;
PyObject *const_str_plain_SOCK_DGRAM;
PyObject *const_str_plain_wrap_udp_socket;
PyObject *const_str_digest_17642ec3dae380f9749f233ea60a6273;
PyObject *const_str_digest_d618310ccd80d3b1097ece97b7e0d8ae;
PyObject *const_str_plain_data;
PyObject *const_str_plain_host;
PyObject *const_str_plain_port;
PyObject *const_str_plain_sendto;
PyObject *const_str_digest_3c2283b94af9ede46eaad290ee5a04a2;
PyObject *const_str_digest_c33fa8e6725a45527916f8e74d020d74;
PyObject *const_str_plain_wrap_connected_udp_socket;
PyObject *const_str_digest_a0756b54a36cbe16ee44314956266577;
PyObject *const_str_digest_2247e6e46c25cfec3c8017b67cd5ff1b;
PyObject *const_str_plain_wrap_unix_datagram_socket;
PyObject *const_str_digest_f9525b805568640a5a602a3e7c0a86d5;
PyObject *const_str_digest_7e8f7248535f9bdbfcb3ef34db859288;
PyObject *const_str_digest_bdaed48e874534196725801a148d672e;
PyObject *const_str_digest_88c5523856aee3cc7e0b70498d0d7da4;
PyObject *const_str_plain_wrap_connected_unix_datagram_socket;
PyObject *const_str_digest_804acede6d410062244960ef62b5c02f;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Callable_str_plain_Collection_str_plain_Mapping_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Collection;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_AsyncExitStack_tuple;
PyObject *const_str_plain_IOBase;
PyObject *const_str_plain_ipaddress;
PyObject *const_tuple_str_plain_IPv4Address_str_plain_IPv6Address_tuple;
PyObject *const_str_plain_IPv4Address;
PyObject *const_str_plain_IPv6Address;
PyObject *const_tuple_str_plain_AddressFamily_tuple;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84;
PyObject *const_tuple_str_plain_get_async_backend_tuple;
PyObject *const_str_digest_f14822897c17d180109b6b5c99031bed;
PyObject *const_tuple_43a83eacfd818506770e264a1428ebd1_tuple;
PyObject *const_str_plain_TypedAttributeProvider;
PyObject *const_str_plain_TypedAttributeSet;
PyObject *const_str_plain_typed_attribute;
PyObject *const_str_plain__streams;
PyObject *const_tuple_ee739e052316c54ea2a9b98a90f0fc32_tuple;
PyObject *const_str_plain_ByteStream;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_UnreliableObjectStream;
PyObject *const_str_plain__tasks;
PyObject *const_tuple_str_plain_TaskGroup_tuple;
PyObject *const_str_plain_TaskGroup;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_IPAddressType;
PyObject *const_tuple_type_str_type_int_tuple;
PyObject *const_str_plain_IPSockAddrType;
PyObject *const_str_plain_SockAddrType;
PyObject *const_str_plain_UDPPacketType;
PyObject *const_tuple_type_bytes_type_str_tuple;
PyObject *const_str_plain_UNIXDatagramPacketType;
PyObject *const_tuple_str_plain_T_Retval_tuple;
PyObject *const_str_plain_T_Retval;
PyObject *const_dict_b6e57fa7de88d6fec475e23246b7a797;
PyObject *const_dict_d22b1df91b77904c6dc37641f4b0bf0b;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
PyObject *const_str_digest_4625c485faa0cc2dd94cda416903aa60;
PyObject *const_int_pos_105;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_d5441616ea845bc9d00cb5f04f7bc8e7;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain__SocketProvider;
PyObject *const_int_pos_146;
PyObject *const_str_plain_property;
PyObject *const_dict_fef23ea7fb83c89f8e87f9cf9a6d9226;
PyObject *const_str_plain_extra_attributes;
PyObject *const_str_digest_d9fdd2f41a03661fdea80381c935cf4b;
PyObject *const_dict_32b6dbec672972cc16d83fd798f8f4bb;
PyObject *const_str_digest_11895b2a48527558a8b98cf1b360d29d;
PyObject *const_str_plain_SocketStream;
PyObject *const_str_digest_53b6835601f48edfa54aa9ba718a6cc0;
PyObject *const_int_pos_184;
PyObject *const_dict_e7ed351203ae78f87f4bda2188fba867;
PyObject *const_str_plain_UNIXSocketStream;
PyObject *const_int_pos_207;
PyObject *const_dict_e36006e39e3bbd5459838cf83e99befa;
PyObject *const_dict_a0747e52226509e0bf726ff33d4ad32b;
PyObject *const_dict_8b9859c20326e757976f134c8f94dc2d;
PyObject *const_str_plain_SocketListener;
PyObject *const_str_digest_38d281a660c0b0e785423a9cac678475;
PyObject *const_int_pos_246;
PyObject *const_dict_fd215304ae8eb9b5d5828bd583424bf2;
PyObject *const_dict_aebc2ba443dfc176ff5fc8361a5b15de;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_22a906fe1b2fea8269d38e7fcfddd2b7;
PyObject *const_str_plain_UDPSocket;
PyObject *const_str_digest_687e275a4ffefbf938b73313d21c3f0f;
PyObject *const_int_pos_290;
PyObject *const_dict_4ae19878c5f469448235faa52b73aa7d;
PyObject *const_dict_1dea3a69042544034c7e6d53bc5d6b2a;
PyObject *const_str_plain_ConnectedUDPSocket;
PyObject *const_str_digest_0bda00f8ac613220e989d18d83500a4a;
PyObject *const_int_pos_320;
PyObject *const_dict_bf8c9792a38922ea1e490fc79c6f2db8;
PyObject *const_str_plain_UNIXDatagramSocket;
PyObject *const_str_digest_8322f5886b10814244e5886ca16d379c;
PyObject *const_int_pos_347;
PyObject *const_dict_bc91b0477449ef98386979520f15fcc8;
PyObject *const_dict_b72d449f6120cbe8c40c166a115a0f43;
PyObject *const_str_plain_ConnectedUNIXDatagramSocket;
PyObject *const_str_digest_dd2460ad13024f1c3718bc4afd2f15e1;
PyObject *const_int_pos_379;
PyObject *const_dict_34e4e21e58a5a25ecebb696ed13f5784;
PyObject *const_str_digest_70914ed79cecdc898562d342d8119187;
PyObject *const_tuple_str_plain_convert_str_plain_self_tuple;
PyObject *const_tuple_str_plain_peername_tuple;
PyObject *const_tuple_str_plain_remote_port_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_26174a88738c5990ff009e6fbffd56f0_tuple;
PyObject *const_tuple_bd3349fa9a0115e473f6725c1222c76e_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msglen_str_plain_maxfds_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_fds_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_host_str_plain_port_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_path_tuple;
PyObject *const_tuple_955a64d93e46fad3121583e84570c13d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[214];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio.abc._sockets"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileno_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTSOCK);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_345f2e4fa1959dc3d1100c2b1b9c7d1e);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_20d042a69d7204436603986855341beb);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a52c61f23cdf471732bb20dc6263c6ac);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_8506c5668e34e138d310e1f4a69be6ce);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_412c26dae09643c7c8e8c93e3c956ce1);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpeername);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_family);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET6);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_getsockname);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNSPEC);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd9b5dc4f45855a950afded70b781de6);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_263a8fc50d20f0578d26622d304dec5e);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4734934d9ea3759d91f06172643bdfe);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_detach);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_setblocking);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_4848b78d6f300f18d6e6880f5a60ea23);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_convert_ipv6_sockaddr_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert_ipv6_sockaddr);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketAttribute);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_local_address);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_socket);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__raw_socket);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_address);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_AddressFamily);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_local_port);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_port);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_peername);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_a19af2ed4d4a2b78a9f7410d46898780);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_socket);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_sock_or_fd);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_stream_socket);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_socket);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_553ef6198406eec9bd685e13747bb586);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNIX);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_stream_socket);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_a829f904a7a044418029559865c9486d);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_55c365c2719e819f6ae942d0ef2c64f6);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_fds);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_67f6ecc5b1aca5f8225161a054b0af95);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_fds);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7d3be9ac53f4a388f97bf112996bbfe);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_475659b0d9872d1702c42382d2589e78);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_listener_socket);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5f62b8a3fb3b3bfbae4b2fa77171f37);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_accept);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_task_group_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncExitStack);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_task_group);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_enter_async_context);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8cf5bd6034cd003cb37964eed552526);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_DGRAM);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_udp_socket);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_d618310ccd80d3b1097ece97b7e0d8ae);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_sendto);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_c33fa8e6725a45527916f8e74d020d74);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_udp_socket);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_2247e6e46c25cfec3c8017b67cd5ff1b);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_datagram_socket);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e8f7248535f9bdbfcb3ef34db859288);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdaed48e874534196725801a148d672e);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_88c5523856aee3cc7e0b70498d0d7da4);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_abstractmethod_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Collection_str_plain_Mapping_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Collection);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncExitStack_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_IOBase);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPv4Address_str_plain_IPv6Address_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AddressFamily_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_f14822897c17d180109b6b5c99031bed);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_43a83eacfd818506770e264a1428ebd1_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedAttributeProvider);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedAttributeSet);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_typed_attribute);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__streams);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_ee739e052316c54ea2a9b98a90f0fc32_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectStream);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__tasks);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddressType);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPSockAddrType);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_SockAddrType);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_UDPPacketType);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramPacketType);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_Retval_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_T_Retval);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_b6e57fa7de88d6fec475e23246b7a797);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_d22b1df91b77904c6dc37641f4b0bf0b);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_4625c485faa0cc2dd94cda416903aa60);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_105);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5441616ea845bc9d00cb5f04f7bc8e7);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain__SocketProvider);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_fef23ea7fb83c89f8e87f9cf9a6d9226);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_attributes);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9fdd2f41a03661fdea80381c935cf4b);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_32b6dbec672972cc16d83fd798f8f4bb);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_11895b2a48527558a8b98cf1b360d29d);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_53b6835601f48edfa54aa9ba718a6cc0);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_184);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_e7ed351203ae78f87f4bda2188fba867);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXSocketStream);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_207);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_e36006e39e3bbd5459838cf83e99befa);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_a0747e52226509e0bf726ff33d4ad32b);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_8b9859c20326e757976f134c8f94dc2d);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_38d281a660c0b0e785423a9cac678475);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_246);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_fd215304ae8eb9b5d5828bd583424bf2);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_22a906fe1b2fea8269d38e7fcfddd2b7);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_UDPSocket);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_687e275a4ffefbf938b73313d21c3f0f);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_290);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_4ae19878c5f469448235faa52b73aa7d);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_1dea3a69042544034c7e6d53bc5d6b2a);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUDPSocket);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bda00f8ac613220e989d18d83500a4a);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_int_pos_320);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_bf8c9792a38922ea1e490fc79c6f2db8);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramSocket);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_8322f5886b10814244e5886ca16d379c);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_347);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_bc91b0477449ef98386979520f15fcc8);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_b72d449f6120cbe8c40c166a115a0f43);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd2460ad13024f1c3718bc4afd2f15e1);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_379);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_34e4e21e58a5a25ecebb696ed13f5784);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_70914ed79cecdc898562d342d8119187);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_convert_str_plain_self_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_peername_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remote_port_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_26174a88738c5990ff009e6fbffd56f0_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_bd3349fa9a0115e473f6725c1222c76e_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msglen_str_plain_maxfds_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_fds_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_host_str_plain_port_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_path_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_955a64d93e46fad3121583e84570c13d_tuple);
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
void checkModuleConstants_anyio$abc$_sockets(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileno_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fileno_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errno);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTSOCK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOTSOCK);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_345f2e4fa1959dc3d1100c2b1b9c7d1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_345f2e4fa1959dc3d1100c2b1b9c7d1e);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_20d042a69d7204436603986855341beb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20d042a69d7204436603986855341beb);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a52c61f23cdf471732bb20dc6263c6ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a52c61f23cdf471732bb20dc6263c6ac);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_8506c5668e34e138d310e1f4a69be6ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8506c5668e34e138d310e1f4a69be6ce);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_412c26dae09643c7c8e8c93e3c956ce1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_412c26dae09643c7c8e8c93e3c956ce1);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpeername));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getpeername);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_family));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_family);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AF_INET);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_INET6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AF_INET6);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_getsockname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getsockname);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNSPEC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AF_UNSPEC);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd9b5dc4f45855a950afded70b781de6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd9b5dc4f45855a950afded70b781de6);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_263a8fc50d20f0578d26622d304dec5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_263a8fc50d20f0578d26622d304dec5e);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4734934d9ea3759d91f06172643bdfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4734934d9ea3759d91f06172643bdfe);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_detach));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detach);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_setblocking));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setblocking);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_4848b78d6f300f18d6e6880f5a60ea23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4848b78d6f300f18d6e6880f5a60ea23);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_convert_ipv6_sockaddr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_convert_ipv6_sockaddr_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert_ipv6_sockaddr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convert_ipv6_sockaddr);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketAttribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketAttribute);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_local_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local_address);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_socket);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__raw_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__raw_socket);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_address);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_AddressFamily));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AddressFamily);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_local_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local_port);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_port);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convert);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_peername));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_peername);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_a19af2ed4d4a2b78a9f7410d46898780));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a19af2ed4d4a2b78a9f7410d46898780);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_socket);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_sock_or_fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sock_or_fd);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCK_STREAM);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_async_backend);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_stream_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_stream_socket);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_socket);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_553ef6198406eec9bd685e13747bb586));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_553ef6198406eec9bd685e13747bb586);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_AF_UNIX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AF_UNIX);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_stream_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_unix_stream_socket);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_a829f904a7a044418029559865c9486d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a829f904a7a044418029559865c9486d);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_55c365c2719e819f6ae942d0ef2c64f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55c365c2719e819f6ae942d0ef2c64f6);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_fds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_fds);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_67f6ecc5b1aca5f8225161a054b0af95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67f6ecc5b1aca5f8225161a054b0af95);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_fds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_fds);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7d3be9ac53f4a388f97bf112996bbfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7d3be9ac53f4a388f97bf112996bbfe);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_475659b0d9872d1702c42382d2589e78));
CHECK_OBJECT_DEEP(mod_consts.const_dict_475659b0d9872d1702c42382d2589e78);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_listener_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_listener_socket);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5f62b8a3fb3b3bfbae4b2fa77171f37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5f62b8a3fb3b3bfbae4b2fa77171f37);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_accept));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accept);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_task_group_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_task_group_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task_group);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncExitStack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncExitStack);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_task_group);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_enter_async_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enter_async_context);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_soon);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8cf5bd6034cd003cb37964eed552526));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8cf5bd6034cd003cb37964eed552526);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_DGRAM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCK_DGRAM);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_udp_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_udp_socket);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_d618310ccd80d3b1097ece97b7e0d8ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d618310ccd80d3b1097ece97b7e0d8ae);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_sendto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sendto);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_c33fa8e6725a45527916f8e74d020d74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c33fa8e6725a45527916f8e74d020d74);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_udp_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_connected_udp_socket);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_2247e6e46c25cfec3c8017b67cd5ff1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2247e6e46c25cfec3c8017b67cd5ff1b);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_unix_datagram_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_unix_datagram_socket);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e8f7248535f9bdbfcb3ef34db859288));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e8f7248535f9bdbfcb3ef34db859288);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdaed48e874534196725801a148d672e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdaed48e874534196725801a148d672e);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_88c5523856aee3cc7e0b70498d0d7da4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88c5523856aee3cc7e0b70498d0d7da4);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_connected_unix_datagram_socket);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Collection_str_plain_Mapping_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Callable_str_plain_Collection_str_plain_Mapping_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Collection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Collection);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncExitStack_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncExitStack_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_IOBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IOBase);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_ipaddress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ipaddress);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPv4Address_str_plain_IPv6Address_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IPv4Address_str_plain_IPv6Address_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv4Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv4Address);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPv6Address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPv6Address);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AddressFamily_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AddressFamily_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_async_backend_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_f14822897c17d180109b6b5c99031bed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f14822897c17d180109b6b5c99031bed);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_43a83eacfd818506770e264a1428ebd1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43a83eacfd818506770e264a1428ebd1_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedAttributeProvider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedAttributeProvider);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedAttributeSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedAttributeSet);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_typed_attribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typed_attribute);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__streams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streams);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_ee739e052316c54ea2a9b98a90f0fc32_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ee739e052316c54ea2a9b98a90f0fc32_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteStream);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnreliableObjectStream);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tasks);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TaskGroup_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskGroup);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddressType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPAddressType);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_int_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPSockAddrType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPSockAddrType);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_SockAddrType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SockAddrType);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_UDPPacketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UDPPacketType);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_str_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramPacketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXDatagramPacketType);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_Retval_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_Retval_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_T_Retval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T_Retval);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_b6e57fa7de88d6fec475e23246b7a797));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b6e57fa7de88d6fec475e23246b7a797);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_d22b1df91b77904c6dc37641f4b0bf0b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d22b1df91b77904c6dc37641f4b0bf0b);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_4625c485faa0cc2dd94cda416903aa60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4625c485faa0cc2dd94cda416903aa60);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_105));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_105);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5441616ea845bc9d00cb5f04f7bc8e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5441616ea845bc9d00cb5f04f7bc8e7);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain__SocketProvider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SocketProvider);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_int_pos_146));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_146);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_fef23ea7fb83c89f8e87f9cf9a6d9226));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fef23ea7fb83c89f8e87f9cf9a6d9226);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_attributes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_attributes);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9fdd2f41a03661fdea80381c935cf4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9fdd2f41a03661fdea80381c935cf4b);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_32b6dbec672972cc16d83fd798f8f4bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_32b6dbec672972cc16d83fd798f8f4bb);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_11895b2a48527558a8b98cf1b360d29d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11895b2a48527558a8b98cf1b360d29d);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketStream);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_53b6835601f48edfa54aa9ba718a6cc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53b6835601f48edfa54aa9ba718a6cc0);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_184));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_184);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_e7ed351203ae78f87f4bda2188fba867));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e7ed351203ae78f87f4bda2188fba867);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXSocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXSocketStream);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_207));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_207);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_e36006e39e3bbd5459838cf83e99befa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e36006e39e3bbd5459838cf83e99befa);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_a0747e52226509e0bf726ff33d4ad32b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a0747e52226509e0bf726ff33d4ad32b);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_8b9859c20326e757976f134c8f94dc2d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8b9859c20326e757976f134c8f94dc2d);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketListener);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_38d281a660c0b0e785423a9cac678475));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38d281a660c0b0e785423a9cac678475);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_246));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_246);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_fd215304ae8eb9b5d5828bd583424bf2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd215304ae8eb9b5d5828bd583424bf2);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_22a906fe1b2fea8269d38e7fcfddd2b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22a906fe1b2fea8269d38e7fcfddd2b7);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_UDPSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UDPSocket);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_687e275a4ffefbf938b73313d21c3f0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_687e275a4ffefbf938b73313d21c3f0f);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_290));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_290);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_4ae19878c5f469448235faa52b73aa7d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ae19878c5f469448235faa52b73aa7d);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_1dea3a69042544034c7e6d53bc5d6b2a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1dea3a69042544034c7e6d53bc5d6b2a);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUDPSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectedUDPSocket);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bda00f8ac613220e989d18d83500a4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bda00f8ac613220e989d18d83500a4a);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_int_pos_320));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_320);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_bf8c9792a38922ea1e490fc79c6f2db8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bf8c9792a38922ea1e490fc79c6f2db8);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXDatagramSocket);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_8322f5886b10814244e5886ca16d379c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8322f5886b10814244e5886ca16d379c);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_347));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_347);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_bc91b0477449ef98386979520f15fcc8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc91b0477449ef98386979520f15fcc8);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_b72d449f6120cbe8c40c166a115a0f43));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b72d449f6120cbe8c40c166a115a0f43);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectedUNIXDatagramSocket);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd2460ad13024f1c3718bc4afd2f15e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd2460ad13024f1c3718bc4afd2f15e1);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_379));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_379);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_34e4e21e58a5a25ecebb696ed13f5784));
CHECK_OBJECT_DEEP(mod_consts.const_dict_34e4e21e58a5a25ecebb696ed13f5784);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_70914ed79cecdc898562d342d8119187));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70914ed79cecdc898562d342d8119187);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_convert_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_convert_str_plain_self_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_peername_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_peername_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_remote_port_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_remote_port_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_26174a88738c5990ff009e6fbffd56f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_26174a88738c5990ff009e6fbffd56f0_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_bd3349fa9a0115e473f6725c1222c76e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bd3349fa9a0115e473f6725c1222c76e_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msglen_str_plain_maxfds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_msglen_str_plain_maxfds_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_fds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_fds_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_host_str_plain_port_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_host_str_plain_port_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_path_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_955a64d93e46fad3121583e84570c13d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_955a64d93e46fad3121583e84570c13d_tuple);
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
static PyObject *module_var_accessor_anyio$abc$_sockets$AddressFamily(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AddressFamily);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AddressFamily, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AddressFamily);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AddressFamily, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$AsyncExitStack(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncExitStack);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncExitStack);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncExitStack, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncExitStack);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncExitStack, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncExitStack);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncExitStack);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncExitStack);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$ByteStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ByteStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ByteStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$IPSockAddrType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPSockAddrType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPSockAddrType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPSockAddrType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPSockAddrType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$IPv4Address(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Address);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Address, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv4Address);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv4Address, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$IPv6Address(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Address);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Address, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IPv6Address);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IPv6Address, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$Listener(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$SocketAttribute(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SocketAttribute);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SocketAttribute, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SocketAttribute);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SocketAttribute, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$SocketStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SocketStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SocketStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SocketStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SocketStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$TypedAttributeProvider(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeProvider);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedAttributeProvider);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedAttributeProvider, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedAttributeProvider);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedAttributeProvider, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeProvider);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeProvider);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeProvider);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$TypedAttributeSet(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedAttributeSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedAttributeSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedAttributeSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedAttributeSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeSet);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$UDPPacketType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UDPPacketType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UDPPacketType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UDPPacketType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UDPPacketType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$UNIXDatagramPacketType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNIXDatagramPacketType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNIXDatagramPacketType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNIXDatagramPacketType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNIXDatagramPacketType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$UnreliableObjectStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnreliableObjectStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnreliableObjectStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnreliableObjectStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnreliableObjectStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$_SocketProvider(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__SocketProvider);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SocketProvider);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SocketProvider, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SocketProvider);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SocketProvider, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__SocketProvider);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__SocketProvider);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SocketProvider);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$_validate_socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_socket);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$errno(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$get_async_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_sockets$typed_attribute(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_sockets->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_sockets->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_attribute);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_sockets->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typed_attribute);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typed_attribute, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typed_attribute);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typed_attribute, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_attribute);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_attribute);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_attribute);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_54f2d7c5b1949b4126a4d4900377df20;
static PyCodeObject *code_objects_0144317ff5f486063d886ca8b84b38fd;
static PyCodeObject *code_objects_1b6c543fdbc4bda50282c3a69a872aaf;
static PyCodeObject *code_objects_76760c0a1ae86a4736d69502620b4f51;
static PyCodeObject *code_objects_cbb0c65dbc2ab0f9b5162b443a98b312;
static PyCodeObject *code_objects_5b094f482ca423918a2588aa464c3fbc;
static PyCodeObject *code_objects_8f98c42990f45c83d34603b586411995;
static PyCodeObject *code_objects_9f2e3f6fd9c03424004dcdf3f619d7d9;
static PyCodeObject *code_objects_7fc007cd607e289492422e40e59f0953;
static PyCodeObject *code_objects_6e161cb29d582064879cc025a4b596af;
static PyCodeObject *code_objects_2a229a443eea7ed8e58358c4b434b3eb;
static PyCodeObject *code_objects_9f52312f50a9a0e0405a58243860f418;
static PyCodeObject *code_objects_56d0ca502aa54e94a34f5bccc76f44d9;
static PyCodeObject *code_objects_ff9dd7c8ec470cdcbd186071df80c482;
static PyCodeObject *code_objects_9c48351608b20a065d6f4bc859fe53d6;
static PyCodeObject *code_objects_6e14a93e3a2f6d195ec8e244f806d25b;
static PyCodeObject *code_objects_420bca9d59bd56fb48fd6ce0cc271c40;
static PyCodeObject *code_objects_3219eb0f0fb432a56e1100302626e2cc;
static PyCodeObject *code_objects_9b4162634c91d88a81cbd84a7d0cd65f;
static PyCodeObject *code_objects_5c0b838e9e5f7c6bae854157475e869d;
static PyCodeObject *code_objects_6831244e702cb2e011cffb1cda95cfd2;
static PyCodeObject *code_objects_52b6bb546701a8a7171717a61ab121dd;
static PyCodeObject *code_objects_61be7c0f712f6b2758236f2af963360b;
static PyCodeObject *code_objects_5da66d0d723021fd6cc7d999bf24a3fe;
static PyCodeObject *code_objects_85fc18e3786ae45b0e3f6687a610ef00;
static PyCodeObject *code_objects_584013d9cf963e1684cf3b107a851e89;
static PyCodeObject *code_objects_b771ceae5be088987babc4732100136a;
static PyCodeObject *code_objects_3fc7b2d8e6b034d7d94c35c201d8e596;
static PyCodeObject *code_objects_051c5acbf911101e94d42569e7c6b86c;
static PyCodeObject *code_objects_62b1ac41e02e81d23cee226519c498ca;
static PyCodeObject *code_objects_8dc96613855516424e2be54308d44103;
static PyCodeObject *code_objects_6e81410c0d359c1a8eeed18e2de8f0fe;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_70914ed79cecdc898562d342d8119187); CHECK_OBJECT(module_filename_obj);
code_objects_54f2d7c5b1949b4126a4d4900377df20 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_convert_str_plain_self_tuple, mod_consts.const_tuple_str_plain_convert_str_plain_self_tuple, 0, 0, 0);
code_objects_0144317ff5f486063d886ca8b84b38fd = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_peername_tuple, mod_consts.const_tuple_str_plain_peername_tuple, 0, 0, 0);
code_objects_1b6c543fdbc4bda50282c3a69a872aaf = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_remote_port_tuple, mod_consts.const_tuple_str_plain_remote_port_tuple, 0, 0, 0);
code_objects_76760c0a1ae86a4736d69502620b4f51 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_cbb0c65dbc2ab0f9b5162b443a98b312 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_5b094f482ca423918a2588aa464c3fbc = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_8f98c42990f45c83d34603b586411995 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe, mod_consts.const_str_digest_cf551ccb6f7d3ebf56f1f527501802fe, NULL, NULL, 0, 0, 0);
code_objects_9f2e3f6fd9c03424004dcdf3f619d7d9 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConnectedUDPSocket, mod_consts.const_str_plain_ConnectedUDPSocket, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7fc007cd607e289492422e40e59f0953 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6e161cb29d582064879cc025a4b596af = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SocketAttribute, mod_consts.const_str_plain_SocketAttribute, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2a229a443eea7ed8e58358c4b434b3eb = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SocketListener, mod_consts.const_str_plain_SocketListener, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9f52312f50a9a0e0405a58243860f418 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SocketStream, mod_consts.const_str_plain_SocketStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_56d0ca502aa54e94a34f5bccc76f44d9 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_UDPSocket, mod_consts.const_str_plain_UDPSocket, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ff9dd7c8ec470cdcbd186071df80c482 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_UNIXDatagramSocket, mod_consts.const_str_plain_UNIXDatagramSocket, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9c48351608b20a065d6f4bc859fe53d6 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_UNIXSocketStream, mod_consts.const_str_plain_UNIXSocketStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6e14a93e3a2f6d195ec8e244f806d25b = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__SocketProvider, mod_consts.const_str_plain__SocketProvider, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_420bca9d59bd56fb48fd6ce0cc271c40 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__raw_socket, mod_consts.const_str_digest_11895b2a48527558a8b98cf1b360d29d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3219eb0f0fb432a56e1100302626e2cc = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_socket, mod_consts.const_str_plain__validate_socket, mod_consts.const_tuple_26174a88738c5990ff009e6fbffd56f0_tuple, NULL, 3, 2, 0);
code_objects_9b4162634c91d88a81cbd84a7d0cd65f = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_accept, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5c0b838e9e5f7c6bae854157475e869d = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extra_attributes, mod_consts.const_str_digest_d9fdd2f41a03661fdea80381c935cf4b, mod_consts.const_tuple_bd3349fa9a0115e473f6725c1222c76e_tuple, NULL, 1, 0, 0);
code_objects_6831244e702cb2e011cffb1cda95cfd2 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_52b6bb546701a8a7171717a61ab121dd = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_61be7c0f712f6b2758236f2af963360b = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_5da66d0d723021fd6cc7d999bf24a3fe = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_85fc18e3786ae45b0e3f6687a610ef00 = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_584013d9cf963e1684cf3b107a851e89 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_b771ceae5be088987babc4732100136a = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_socket, mod_consts.const_str_digest_a829f904a7a044418029559865c9486d, mod_consts.const_tuple_str_plain_cls_str_plain_sock_or_fd_str_plain_sock_tuple, NULL, 2, 0, 0);
code_objects_3fc7b2d8e6b034d7d94c35c201d8e596 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_receive_fds, mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944, mod_consts.const_tuple_str_plain_self_str_plain_msglen_str_plain_maxfds_tuple, NULL, 3, 0, 0);
code_objects_051c5acbf911101e94d42569e7c6b86c = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_fds, mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_fds_tuple, NULL, 3, 0, 0);
code_objects_62b1ac41e02e81d23cee226519c498ca = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sendto, mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_host_str_plain_port_tuple, NULL, 4, 0, 0);
code_objects_8dc96613855516424e2be54308d44103 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sendto, mod_consts.const_str_digest_bdaed48e874534196725801a148d672e, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_path_tuple, NULL, 3, 0, 0);
code_objects_6e81410c0d359c1a8eeed18e2de8f0fe = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_serve, mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f, mod_consts.const_tuple_955a64d93e46fad3121583e84570c13d_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__10_serve(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__11_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__12_sendto(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__13_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__14_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__15_sendto(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__16_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__1__validate_socket(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3__raw_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__4_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_send_fds(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_receive_fds(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_from_socket(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_accept(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_sockets$$$function__1__validate_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock_or_fd = python_pars[0];
PyObject *par_sock_type = python_pars[1];
PyObject *par_addr_family = python_pars[2];
PyObject *par_require_connected = python_pars[3];
PyObject *par_require_bound = python_pars[4];
PyObject *var_sock = NULL;
PyObject *var_exc = NULL;
PyObject *var_bound_addr = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__1__validate_socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket = MAKE_FUNCTION_FRAME(tstate, code_objects_3219eb0f0fb432a56e1100302626e2cc, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket = cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_sock_or_fd);
tmp_isinstance_inst_1 = par_sock_or_fd;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_sock_or_fd);
tmp_kw_call_value_0_1 = par_sock_or_fd;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 46;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_fileno_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(var_sock == NULL);
var_sock = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_2);
var_exc = tmp_assign_source_2;
}
// Tried code:
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_exc);
tmp_expression_value_2 = var_exc;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_3 = module_var_accessor_anyio$abc$_sockets$errno(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 48;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ENOTSOCK);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 48;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
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
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_345f2e4fa1959dc3d1100c2b1b9c7d1e;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 49;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_exc);
tmp_raise_cause_1 = var_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 51;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooo";
goto try_except_handler_4;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_require_connected);
tmp_truth_name_1 = CHECK_IF_TRUE(par_require_connected);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_raise_cause_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_20d042a69d7204436603986855341beb;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 53;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(var_exc);
tmp_raise_cause_2 = var_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 53;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "oooooooo";
goto try_except_handler_4;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(par_require_bound);
tmp_truth_name_2 = CHECK_IF_TRUE(par_require_bound);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_raise_cause_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_a52c61f23cdf471732bb20dc6263c6ac;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 55;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
CHECK_OBJECT(var_exc);
tmp_raise_cause_3 = var_exc;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_3);
exception_lineno = 55;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_3);
type_description_1 = "oooooooo";
goto try_except_handler_4;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 57;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_4;
branch_end_5:;
branch_end_4:;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 45;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_sock_or_fd);
tmp_isinstance_inst_2 = par_sock_or_fd;
tmp_expression_value_4 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_socket);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_sock_or_fd);
tmp_assign_source_3 = par_sock_or_fd;
assert(var_sock == NULL);
Py_INCREF(tmp_assign_source_3);
var_sock = tmp_assign_source_3;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8506c5668e34e138d310e1f4a69be6ce;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_sock_or_fd);
tmp_type_arg_1 = par_sock_or_fd;
tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_5 == NULL));
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___qualname__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_412c26dae09643c7c8e8c93e3c956ce1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 61;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_end_6:;
branch_end_1:;
// Tried code:
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
CHECK_OBJECT(par_require_connected);
tmp_truth_name_3 = CHECK_IF_TRUE(par_require_connected);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_sock);
tmp_called_instance_1 = var_sock;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 68;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpeername);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_4);
var_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_raise_cause_4;
tmp_make_exception_arg_5 = mod_consts.const_str_digest_20d042a69d7204436603986855341beb;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 70;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
CHECK_OBJECT(var_exc);
tmp_raise_cause_4 = var_exc;
exception_state.exception_value = tmp_raise_type_5;
Py_INCREF(tmp_raise_cause_4);
exception_lineno = 70;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_4);
type_description_1 = "oooooooo";
goto try_except_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 67;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_7;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_5;
// End of try:
// End of try:
try_end_2:;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_4;
CHECK_OBJECT(par_require_bound);
tmp_truth_name_4 = CHECK_IF_TRUE(par_require_bound);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_sock);
tmp_expression_value_6 = var_sock;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_family);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_expression_value_7 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 74;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_AF_INET);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 74;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_cmp_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_cmp_expr_right_4, 0, tmp_tuple_element_2);
tmp_expression_value_8 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_AF_INET6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_4, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_right_4);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_10 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_sock);
tmp_called_instance_2 = var_sock;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 75;
tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getsockname);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
assert(var_bound_addr == NULL);
var_bound_addr = tmp_assign_source_5;
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_sock);
tmp_called_instance_3 = var_sock;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 77;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getsockname);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
assert(var_bound_addr == NULL);
var_bound_addr = tmp_assign_source_6;
}
branch_end_10:;
goto try_end_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_None;
assert(var_bound_addr == NULL);
Py_INCREF(tmp_assign_source_7);
var_bound_addr = tmp_assign_source_7;
}
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 73;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_10;
branch_end_11:;
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_5;
// End of try:
try_end_4:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_bound_addr);
tmp_operand_value_1 = var_bound_addr;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
tmp_make_exception_arg_6 = mod_consts.const_str_digest_a52c61f23cdf471732bb20dc6263c6ac;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 82;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_5;
}
branch_no_12:;
branch_no_9:;
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_addr_family);
tmp_cmp_expr_left_6 = par_addr_family;
tmp_expression_value_10 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_AF_UNSPEC);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_sock);
tmp_expression_value_11 = var_sock;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_family);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_addr_family);
tmp_cmp_expr_right_7 = par_addr_family;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_13 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_13 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_bd9b5dc4f45855a950afded70b781de6;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_addr_family);
tmp_expression_value_12 = par_addr_family;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_name);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_263a8fc50d20f0578d26622d304dec5e;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_sock);
tmp_expression_value_14 = var_sock;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_family);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_7 == NULL));
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 85;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_5;
}
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_sock);
tmp_expression_value_15 = var_sock;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_type);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_sock_type);
tmp_cmp_expr_right_8 = par_sock_type;
tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_a4734934d9ea3759d91f06172643bdfe;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_sock_type);
tmp_expression_value_16 = par_sock_type;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_name);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_263a8fc50d20f0578d26622d304dec5e;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(var_sock);
tmp_expression_value_18 = var_sock;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_type);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_make_exception_arg_8 == NULL));
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 91;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_5;
}
branch_no_14:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_sock_or_fd);
tmp_isinstance_inst_3 = par_sock_or_fd;
tmp_isinstance_cls_3 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_sock);
tmp_called_instance_4 = var_sock;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 97;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_detach);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_16:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_11;
goto branch_end_15;
branch_no_15:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 65;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_11;
branch_end_15:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_sock);
tmp_called_instance_5 = var_sock;
frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame.f_lineno = 101;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_setblocking,
    PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__1__validate_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__1__validate_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__1__validate_socket,
    type_description_1,
    par_sock_or_fd,
    par_sock_type,
    par_addr_family,
    par_require_connected,
    par_require_bound,
    var_sock,
    var_exc,
    var_bound_addr
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__1__validate_socket == cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket);
    cache_frame_frame_anyio$abc$_sockets$$$function__1__validate_socket = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__1__validate_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_sock);
tmp_return_value = var_sock;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sock);
CHECK_OBJECT(var_sock);
Py_DECREF(var_sock);
var_sock = NULL;
Py_XDECREF(var_bound_addr);
var_bound_addr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sock);
var_sock = NULL;
Py_XDECREF(var_bound_addr);
var_bound_addr = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
CHECK_OBJECT(par_sock_type);
Py_DECREF(par_sock_type);
CHECK_OBJECT(par_addr_family);
Py_DECREF(par_addr_family);
CHECK_OBJECT(par_require_connected);
Py_DECREF(par_require_connected);
CHECK_OBJECT(par_require_bound);
Py_DECREF(par_require_bound);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
CHECK_OBJECT(par_sock_type);
Py_DECREF(par_sock_type);
CHECK_OBJECT(par_addr_family);
Py_DECREF(par_addr_family);
CHECK_OBJECT(par_require_connected);
Py_DECREF(par_require_connected);
CHECK_OBJECT(par_require_bound);
Py_DECREF(par_require_bound);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_attributes = NULL;
struct Nuitka_CellObject *var_peername = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_convert = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_remote_port = Nuitka_Cell_NewEmpty();
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes = MAKE_FUNCTION_FRAME(tstate, code_objects_5c0b838e9e5f7c6bae854157475e869d, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_4848b78d6f300f18d6e6880f5a60ea23;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_convert_ipv6_sockaddr_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame.f_lineno = 149;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_convert_ipv6_sockaddr,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_convert_ipv6_sockaddr);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_convert) == NULL);
Nuitka_Cell_SET(var_convert, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_family);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda(tstate, tmp_closure_1);

tmp_assign_source_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
struct Nuitka_CellObject *tmp_closure_2[2];
PyObject *tmp_expression_value_3;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_expression_value_2 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_local_address);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_closure_2[0] = var_convert;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = par_self;
Py_INCREF(tmp_closure_2[1]);
tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda(tstate, tmp_closure_2);

tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_raw_socket);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
tmp_closure_3[0] = par_self;
Py_INCREF(tmp_closure_3[0]);
tmp_dict_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda(tstate, tmp_closure_3);

tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "coccc";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_attributes == NULL);
var_attributes = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(var_convert));
tmp_called_value_1 = Nuitka_Cell_GET(var_convert);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__raw_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "coccc";
    goto try_except_handler_2;
}
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame.f_lineno = 159;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpeername);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "coccc";
    goto try_except_handler_2;
}
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame.f_lineno = 159;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "coccc";
    goto try_except_handler_2;
}
assert(Nuitka_Cell_GET(var_peername) == NULL);
Nuitka_Cell_SET(var_peername, tmp_assign_source_3);

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
assert(Nuitka_Cell_GET(var_peername) == NULL);
Py_INCREF(tmp_assign_source_4);
Nuitka_Cell_SET(var_peername, tmp_assign_source_4);

}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 158;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame)) {
        frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "coccc";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_peername));
tmp_cmp_expr_left_2 = Nuitka_Cell_GET(var_peername);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
struct Nuitka_CellObject *tmp_closure_4[1];
PyObject *tmp_expression_value_5;
tmp_closure_4[0] = var_peername;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda(tstate, tmp_closure_4);

CHECK_OBJECT(var_attributes);
tmp_dictset_dict = var_attributes;
tmp_expression_value_5 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 165;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_remote_address);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 165;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_7 = Nuitka_Cell_GET(par_self);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__raw_socket);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_family);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_anyio$abc$_sockets$AddressFamily(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AddressFamily);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 168;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_AF_INET);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 168;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 0, tmp_tuple_element_1);
tmp_expression_value_9 = module_var_accessor_anyio$abc$_sockets$AddressFamily(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AddressFamily);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "coccc";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_AF_INET6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_right_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
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
struct Nuitka_CellObject *tmp_closure_5[1];
PyObject *tmp_expression_value_10;
tmp_closure_5[0] = par_self;
Py_INCREF(tmp_closure_5[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda(tstate, tmp_closure_5);

CHECK_OBJECT(var_attributes);
tmp_dictset_dict = var_attributes;
tmp_expression_value_10 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 169;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_local_port);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 169;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(Nuitka_Cell_GET(var_peername));
tmp_cmp_expr_left_4 = Nuitka_Cell_GET(var_peername);
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_peername));
tmp_expression_value_11 = Nuitka_Cell_GET(var_peername);
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_1, 1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_remote_port) == NULL);
Nuitka_Cell_SET(var_remote_port, tmp_assign_source_5);

}
{
struct Nuitka_CellObject *tmp_closure_6[1];
PyObject *tmp_expression_value_12;
tmp_closure_6[0] = var_remote_port;
Py_INCREF(tmp_closure_6[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda(tstate, tmp_closure_6);

CHECK_OBJECT(var_attributes);
tmp_dictset_dict = var_attributes;
tmp_expression_value_12 = module_var_accessor_anyio$abc$_sockets$SocketAttribute(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketAttribute);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 174;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_remote_port);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 174;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "coccc";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes,
    type_description_1,
    par_self,
    var_attributes,
    var_peername,
    var_convert,
    var_remote_port
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_attributes);
tmp_return_value = var_attributes;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_attributes);
CHECK_OBJECT(var_attributes);
Py_DECREF(var_attributes);
var_attributes = NULL;
CHECK_OBJECT(var_peername);
CHECK_OBJECT(var_peername);
Py_DECREF(var_peername);
var_peername = NULL;
CHECK_OBJECT(var_convert);
CHECK_OBJECT(var_convert);
Py_DECREF(var_convert);
var_convert = NULL;
CHECK_OBJECT(var_remote_port);
CHECK_OBJECT(var_remote_port);
Py_DECREF(var_remote_port);
var_remote_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_attributes);
var_attributes = NULL;
CHECK_OBJECT(var_peername);
CHECK_OBJECT(var_peername);
Py_DECREF(var_peername);
var_peername = NULL;
CHECK_OBJECT(var_convert);
CHECK_OBJECT(var_convert);
Py_DECREF(var_convert);
var_convert = NULL;
CHECK_OBJECT(var_remote_port);
CHECK_OBJECT(var_remote_port);
Py_DECREF(var_remote_port);
var_remote_port = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_76760c0a1ae86a4736d69502620b4f51, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__raw_socket);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_family);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_54f2d7c5b1949b4126a4d4900377df20, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_convert);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__raw_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda->m_frame.f_lineno = 154;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getsockname);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda->m_frame.f_lineno = 153;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "cc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda,
    type_description_1,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_cbb0c65dbc2ab0f9b5162b443a98b312, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__raw_socket);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_0144317ff5f486063d886ca8b84b38fd, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda) == 2);

// Framed code:
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_peername);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_5b094f482ca423918a2588aa464c3fbc, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__raw_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda->m_frame.f_lineno = 170;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getsockname);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_1b6c543fdbc4bda50282c3a69a872aaf, module_anyio$abc$_sockets, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda->m_type_description == NULL);
frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda = cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda) == 2);

// Framed code:
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remote_port);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda == cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda);
    cache_frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$abc$_sockets$$$function__4_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5da66d0d723021fd6cc7d999bf24a3fe, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
coroutine->m_frame->m_frame.f_lineno = 203;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 203;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 204;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 204;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 204;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_stream_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 204;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd,
        code_objects_5da66d0d723021fd6cc7d999bf24a3fe,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__4_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__5_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b771ceae5be088987babc4732100136a, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 220;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AF_UNIX);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 221;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
coroutine->m_frame->m_frame.f_lineno = 220;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 220;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 223;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 223;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 223;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 223;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 223;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_unix_stream_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 223;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 223;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 223;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_a829f904a7a044418029559865c9486d,
        code_objects_b771ceae5be088987babc4732100136a,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__5_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__6_send_fds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_fds = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_message);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
par_message = NULL;
CHECK_OBJECT(par_fds);
CHECK_OBJECT(par_fds);
Py_DECREF(par_fds);
par_fds = NULL;
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
struct anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_send_fds,
        mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6,
        code_objects_051c5acbf911101e94d42569e7c6b86c,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__6_send_fds$$$coroutine__1_send_fds_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__7_receive_fds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msglen = python_pars[1];
PyObject *par_maxfds = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_msglen);
CHECK_OBJECT(par_msglen);
Py_DECREF(par_msglen);
par_msglen = NULL;
CHECK_OBJECT(par_maxfds);
CHECK_OBJECT(par_maxfds);
Py_DECREF(par_maxfds);
par_maxfds = NULL;
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
struct anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_receive_fds,
        mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944,
        code_objects_3fc7b2d8e6b034d7d94c35c201d8e596,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__7_receive_fds$$$coroutine__1_receive_fds_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__8_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_61be7c0f712f6b2758236f2af963360b, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_475659b0d9872d1702c42382d2589e78);
coroutine->m_frame->m_frame.f_lineno = 267;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 268;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 268;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 268;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_listener_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 268;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d,
        code_objects_61be7c0f712f6b2758236f2af963360b,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__8_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__9_accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept(tstate);

goto try_return_handler_1;
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
struct anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_accept,
        mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168,
        code_objects_9b4162634c91d88a81cbd84a7d0cd65f,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__9_accept$$$coroutine__1_accept_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__10_serve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_task_group = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_handler;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_task_group;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_handler);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
par_handler = NULL;
CHECK_OBJECT(par_task_group);
CHECK_OBJECT(par_task_group);
Py_DECREF(par_task_group);
par_task_group = NULL;
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
struct anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_locals {
PyObject *var_create_task_group;
PyObject *var_stack;
PyObject *var_stream;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_create_task_group = NULL;
coroutine_heap->var_stack = NULL;
coroutine_heap->var_stream = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6e81410c0d359c1a8eeed18e2de8f0fe, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_create_task_group_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
coroutine->m_frame->m_frame.f_lineno = 279;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_create_task_group,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_create_task_group);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 279;
coroutine_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_create_task_group == NULL);
coroutine_heap->var_create_task_group = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$AsyncExitStack(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncExitStack);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 281;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___aenter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 281;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___aexit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 281;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_4 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_enter);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_7 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_stack == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_stack = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_task_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 282;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
coroutine->m_frame->m_frame.f_lineno = 283;
CHECK_OBJECT(coroutine_heap->var_stack);
tmp_expression_value_7 = coroutine_heap->var_stack;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_enter_async_context);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_create_task_group);
tmp_called_value_4 = coroutine_heap->var_create_task_group;
coroutine->m_frame->m_frame.f_lineno = 283;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 283;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_assign_source_8 = yield_return_value;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
    Nuitka_Cell_SET(coroutine->m_closure[2], tmp_assign_source_8);
    Py_XDECREF(old);
}

}
branch_no_1:;
loop_start_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 286;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 286;
tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_accept);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 286;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_stream;
    coroutine_heap->var_stream = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_task_group);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_start_soon);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_stream);
tmp_args_element_value_3 = coroutine_heap->var_stream;
coroutine->m_frame->m_frame.f_lineno = 287;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 287;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 285;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
goto loop_start_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
coroutine->m_frame->m_frame.f_lineno = 281;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_expression_value_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_exit);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_11;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 281;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 281;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

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
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 281;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 281;
tmp_expression_value_14 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_exit);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_13;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 281;
coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
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
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine_heap->var_create_task_group,
    coroutine_heap->var_stack,
    coroutine_heap->var_stream
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
CHECK_OBJECT(coroutine_heap->var_create_task_group);
CHECK_OBJECT(coroutine_heap->var_create_task_group);
Py_DECREF(coroutine_heap->var_create_task_group);
coroutine_heap->var_create_task_group = NULL;
CHECK_OBJECT(coroutine_heap->var_stack);
CHECK_OBJECT(coroutine_heap->var_stack);
Py_DECREF(coroutine_heap->var_stack);
coroutine_heap->var_stack = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_create_task_group);
coroutine_heap->var_create_task_group = NULL;
Py_XDECREF(coroutine_heap->var_stack);
coroutine_heap->var_stack = NULL;
Py_XDECREF(coroutine_heap->var_stream);
coroutine_heap->var_stream = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_serve,
        mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f,
        code_objects_6e81410c0d359c1a8eeed18e2de8f0fe,
        closure,
        3,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__10_serve$$$coroutine__1_serve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__11_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_85fc18e3786ae45b0e3f6687a610ef00, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_DGRAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_475659b0d9872d1702c42382d2589e78);
coroutine->m_frame->m_frame.f_lineno = 309;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 310;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 310;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 310;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_udp_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273,
        code_objects_85fc18e3786ae45b0e3f6687a610ef00,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__11_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__12_sendto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_port = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_host;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_port;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_self;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_host);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
par_host = NULL;
CHECK_OBJECT(par_port);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
par_port = NULL;
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
struct anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_62b1ac41e02e81d23cee226519c498ca, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
coroutine->m_frame->m_frame.f_lineno = 317;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_send);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_host);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_port);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
coroutine->m_frame->m_frame.f_lineno = 317;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "cccc";
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

goto function_return_exit;

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
    coroutine->m_closure[3],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_sendto,
        mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2,
        code_objects_62b1ac41e02e81d23cee226519c498ca,
        closure,
        4,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__12_sendto$$$coroutine__1_sendto_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__13_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6831244e702cb2e011cffb1cda95cfd2, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_DGRAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
coroutine->m_frame->m_frame.f_lineno = 339;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 344;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 344;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 344;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_connected_udp_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577,
        code_objects_6831244e702cb2e011cffb1cda95cfd2,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__13_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__14_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_584013d9cf963e1684cf3b107a851e89, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_DGRAM);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_args_element_value_2);

coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AF_UNIX);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_2);

coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 371;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
coroutine->m_frame->m_frame.f_lineno = 372;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 372;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_4 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 372;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_unix_datagram_socket, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5,
        code_objects_584013d9cf963e1684cf3b107a851e89,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__14_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__15_sendto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_path;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
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
struct anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8dc96613855516424e2be54308d44103, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
coroutine->m_frame->m_frame.f_lineno = 376;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_send);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
coroutine->m_frame->m_frame.f_lineno = 376;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccc";
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

goto function_return_exit;

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
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[1]
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_sendto,
        mod_consts.const_str_digest_bdaed48e874534196725801a148d672e,
        code_objects_8dc96613855516424e2be54308d44103,
        closure,
        3,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__15_sendto$$$coroutine__1_sendto_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_sockets$$$function__16_from_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_sock_or_fd = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_sock_or_fd;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sock_or_fd);
CHECK_OBJECT(par_sock_or_fd);
Py_DECREF(par_sock_or_fd);
par_sock_or_fd = NULL;
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
struct anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_locals {
PyObject *var_sock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_locals *coroutine_heap = (struct anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_52b6bb546701a8a7171717a61ab121dd, module_anyio$abc$_sockets, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$_validate_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__validate_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock_or_fd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SOCK_DGRAM);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AF_UNIX);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 403;
coroutine_heap->type_description_1 = "Nco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d7a68b8bb2c0b33a14e4fbe6bdb4c1d4);
coroutine->m_frame->m_frame.f_lineno = 402;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_sock == NULL);
coroutine_heap->var_sock = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 405;
tmp_called_value_2 = module_var_accessor_anyio$abc$_sockets$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 405;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_sock);
tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 405;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wrap_connected_unix_datagram_socket, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "Nco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 405;
coroutine_heap->type_description_1 = "Nco";
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
    NULL,
    coroutine->m_closure[0],
    coroutine_heap->var_sock
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
CHECK_OBJECT(coroutine_heap->var_sock);
CHECK_OBJECT(coroutine_heap->var_sock);
Py_DECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_context,
        module_anyio$abc$_sockets,
        mod_consts.const_str_plain_from_socket,
        mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f,
        code_objects_52b6bb546701a8a7171717a61ab121dd,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_sockets$$$function__16_from_socket$$$coroutine__1_from_socket_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__10_serve(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__10_serve,
        mod_consts.const_str_plain_serve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2876917990360b2a8779bacd1d4f309f,
#endif
        code_objects_6e81410c0d359c1a8eeed18e2de8f0fe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__11_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__11_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_17642ec3dae380f9749f233ea60a6273,
#endif
        code_objects_85fc18e3786ae45b0e3f6687a610ef00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_b8cf5bd6034cd003cb37964eed552526,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__12_sendto(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__12_sendto,
        mod_consts.const_str_plain_sendto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3c2283b94af9ede46eaad290ee5a04a2,
#endif
        code_objects_62b1ac41e02e81d23cee226519c498ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_d618310ccd80d3b1097ece97b7e0d8ae,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__13_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__13_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a0756b54a36cbe16ee44314956266577,
#endif
        code_objects_6831244e702cb2e011cffb1cda95cfd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_c33fa8e6725a45527916f8e74d020d74,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__14_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__14_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f9525b805568640a5a602a3e7c0a86d5,
#endif
        code_objects_584013d9cf963e1684cf3b107a851e89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_2247e6e46c25cfec3c8017b67cd5ff1b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__15_sendto(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__15_sendto,
        mod_consts.const_str_plain_sendto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bdaed48e874534196725801a148d672e,
#endif
        code_objects_8dc96613855516424e2be54308d44103,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_7e8f7248535f9bdbfcb3ef34db859288,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__16_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__16_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_804acede6d410062244960ef62b5c02f,
#endif
        code_objects_52b6bb546701a8a7171717a61ab121dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_88c5523856aee3cc7e0b70498d0d7da4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__1__validate_socket(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__1__validate_socket,
        mod_consts.const_str_plain__validate_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3219eb0f0fb432a56e1100302626e2cc,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes,
        mod_consts.const_str_plain_extra_attributes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9fdd2f41a03661fdea80381c935cf4b,
#endif
        code_objects_5c0b838e9e5f7c6bae854157475e869d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_76760c0a1ae86a4736d69502620b4f51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_54f2d7c5b1949b4126a4d4900377df20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_cbb0c65dbc2ab0f9b5162b443a98b312,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_0144317ff5f486063d886ca8b84b38fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_5b094f482ca423918a2588aa464c3fbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_999ed851eced5e2359f0322304b1990c,
#endif
        code_objects_1b6c543fdbc4bda50282c3a69a872aaf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$abc$_sockets,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__3__raw_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__raw_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_11895b2a48527558a8b98cf1b360d29d,
#endif
        code_objects_420bca9d59bd56fb48fd6ce0cc271c40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__4_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__4_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eaab869d3afdc5a01b2e9e7bed0448fd,
#endif
        code_objects_5da66d0d723021fd6cc7d999bf24a3fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_a19af2ed4d4a2b78a9f7410d46898780,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__5_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a829f904a7a044418029559865c9486d,
#endif
        code_objects_b771ceae5be088987babc4732100136a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_553ef6198406eec9bd685e13747bb586,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_send_fds(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__6_send_fds,
        mod_consts.const_str_plain_send_fds,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91518875f795d1d065f85ead128d9fb6,
#endif
        code_objects_051c5acbf911101e94d42569e7c6b86c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_55c365c2719e819f6ae942d0ef2c64f6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_receive_fds(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__7_receive_fds,
        mod_consts.const_str_plain_receive_fds,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_34ea938a88088f25ec1a1676c1c3a944,
#endif
        code_objects_3fc7b2d8e6b034d7d94c35c201d8e596,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_67f6ecc5b1aca5f8225161a054b0af95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_from_socket(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__8_from_socket,
        mod_consts.const_str_plain_from_socket,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1aafb82b5b9261d57f494264e752d60d,
#endif
        code_objects_61be7c0f712f6b2758236f2af963360b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_e7d3be9ac53f4a388f97bf112996bbfe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_sockets$$$function__9_accept,
        mod_consts.const_str_plain_accept,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168,
#endif
        code_objects_9b4162634c91d88a81cbd84a7d0cd65f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_sockets,
        mod_consts.const_str_digest_f5f62b8a3fb3b3bfbae4b2fa77171f37,
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

static function_impl_code const function_table_anyio$abc$_sockets[] = {
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__1_lambda,
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__2_lambda,
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__3_lambda,
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__4_lambda,
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__5_lambda,
impl_anyio$abc$_sockets$$$function__2_extra_attributes$$$function__6_lambda,
impl_anyio$abc$_sockets$$$function__1__validate_socket,
impl_anyio$abc$_sockets$$$function__2_extra_attributes,
impl_anyio$abc$_sockets$$$function__4_from_socket,
impl_anyio$abc$_sockets$$$function__5_from_socket,
impl_anyio$abc$_sockets$$$function__6_send_fds,
impl_anyio$abc$_sockets$$$function__7_receive_fds,
impl_anyio$abc$_sockets$$$function__8_from_socket,
impl_anyio$abc$_sockets$$$function__9_accept,
impl_anyio$abc$_sockets$$$function__10_serve,
impl_anyio$abc$_sockets$$$function__11_from_socket,
impl_anyio$abc$_sockets$$$function__12_sendto,
impl_anyio$abc$_sockets$$$function__13_from_socket,
impl_anyio$abc$_sockets$$$function__14_from_socket,
impl_anyio$abc$_sockets$$$function__15_sendto,
impl_anyio$abc$_sockets$$$function__16_from_socket,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$abc$_sockets);
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
        module_anyio$abc$_sockets,
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
        function_table_anyio$abc$_sockets,
        sizeof(function_table_anyio$abc$_sockets) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio.abc._sockets";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$abc$_sockets(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$abc$_sockets");

    // Store the module for future use.
    module_anyio$abc$_sockets = module;

    moduledict_anyio$abc$_sockets = MODULE_DICT(module_anyio$abc$_sockets);

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
        PRINT_STRING("anyio$abc$_sockets: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$abc$_sockets: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$abc$_sockets: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._sockets" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$abc$_sockets\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_sockets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_sockets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_sockets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_sockets);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$abc$_sockets);
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

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets;
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
PyObject *locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_anyio$abc$_sockets$$$class__2__SocketProvider_146 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_anyio$abc$_sockets$$$class__3_SocketStream_184 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_anyio$abc$_sockets$$$class__5_SocketListener_246 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_anyio$abc$_sockets$$$class__6_UDPSocket_290 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$abc$_sockets = MAKE_MODULE_FRAME(code_objects_8f98c42990f45c83d34603b586411995, module_anyio$abc$_sockets);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$abc$_sockets$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$abc$_sockets$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_errno;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_errno, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_abstractmethod_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_abstractmethod);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Callable_str_plain_Collection_str_plain_Mapping_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 7;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
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
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Collection,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Collection);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Collection, tmp_assign_source_12);
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
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_AsyncExitStack_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_AsyncExitStack,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AsyncExitStack);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncExitStack, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
tmp_import_name_from_6 = IMPORT_HARD_IO();
assert(!(tmp_import_name_from_6 == NULL));
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_IOBase,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_IOBase);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IOBase, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_ipaddress;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_IPv4Address_str_plain_IPv6Address_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 10;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_IPv4Address,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv4Address, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_IPv6Address,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPv6Address, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_AddressFamily_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_AddressFamily,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_AddressFamily);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_AddressFamily, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_20 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_20);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_get_async_backend_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 14;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_get_async_backend,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_get_async_backend);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_f14822897c17d180109b6b5c99031bed;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_43a83eacfd818506770e264a1428ebd1_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 15;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_TypedAttributeProvider,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_TypedAttributeProvider);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeProvider, tmp_assign_source_26);
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
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_TypedAttributeSet,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_TypedAttributeSet);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedAttributeSet, tmp_assign_source_27);
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
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_typed_attribute,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_attribute, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_ee739e052316c54ea2a9b98a90f0fc32_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 20;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_17 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_ByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ByteStream);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_Listener,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Listener);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_31);
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
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_UnreliableObjectStream,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_UnreliableObjectStream);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream, tmp_assign_source_32);
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
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__tasks;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anyio$abc$_sockets;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_TaskGroup_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 21;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_TaskGroup,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_TaskGroup);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskGroup, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_21;
tmp_import_name_from_21 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_21 == NULL));
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_anyio$abc$_sockets,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_anyio$abc$_sockets$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anyio$abc$_sockets$IPv4Address(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv4Address);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anyio$abc$_sockets$IPv6Address(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPv6Address);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPAddressType, tmp_assign_source_35);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_anyio$abc$_sockets$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_IPAddressType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_generic_alias_origin_1;
PyObject *tmp_generic_alias_args_1;
tmp_generic_alias_origin_1 = (PyObject *)&PyTuple_Type;
tmp_generic_alias_args_1 = mod_consts.const_tuple_type_str_type_int_tuple;
tmp_assign_source_36 = Py_GenericAlias(tmp_generic_alias_origin_1, tmp_generic_alias_args_1);
assert(tmp_assign_source_36 != NULL);
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType, tmp_assign_source_36);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_2 = module_var_accessor_anyio$abc$_sockets$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_IPSockAddrType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_2 = module_var_accessor_anyio$abc$_sockets$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anyio$abc$_sockets$IPSockAddrType(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPSockAddrType);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SockAddrType, tmp_assign_source_37);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_3 = module_var_accessor_anyio$abc$_sockets$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_SockAddrType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_3;
tmp_expression_value_3 = (PyObject *)&PyTuple_Type;
tmp_tuple_element_3 = (PyObject *)&PyBytes_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_anyio$abc$_sockets$IPSockAddrType(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IPSockAddrType);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType, tmp_assign_source_38);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_4 = module_var_accessor_anyio$abc$_sockets$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_UDPPacketType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_generic_alias_origin_2;
PyObject *tmp_generic_alias_args_2;
tmp_generic_alias_origin_2 = (PyObject *)&PyTuple_Type;
tmp_generic_alias_args_2 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_assign_source_39 = Py_GenericAlias(tmp_generic_alias_origin_2, tmp_generic_alias_args_2);
assert(tmp_assign_source_39 != NULL);
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType, tmp_assign_source_39);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_5 = module_var_accessor_anyio$abc$_sockets$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_UNIXDatagramPacketType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_sockets$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 33;
tmp_assign_source_40 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_T_Retval_tuple);

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_T_Retval, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_expression_value_4 = module_var_accessor_anyio$abc$_sockets$socket(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AF_UNSPEC);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_4);
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_b6e57fa7de88d6fec475e23246b7a797);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d22b1df91b77904c6dc37641f4b0bf0b);

tmp_assign_source_41 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__1__validate_socket(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_socket, tmp_assign_source_41);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_anyio$abc$_sockets$TypedAttributeSet(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedAttributeSet);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_5 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_45;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SocketAttribute;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 105;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_46;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_8 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_6;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 105;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 105;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_47;
}
branch_end_1:;
{
PyObject *tmp_assign_source_48;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_4625c485faa0cc2dd94cda416903aa60;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_SocketAttribute;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_105;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2 = MAKE_CLASS_FRAME(tstate, code_objects_6e161cb29d582064879cc025a4b596af, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_3;
tmp_called_value_3 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 138;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_family, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_AddressFamily;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_family;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
tmp_called_value_4 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 139;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_local_address, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_SockAddrType;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_local_address;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
tmp_called_value_5 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 140;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_local_port, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = const_str_plain_int;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_local_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 141;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_raw_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_d5441616ea845bc9d00cb5f04f7bc8e7;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_raw_socket;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
tmp_called_value_7 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 142;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_remote_address, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain_SockAddrType;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_remote_address;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
tmp_called_value_8 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_typed_attribute);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_anyio$abc$_sockets$typed_attribute(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typed_attribute);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame.f_lineno = 143;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain_remote_port, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = const_str_plain_int;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_remote_port;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__1_SocketAttribute_2);

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
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
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


exception_lineno = 105;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_SocketAttribute;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 105;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_49;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_48 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_48);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105);
locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105);
locals_anyio$abc$_sockets$$$class__1_SocketAttribute_105 = NULL;
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
exception_lineno = 105;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute, tmp_assign_source_48);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_anyio$abc$_sockets$TypedAttributeProvider(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedAttributeProvider);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_5, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain__SocketProvider;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 146;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_9;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 146;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_55;
}
branch_end_4:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_anyio$abc$_sockets$$$class__2__SocketProvider_146 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain__SocketProvider;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3 = MAKE_CLASS_FRAME(tstate, code_objects_6e14a93e3a2f6d195ec8e244f806d25b, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_11 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_fef23ea7fb83c89f8e87f9cf9a6d9226);

tmp_args_element_value_1 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__2_extra_attributes(tstate, tmp_annotations_2);

frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain_extra_attributes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_12 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_13 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_anyio$abc$_sockets$abstractmethod(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_32b6dbec672972cc16d83fd798f8f4bb);

tmp_args_element_value_3 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__3__raw_socket(tstate, tmp_annotations_3);

frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3->m_frame.f_lineno = 179;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3->m_frame.f_lineno = 178;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain__raw_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__2__SocketProvider_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
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


exception_lineno = 146;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain__SocketProvider;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_anyio$abc$_sockets$$$class__2__SocketProvider_146;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 146;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_57;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_56 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146);
locals_anyio$abc$_sockets$$$class__2__SocketProvider_146 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__2__SocketProvider_146);
locals_anyio$abc$_sockets$$$class__2__SocketProvider_146 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 146;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain__SocketProvider, tmp_assign_source_56);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_anyio$abc$_sockets$ByteStream(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ByteStream);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto try_except_handler_12;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_assign_source_58, 1, tmp_tuple_element_13);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_assign_source_58);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_6, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_61;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_SocketStream;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 184;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_62;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_12;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 184;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 184;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_63;
}
branch_end_7:;
{
PyObject *tmp_assign_source_64;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_anyio$abc$_sockets$$$class__3_SocketStream_184 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_53b6835601f48edfa54aa9ba718a6cc0;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_SocketStream;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_184;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4 = MAKE_CLASS_FRAME(tstate, code_objects_9f52312f50a9a0e0405a58243860f418, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_4;
tmp_called_value_16 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, const_str_plain_classmethod);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e7ed351203ae78f87f4bda2188fba867);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__4_from_socket(tstate, tmp_annotations_4);

frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4->m_frame.f_lineno = 191;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__3_SocketStream_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
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


exception_lineno = 184;

    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__3_SocketStream_184, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_SocketStream;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_anyio$abc$_sockets$$$class__3_SocketStream_184;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 184;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_65;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_64 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__3_SocketStream_184);
locals_anyio$abc$_sockets$$$class__3_SocketStream_184 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__3_SocketStream_184);
locals_anyio$abc$_sockets$$$class__3_SocketStream_184 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 184;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream, tmp_assign_source_64);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_66;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_anyio$abc$_sockets$SocketStream(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketStream);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_assign_source_66 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_66, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_67 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_7, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_69 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_69;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_UNIXSocketStream;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 207;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_70;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_15;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 207;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 207;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_71;
}
branch_end_10:;
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_UNIXSocketStream;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_207;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5 = MAKE_CLASS_FRAME(tstate, code_objects_9c48351608b20a065d6f4bc859fe53d6, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_5;
tmp_called_value_19 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, const_str_plain_classmethod);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e36006e39e3bbd5459838cf83e99befa);

tmp_args_element_value_5 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__5_from_socket(tstate, tmp_annotations_5);

frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5->m_frame.f_lineno = 208;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_6;
tmp_called_value_20 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = module_var_accessor_anyio$abc$_sockets$abstractmethod(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_a0747e52226509e0bf726ff33d4ad32b);

tmp_args_element_value_6 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__6_send_fds(tstate, tmp_annotations_6);

frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5->m_frame.f_lineno = 225;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain_send_fds, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
tmp_called_value_21 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_anyio$abc$_sockets$abstractmethod(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_8b9859c20326e757976f134c8f94dc2d);

tmp_args_element_value_7 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__7_receive_fds(tstate, tmp_annotations_7);

frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5->m_frame.f_lineno = 235;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain_receive_fds, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__4_UNIXSocketStream_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_17;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
branch_no_12:;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_UNIXSocketStream;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 207;
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto try_except_handler_17;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_73;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_72 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207);
locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207);
locals_anyio$abc$_sockets$$$class__4_UNIXSocketStream_207 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 207;
goto try_except_handler_15;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXSocketStream, tmp_assign_source_72);
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_74;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_8;
tmp_expression_value_29 = module_var_accessor_anyio$abc$_sockets$Listener(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_subscript_value_8 = module_var_accessor_anyio$abc$_sockets$SocketStream(tstate);
if (unlikely(tmp_subscript_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketStream);
}

if (tmp_subscript_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_8);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_assign_source_74 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_74, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM0(tmp_assign_source_74, 1, tmp_tuple_element_21);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_assign_source_74);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_75 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_30 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_9, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_77 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_77;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_SocketListener;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 246;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_78;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_33 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_34;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_34, tmp_name_value_16, tmp_default_value_5);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_18;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 246;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 246;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_79;
}
branch_end_13:;
{
PyObject *tmp_assign_source_80;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_anyio$abc$_sockets$$$class__5_SocketListener_246 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_38d281a660c0b0e785423a9cac678475;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_SocketListener;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_246;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6 = MAKE_CLASS_FRAME(tstate, code_objects_2a229a443eea7ed8e58358c4b434b3eb, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_8;
tmp_called_value_24 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, const_str_plain_classmethod);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_fd215304ae8eb9b5d5828bd583424bf2);

tmp_args_element_value_8 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__8_from_socket(tstate, tmp_annotations_8);

frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6->m_frame.f_lineno = 253;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_9;
tmp_called_value_25 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = module_var_accessor_anyio$abc$_sockets$abstractmethod(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);

tmp_args_element_value_9 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__9_accept(tstate, tmp_annotations_9);

frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6->m_frame.f_lineno = 270;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain_accept, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_10;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_22a906fe1b2fea8269d38e7fcfddd2b7);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__10_serve(tstate, tmp_defaults_2, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain_serve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__5_SocketListener_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_20;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__5_SocketListener_246, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
branch_no_15:;
{
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain_SocketListener;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_anyio$abc$_sockets$$$class__5_SocketListener_246;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 246;
tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto try_except_handler_20;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_81;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_80 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_80);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__5_SocketListener_246);
locals_anyio$abc$_sockets$$$class__5_SocketListener_246 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__5_SocketListener_246);
locals_anyio$abc$_sockets$$$class__5_SocketListener_246 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 246;
goto try_except_handler_18;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketListener, tmp_assign_source_80);
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_82;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_10;
tmp_expression_value_36 = module_var_accessor_anyio$abc$_sockets$UnreliableObjectStream(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnreliableObjectStream);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_subscript_value_10 = module_var_accessor_anyio$abc$_sockets$UDPPacketType(tstate);
if (unlikely(tmp_subscript_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UDPPacketType);
}

if (tmp_subscript_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_10);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_assign_source_82 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_82, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assign_source_82, 1, tmp_tuple_element_25);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_assign_source_82);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_83 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_11, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_85 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_85;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_tuple_element_26 = mod_consts.const_str_plain_UDPSocket;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 290;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_86;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_17, tmp_default_value_6);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_27);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_21;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 290;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_87;
}
branch_end_16:;
{
PyObject *tmp_assign_source_88;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_anyio$abc$_sockets$$$class__6_UDPSocket_290 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_687e275a4ffefbf938b73313d21c3f0f;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_UDPSocket;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_290;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7 = MAKE_CLASS_FRAME(tstate, code_objects_56d0ca502aa54e94a34f5bccc76f44d9, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7) == 2);

// Framed code:
{
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_11;
tmp_called_value_28 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, const_str_plain_classmethod);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_4ae19878c5f469448235faa52b73aa7d);

tmp_args_element_value_10 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__11_from_socket(tstate, tmp_annotations_11);

frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7->m_frame.f_lineno = 297;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_1dea3a69042544034c7e6d53bc5d6b2a);

tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__12_sendto(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain_sendto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__6_UDPSocket_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_23;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
branch_no_18:;
{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_29;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_29 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_28 = mod_consts.const_str_plain_UDPSocket;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = locals_anyio$abc$_sockets$$$class__6_UDPSocket_290;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 290;
tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto try_except_handler_23;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_89;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_88 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_88);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290);
locals_anyio$abc$_sockets$$$class__6_UDPSocket_290 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__6_UDPSocket_290);
locals_anyio$abc$_sockets$$$class__6_UDPSocket_290 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 290;
goto try_except_handler_21;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPSocket, tmp_assign_source_88);
}
goto try_end_11;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_90;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_12;
tmp_expression_value_43 = module_var_accessor_anyio$abc$_sockets$UnreliableObjectStream(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnreliableObjectStream);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_subscript_value_12 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_12);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_assign_source_90 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_90, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_assign_source_90, 1, tmp_tuple_element_29);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_assign_source_90);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_91 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_13, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_93;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_tuple_element_30 = mod_consts.const_str_plain_ConnectedUDPSocket;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 320;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_94;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_18, tmp_default_value_7);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_24;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 320;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 320;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_95;
}
branch_end_19:;
{
PyObject *tmp_assign_source_96;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_0bda00f8ac613220e989d18d83500a4a;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectedUDPSocket;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_320;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8 = MAKE_CLASS_FRAME(tstate, code_objects_9f2e3f6fd9c03424004dcdf3f619d7d9, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8) == 2);

// Framed code:
{
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_13;
tmp_called_value_31 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, const_str_plain_classmethod);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_bf8c9792a38922ea1e490fc79c6f2db8);

tmp_args_element_value_11 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__13_from_socket(tstate, tmp_annotations_13);

frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8->m_frame.f_lineno = 327;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_26;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
branch_no_21:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_32 = mod_consts.const_str_plain_ConnectedUDPSocket;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 320;
tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_26;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_97;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_96 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_96);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320);
locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320);
locals_anyio$abc$_sockets$$$class__7_ConnectedUDPSocket_320 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 320;
goto try_except_handler_24;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectedUDPSocket, tmp_assign_source_96);
}
goto try_end_12;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_98;
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_14;
tmp_expression_value_50 = module_var_accessor_anyio$abc$_sockets$UnreliableObjectStream(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnreliableObjectStream);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_subscript_value_14 = module_var_accessor_anyio$abc$_sockets$UNIXDatagramPacketType(tstate);
if (unlikely(tmp_subscript_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNIXDatagramPacketType);
}

if (tmp_subscript_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_14);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_assign_source_98 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_98, 0, tmp_tuple_element_33);
tmp_tuple_element_33 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_assign_source_98, 1, tmp_tuple_element_33);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_assign_source_98);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_98;
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_99 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_51 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_15, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_101;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_tuple_element_34 = mod_consts.const_str_plain_UNIXDatagramSocket;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 348;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_102;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_54 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_55;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_19, tmp_default_value_8);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_35);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_27;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 348;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 348;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_103;
}
branch_end_22:;
{
PyObject *tmp_assign_source_104;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_digest_8322f5886b10814244e5886ca16d379c;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_UNIXDatagramSocket;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_347;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9 = MAKE_CLASS_FRAME(tstate, code_objects_ff9dd7c8ec470cdcbd186071df80c482, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9) == 2);

// Framed code:
{
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_14;
tmp_called_value_34 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, const_str_plain_classmethod);

if (tmp_called_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_34 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_bc91b0477449ef98386979520f15fcc8);

tmp_args_element_value_12 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__14_from_socket(tstate, tmp_annotations_14);

frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9->m_frame.f_lineno = 356;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b72d449f6120cbe8c40c166a115a0f43);

tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_sockets$$$function__15_sendto(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain_sendto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_29;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
branch_no_24:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_called_value_35;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_35 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_36 = mod_consts.const_str_plain_UNIXDatagramSocket;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 348;
tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_29;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_105;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_104 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_104);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348);
locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348);
locals_anyio$abc$_sockets$$$class__8_UNIXDatagramSocket_348 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 348;
goto try_except_handler_27;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramSocket, tmp_assign_source_104);
}
goto try_end_13;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_106;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_16;
tmp_expression_value_57 = module_var_accessor_anyio$abc$_sockets$UnreliableObjectStream(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnreliableObjectStream);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_subscript_value_16 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_16);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_assign_source_106 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_106, 0, tmp_tuple_element_37);
tmp_tuple_element_37 = module_var_accessor_anyio$abc$_sockets$_SocketProvider(tstate);
if (unlikely(tmp_tuple_element_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SocketProvider);
}

if (tmp_tuple_element_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_assign_source_106, 1, tmp_tuple_element_37);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_assign_source_106);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_107 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_58 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_17, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_109 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_109;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_36;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_tuple_element_38 = mod_consts.const_str_plain_ConnectedUNIXDatagramSocket;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 379;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_110;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_61;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_61 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_62;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_62, tmp_name_value_20, tmp_default_value_9);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_63;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_63 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_39);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_30;
}
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 379;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 379;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_111;
}
branch_end_25:;
{
PyObject *tmp_assign_source_112;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a0aad69534b11d227ebdbba72a830b1b;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_digest_dd2460ad13024f1c3718bc4afd2f15e1;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectedUNIXDatagramSocket;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_379;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10 = MAKE_CLASS_FRAME(tstate, code_objects_7fc007cd607e289492422e40e59f0953, module_anyio$abc$_sockets, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10);
assert(Py_REFCNT(frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10) == 2);

// Framed code:
{
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_16;
tmp_called_value_37 = PyObject_GetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, const_str_plain_classmethod);

if (tmp_called_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_37 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_34e4e21e58a5a25ecebb696ed13f5784);

tmp_args_element_value_13 = MAKE_FUNCTION_anyio$abc$_sockets$$$function__16_from_socket(tstate, tmp_annotations_16);

frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10->m_frame.f_lineno = 386;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, mod_consts.const_str_plain_from_socket, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_32;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
branch_no_27:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_40 = mod_consts.const_str_plain_ConnectedUNIXDatagramSocket;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_anyio$abc$_sockets->m_frame.f_lineno = 379;
tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;

    goto try_except_handler_32;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_113;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_112 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_112);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379);
locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379);
locals_anyio$abc$_sockets$$$class__9_ConnectedUNIXDatagramSocket_379 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 379;
goto try_except_handler_30;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectedUNIXDatagramSocket, tmp_assign_source_112);
}
goto try_end_14;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_sockets, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_sockets->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_sockets, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$abc$_sockets);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_10:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$abc$_sockets", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._sockets" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$abc$_sockets);
    return module_anyio$abc$_sockets;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_sockets, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_sockets", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

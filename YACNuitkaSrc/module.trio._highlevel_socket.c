/* Generated code for Python module 'trio$_highlevel_socket'
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



/* The "module_trio$_highlevel_socket" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_highlevel_socket;
PyDictObject *moduledict_trio$_highlevel_socket;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_errno;
PyObject *const_str_plain__closed_stream_errnos;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_ClosedResourceError;
PyObject *const_tuple_str_digest_32f3466ce1db40f4b6ac89b945090500_tuple;
PyObject *const_str_plain_BrokenResourceError;
PyObject *const_str_digest_6d866af571045f003a06368a828ce977;
PyObject *const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0;
PyObject *const_str_plain_tsocket;
PyObject *const_str_plain_SocketType;
PyObject *const_str_digest_774a0081aeb925523fbf70a4afe6ae87;
PyObject *const_str_plain_SOCK_STREAM;
PyObject *const_str_digest_1e113fd3268cc8ea96719dcaa7bb8818;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_ConflictDetector;
PyObject *const_tuple_str_digest_a713cf6bea575b662e7489efb3775bfd_tuple;
PyObject *const_str_plain__send_conflict_detector;
PyObject *const_str_plain_suppress;
PyObject *const_tuple_type_OSError_tuple;
PyObject *const_str_plain_setsockopt;
PyObject *const_str_plain_IPPROTO_TCP;
PyObject *const_str_plain_TCP_NODELAY;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_TCP_NOTSENT_LOWAT;
PyObject *const_int_pos_16384;
PyObject *const_str_plain_self;
PyObject *const_str_plain_did_shutdown_SHUT_WR;
PyObject *const_tuple_str_digest_ceb88ad61f8e5b478f8fca19b573782c_tuple;
PyObject *const_str_plain_data;
PyObject *const_tuple_str_digest_e123f5250a0e07d7ed48812ce79c3834_tuple;
PyObject *const_str_plain_lowlevel;
PyObject *const_str_plain_checkpoint;
PyObject *const_str_plain_total_sent;
PyObject *const_str_plain_sent;
PyObject *const_str_plain_send_all;
PyObject *const_str_digest_e4d296cab9b751e6154d9e6ef074a426;
PyObject *const_str_plain_wait_writable;
PyObject *const_str_plain_wait_send_all_might_not_block;
PyObject *const_str_digest_38bf03b3fcc6606482ec796134faeab4;
PyObject *const_str_plain_shutdown;
PyObject *const_str_plain_SHUT_WR;
PyObject *const_str_plain_send_eof;
PyObject *const_str_digest_b702d9c5be67839511a733414927b4f5;
PyObject *const_str_plain_max_bytes;
PyObject *const_str_plain_DEFAULT_RECEIVE_SIZE;
PyObject *const_str_digest_770a7ba33a482dbe77633205dcd5fdca;
PyObject *const_str_plain_recv;
PyObject *const_str_plain_receive_some;
PyObject *const_str_digest_4e23ab525f6b4b62097048d692825dfb;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_871027d0c1b4176118646eee2171c67f;
PyObject *const_str_digest_15330f7d1314c06f30a251377f661150;
PyObject *const_str_digest_4190d417ab1cc7f707f6ab086083c766;
PyObject *const_str_digest_c7f9fda29856679571eacc9a43767708;
PyObject *const_str_digest_6f135f564c65e8d02ffb1e5cf7c1d000;
PyObject *const_str_plain_getsockopt;
PyObject *const_str_digest_e16d55f0c57c9d2974fbaf7fd755c774;
PyObject *const_str_digest_d5250a91a36ff406554bf947630a597f;
PyObject *const_str_digest_bcc3f965619707e9fbc745366880ea74;
PyObject *const_str_plain_SOL_SOCKET;
PyObject *const_str_plain_SO_ACCEPTCONN;
PyObject *const_str_plain_listening;
PyObject *const_str_digest_eb8daec2fbd946ee096498b31aee260a;
PyObject *const_str_digest_430b4f1e4998df5828d60c3993eec7a7;
PyObject *const_str_plain_accept;
PyObject *const_str_plain__ignorable_accept_errnos;
PyObject *const_str_plain_SocketStream;
PyObject *const_str_plain_sock;
PyObject *const_str_digest_345a17104ad219e77d1181ffa8d69168;
PyObject *const_str_digest_2bc3de6b47f3278f284f6a4f3af28afa;
PyObject *const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_str_plain_suppress_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_overload;
PyObject *const_tuple_str_plain_socket_tuple;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_ConflictDetector_str_plain_final_tuple;
PyObject *const_str_plain_final;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_HalfCloseableStream_str_plain_Listener_tuple;
PyObject *const_str_plain_HalfCloseableStream;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Buffer_tuple;
PyObject *const_str_plain_Buffer;
PyObject *const_int_pos_65536;
PyObject *const_str_plain_EBADF;
PyObject *const_str_plain_ENOTSOCK;
PyObject *const_dict_ab1444b74cebdb2a1a00c0c274cfc803;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7c857a70c4fc800d1f85b61e799391e6;
PyObject *const_str_digest_db65971298fb89942fbe6eb7f9ee454f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_55;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_17e101f4310ebfa70a44c6e3032e16a0;
PyObject *const_str_digest_fb1d52a9e0f0580e993918e862dcc23b;
PyObject *const_dict_b6992c1efbaa4c4dfc85ae147f0378bf;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_5f989ddf79a25de84b5917624c5cff59;
PyObject *const_dict_eb03664070e48af5add1ae62635ede19;
PyObject *const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc;
PyObject *const_dict_031a92b41055f2b0f45a500a4814c8b2;
PyObject *const_dict_f42ec8632ee031441043b651847d612d;
PyObject *const_dict_859cc3377ef9dacd2dae9ee741b74c49;
PyObject *const_str_digest_1efcfdf64d69789417faa55f097a087e;
PyObject *const_dict_6d7f87383f17e12cc74fec5bed510084;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_5a320395ce301a72f8207637d37d2133;
PyObject *const_tuple_str_plain_socket_str_plain__send_conflict_detector_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_list_5c720171d4bcf38ed22a425c0e22b3d3_list;
PyObject *const_str_plain__ignorable_accept_errno_names;
PyObject *const_str_digest_5d0fab3a1dece69bac9d0a3f85ea6ebb;
PyObject *const_tuple_type_AttributeError_tuple;
PyObject *const_str_plain_add;
PyObject *const_str_plain_SocketListener;
PyObject *const_str_digest_0465864ac183ebd698c056dd310f4153;
PyObject *const_int_pos_359;
PyObject *const_str_digest_81b25f7faa15143b49ea355de8aedf67;
PyObject *const_dict_aebc2ba443dfc176ff5fc8361a5b15de;
PyObject *const_str_digest_06b10e7d1b327880bee3d6ec00a3c7dc;
PyObject *const_str_digest_b9f92a9a068844098f97ca71c3d9e088;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_socket_str_plain_listening_tuple;
PyObject *const_tuple_str_plain_self_str_plain_socket_tuple;
PyObject *const_tuple_str_plain_exc_tuple;
PyObject *const_tuple_str_plain_self_str_plain_sock_str_underscore_str_plain_exc_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_level_str_plain_option_tuple;
PyObject *const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple;
PyObject *const_tuple_str_plain_self_str_plain_max_bytes_tuple;
PyObject *const_tuple_d39d04e93e4687b93606c32cf3a9f1dd_tuple;
PyObject *const_tuple_ad11f0eca991d1c7e3b741d667e1f563_tuple;
PyObject *const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[146];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._highlevel_socket"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__closed_stream_errnos);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedResourceError);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32f3466ce1db40f4b6ac89b945090500_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrokenResourceError);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d866af571045f003a06368a828ce977);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_tsocket);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketType);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_774a0081aeb925523fbf70a4afe6ae87);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e113fd3268cc8ea96719dcaa7bb8818);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a713cf6bea575b662e7489efb3775bfd_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__send_conflict_detector);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_setsockopt);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPPROTO_TCP);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_TCP_NODELAY);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_TCP_NOTSENT_LOWAT);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_did_shutdown_SHUT_WR);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ceb88ad61f8e5b478f8fca19b573782c_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e123f5250a0e07d7ed48812ce79c3834_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_sent);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_sent);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_all);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_send_all_might_not_block);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutdown);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHUT_WR);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_eof);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_bytes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_770a7ba33a482dbe77633205dcd5fdca);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive_some);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_15330f7d1314c06f30a251377f661150);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_4190d417ab1cc7f707f6ab086083c766);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7f9fda29856679571eacc9a43767708);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f135f564c65e8d02ffb1e5cf7c1d000);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_getsockopt);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_e16d55f0c57c9d2974fbaf7fd755c774);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5250a91a36ff406554bf947630a597f);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcc3f965619707e9fbc745366880ea74);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOL_SOCKET);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_SO_ACCEPTCONN);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_listening);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb8daec2fbd946ee096498b31aee260a);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_430b4f1e4998df5828d60c3993eec7a7);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_accept);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__ignorable_accept_errnos);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_sock);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bc3de6b47f3278f284f6a4f3af28afa);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_str_plain_suppress_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_final_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_final);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HalfCloseableStream_str_plain_Listener_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_HalfCloseableStream);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Buffer_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Buffer);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_EBADF);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTSOCK);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c857a70c4fc800d1f85b61e799391e6);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_db65971298fb89942fbe6eb7f9ee454f);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_17e101f4310ebfa70a44c6e3032e16a0);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb1d52a9e0f0580e993918e862dcc23b);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_b6992c1efbaa4c4dfc85ae147f0378bf);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_5f989ddf79a25de84b5917624c5cff59);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_eb03664070e48af5add1ae62635ede19);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_031a92b41055f2b0f45a500a4814c8b2);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_f42ec8632ee031441043b651847d612d);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_859cc3377ef9dacd2dae9ee741b74c49);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_6d7f87383f17e12cc74fec5bed510084);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_dict_5a320395ce301a72f8207637d37d2133);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_str_plain__send_conflict_detector_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_list_5c720171d4bcf38ed22a425c0e22b3d3_list);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__ignorable_accept_errno_names);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d0fab3a1dece69bac9d0a3f85ea6ebb);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_0465864ac183ebd698c056dd310f4153);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_359);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_81b25f7faa15143b49ea355de8aedf67);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_06b10e7d1b327880bee3d6ec00a3c7dc);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9f92a9a068844098f97ca71c3d9e088);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_socket_str_plain_listening_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_socket_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sock_str_underscore_str_plain_exc_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_level_str_plain_option_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_bytes_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_d39d04e93e4687b93606c32cf3a9f1dd_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_ad11f0eca991d1c7e3b741d667e1f563_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple);
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
void checkModuleConstants_trio$_highlevel_socket(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errno);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__closed_stream_errnos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__closed_stream_errnos);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClosedResourceError);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_32f3466ce1db40f4b6ac89b945090500_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_32f3466ce1db40f4b6ac89b945090500_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrokenResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BrokenResourceError);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d866af571045f003a06368a828ce977));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d866af571045f003a06368a828ce977);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_tsocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tsocket);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketType);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_774a0081aeb925523fbf70a4afe6ae87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_774a0081aeb925523fbf70a4afe6ae87);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOCK_STREAM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOCK_STREAM);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e113fd3268cc8ea96719dcaa7bb8818));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e113fd3268cc8ea96719dcaa7bb8818);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConflictDetector);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a713cf6bea575b662e7489efb3775bfd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a713cf6bea575b662e7489efb3775bfd_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__send_conflict_detector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__send_conflict_detector);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_OSError_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_setsockopt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setsockopt);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPPROTO_TCP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPPROTO_TCP);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_TCP_NODELAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TCP_NODELAY);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_TCP_NOTSENT_LOWAT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TCP_NOTSENT_LOWAT);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16384);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_did_shutdown_SHUT_WR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_did_shutdown_SHUT_WR);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ceb88ad61f8e5b478f8fca19b573782c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ceb88ad61f8e5b478f8fca19b573782c_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e123f5250a0e07d7ed48812ce79c3834_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e123f5250a0e07d7ed48812ce79c3834_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_sent);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_sent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sent);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_all);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_writable);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_send_all_might_not_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_send_all_might_not_block);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutdown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shutdown);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHUT_WR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHUT_WR);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_eof);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_bytes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_770a7ba33a482dbe77633205dcd5fdca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_770a7ba33a482dbe77633205dcd5fdca);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recv);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive_some));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive_some);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_15330f7d1314c06f30a251377f661150));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15330f7d1314c06f30a251377f661150);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_4190d417ab1cc7f707f6ab086083c766));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4190d417ab1cc7f707f6ab086083c766);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7f9fda29856679571eacc9a43767708));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7f9fda29856679571eacc9a43767708);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f135f564c65e8d02ffb1e5cf7c1d000));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f135f564c65e8d02ffb1e5cf7c1d000);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_getsockopt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getsockopt);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_e16d55f0c57c9d2974fbaf7fd755c774));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e16d55f0c57c9d2974fbaf7fd755c774);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5250a91a36ff406554bf947630a597f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5250a91a36ff406554bf947630a597f);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcc3f965619707e9fbc745366880ea74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcc3f965619707e9fbc745366880ea74);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOL_SOCKET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SOL_SOCKET);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_SO_ACCEPTCONN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SO_ACCEPTCONN);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_listening));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_listening);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb8daec2fbd946ee096498b31aee260a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb8daec2fbd946ee096498b31aee260a);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_430b4f1e4998df5828d60c3993eec7a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_430b4f1e4998df5828d60c3993eec7a7);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_accept));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accept);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__ignorable_accept_errnos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ignorable_accept_errnos);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketStream);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_sock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sock);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bc3de6b47f3278f284f6a4f3af28afa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bc3de6b47f3278f284f6a4f3af28afa);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_str_plain_suppress_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_str_plain_suppress_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_socket_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_final_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_final_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_final);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HalfCloseableStream_str_plain_Listener_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HalfCloseableStream_str_plain_Listener_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_HalfCloseableStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HalfCloseableStream);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Buffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Buffer_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Buffer);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_EBADF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EBADF);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTSOCK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOTSOCK);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c857a70c4fc800d1f85b61e799391e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c857a70c4fc800d1f85b61e799391e6);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_db65971298fb89942fbe6eb7f9ee454f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db65971298fb89942fbe6eb7f9ee454f);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_17e101f4310ebfa70a44c6e3032e16a0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17e101f4310ebfa70a44c6e3032e16a0);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb1d52a9e0f0580e993918e862dcc23b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb1d52a9e0f0580e993918e862dcc23b);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_b6992c1efbaa4c4dfc85ae147f0378bf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b6992c1efbaa4c4dfc85ae147f0378bf);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_5f989ddf79a25de84b5917624c5cff59));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f989ddf79a25de84b5917624c5cff59);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_eb03664070e48af5add1ae62635ede19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eb03664070e48af5add1ae62635ede19);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_031a92b41055f2b0f45a500a4814c8b2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_031a92b41055f2b0f45a500a4814c8b2);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_f42ec8632ee031441043b651847d612d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f42ec8632ee031441043b651847d612d);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_859cc3377ef9dacd2dae9ee741b74c49));
CHECK_OBJECT_DEEP(mod_consts.const_dict_859cc3377ef9dacd2dae9ee741b74c49);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_6d7f87383f17e12cc74fec5bed510084));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d7f87383f17e12cc74fec5bed510084);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_dict_5a320395ce301a72f8207637d37d2133));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5a320395ce301a72f8207637d37d2133);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_socket_str_plain__send_conflict_detector_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_socket_str_plain__send_conflict_detector_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_list_5c720171d4bcf38ed22a425c0e22b3d3_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_5c720171d4bcf38ed22a425c0e22b3d3_list);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__ignorable_accept_errno_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ignorable_accept_errno_names);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d0fab3a1dece69bac9d0a3f85ea6ebb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d0fab3a1dece69bac9d0a3f85ea6ebb);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_AttributeError_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketListener);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_0465864ac183ebd698c056dd310f4153));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0465864ac183ebd698c056dd310f4153);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_359));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_359);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_81b25f7faa15143b49ea355de8aedf67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81b25f7faa15143b49ea355de8aedf67);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_06b10e7d1b327880bee3d6ec00a3c7dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06b10e7d1b327880bee3d6ec00a3c7dc);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9f92a9a068844098f97ca71c3d9e088));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9f92a9a068844098f97ca71c3d9e088);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_socket_str_plain_listening_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_socket_str_plain_listening_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_socket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_socket_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exc_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sock_str_underscore_str_plain_exc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_sock_str_underscore_str_plain_exc_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_level_str_plain_option_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_level_str_plain_option_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_max_bytes_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_d39d04e93e4687b93606c32cf3a9f1dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d39d04e93e4687b93606c32cf3a9f1dd_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_ad11f0eca991d1c7e3b741d667e1f563_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ad11f0eca991d1c7e3b741d667e1f563_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 19
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
static PyObject *module_var_accessor_trio$_highlevel_socket$ConflictDetector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$DEFAULT_RECEIVE_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$HalfCloseableStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_HalfCloseableStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HalfCloseableStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HalfCloseableStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HalfCloseableStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HalfCloseableStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_HalfCloseableStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_HalfCloseableStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HalfCloseableStream);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$Listener(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$SocketStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$_closed_stream_errnos(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__closed_stream_errnos);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__closed_stream_errnos);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__closed_stream_errnos, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__closed_stream_errnos);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__closed_stream_errnos, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__closed_stream_errnos);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__closed_stream_errnos);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__closed_stream_errnos);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$_ignorable_accept_errno_names(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errno_names);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ignorable_accept_errno_names);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ignorable_accept_errno_names, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ignorable_accept_errno_names);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ignorable_accept_errno_names, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errno_names);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errno_names);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errno_names);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$_ignorable_accept_errnos(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errnos);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ignorable_accept_errnos);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ignorable_accept_errnos, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ignorable_accept_errnos);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ignorable_accept_errnos, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errnos);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errnos);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errnos);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$_translate_socket_errors_to_stream_errors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$errno(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$final(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_name);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$suppress(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_suppress);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_suppress, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_suppress);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_suppress, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_highlevel_socket$tsocket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_highlevel_socket->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_highlevel_socket->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_tsocket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_highlevel_socket->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tsocket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tsocket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tsocket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tsocket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_tsocket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_tsocket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tsocket);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0e216849974ae8753bbe74870b488c31;
static PyCodeObject *code_objects_1724f1df9ebcfcd4e831e0b2f33b5ac1;
static PyCodeObject *code_objects_1663d8ef430d83335ed392137589cc82;
static PyCodeObject *code_objects_e32a1bbb4067db56e5d2f44435177ba0;
static PyCodeObject *code_objects_52853af5c01474bb895ff637ab734d6f;
static PyCodeObject *code_objects_18e4b69a415569f0d7c3f2ca115eec0d;
static PyCodeObject *code_objects_550c72e0231256280872e6e2e6ad2e0b;
static PyCodeObject *code_objects_c55afeb3ba95c6ef2f7a6331969b4f02;
static PyCodeObject *code_objects_a5a4a647999c041421f6d989c843b511;
static PyCodeObject *code_objects_b19a04ec45814f849f250673267a71dd;
static PyCodeObject *code_objects_dd0f19f8ca22b7fdb6487d3b9774f5a0;
static PyCodeObject *code_objects_cfba677859692d91e199cd1f2b265176;
static PyCodeObject *code_objects_4a03d38c27d26b3416c9800d36f58b27;
static PyCodeObject *code_objects_131361d757a784d5d9ecba9fd1f12188;
static PyCodeObject *code_objects_c2f372beddbc9324dc5afdde5a68a3a6;
static PyCodeObject *code_objects_a3abb702527a2f502209c8cf7ac56a70;
static PyCodeObject *code_objects_b777c8a7ebee23c9a1d5030f76eca8f2;
static PyCodeObject *code_objects_84d718e7ff90332ea665ba8485edd0e3;
static PyCodeObject *code_objects_ebbe9c1bd2b9b7f9cecd7e53d3f67f08;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_06b10e7d1b327880bee3d6ec00a3c7dc); CHECK_OBJECT(module_filename_obj);
code_objects_0e216849974ae8753bbe74870b488c31 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b9f92a9a068844098f97ca71c3d9e088, mod_consts.const_str_digest_b9f92a9a068844098f97ca71c3d9e088, NULL, NULL, 0, 0, 0);
code_objects_1724f1df9ebcfcd4e831e0b2f33b5ac1 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SocketListener, mod_consts.const_str_plain_SocketListener, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1663d8ef430d83335ed392137589cc82 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SocketStream, mod_consts.const_str_plain_SocketStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e32a1bbb4067db56e5d2f44435177ba0 = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_81b25f7faa15143b49ea355de8aedf67, mod_consts.const_tuple_str_plain_self_str_plain_socket_str_plain_listening_tuple, NULL, 2, 0, 0);
code_objects_52853af5c01474bb895ff637ab734d6f = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_fb1d52a9e0f0580e993918e862dcc23b, mod_consts.const_tuple_str_plain_self_str_plain_socket_tuple, NULL, 2, 0, 0);
code_objects_18e4b69a415569f0d7c3f2ca115eec0d = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0, mod_consts.const_tuple_str_plain_exc_tuple, NULL, 0, 0, 0);
code_objects_550c72e0231256280872e6e2e6ad2e0b = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_accept, mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168, mod_consts.const_tuple_str_plain_self_str_plain_sock_str_underscore_str_plain_exc_tuple, NULL, 1, 0, 0);
code_objects_c55afeb3ba95c6ef2f7a6331969b4f02 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a5a4a647999c041421f6d989c843b511 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b19a04ec45814f849f250673267a71dd = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getsockopt, mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e, mod_consts.const_tuple_str_plain_self_str_plain_level_str_plain_option_tuple, NULL, 3, 0, 0);
code_objects_dd0f19f8ca22b7fdb6487d3b9774f5a0 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getsockopt, mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e, mod_consts.const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple, NULL, 4, 0, 0);
code_objects_cfba677859692d91e199cd1f2b265176 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getsockopt, mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e, mod_consts.const_tuple_bed2b03215b1c4d1373e1ddfc43440c2_tuple, NULL, 4, 0, 0);
code_objects_4a03d38c27d26b3416c9800d36f58b27 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_receive_some, mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb, mod_consts.const_tuple_str_plain_self_str_plain_max_bytes_tuple, NULL, 2, 0, 0);
code_objects_131361d757a784d5d9ecba9fd1f12188 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_all, mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426, mod_consts.const_tuple_d39d04e93e4687b93606c32cf3a9f1dd_tuple, NULL, 2, 0, 0);
code_objects_c2f372beddbc9324dc5afdde5a68a3a6 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_eof, mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a3abb702527a2f502209c8cf7ac56a70 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_setsockopt, mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc, mod_consts.const_tuple_ad11f0eca991d1c7e3b741d667e1f563_tuple, NULL, 4, 0, 0);
code_objects_b777c8a7ebee23c9a1d5030f76eca8f2 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_setsockopt, mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc, mod_consts.const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple, NULL, 5, 0, 0);
code_objects_84d718e7ff90332ea665ba8485edd0e3 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_setsockopt, mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc, mod_consts.const_tuple_e6fb20b397bd1a15ff5692b7edc99ff5_tuple, NULL, 5, 0, 0);
code_objects_ebbe9c1bd2b9b7f9cecd7e53d3f67f08 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_send_all_might_not_block, mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__10_setsockopt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__11_getsockopt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__12_getsockopt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__13_getsockopt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__14___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__15_accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__16_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__3_send_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__5_send_eof(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__6_receive_some(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__8_setsockopt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__9_setsockopt(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_GENERATOR_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors(tstate);

goto function_return_exit;

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
struct trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_locals {
PyObject *var_exc;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_locals *generator_heap = (struct trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_exc = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_18e4b69a415569f0d7c3f2ca115eec0d, module_trio$_highlevel_socket, sizeof(void *));
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
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_1 = Py_None;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(generator_heap->var_exc == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var_exc = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_exc);
tmp_expression_value_2 = generator_heap->var_exc;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = module_var_accessor_trio$_highlevel_socket$_closed_stream_errnos(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__closed_stream_errnos);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_raise_cause_1;
tmp_called_instance_1 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 49;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ClosedResourceError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_32f3466ce1db40f4b6ac89b945090500_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_raise_cause_1 = Py_None;
generator_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
generator_heap->exception_lineno = 49;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &generator_heap->exception_state, tmp_raise_cause_1);
generator_heap->type_description_1 = "o";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_2;
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_BrokenResourceError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_6d866af571045f003a06368a828ce977;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_exc);
tmp_format_value_1 = generator_heap->var_exc;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
generator->m_frame->m_frame.f_lineno = 51;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_exc);
tmp_raise_cause_2 = generator_heap->var_exc;
generator_heap->exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
generator_heap->exception_lineno = 51;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &generator_heap->exception_state, tmp_raise_cause_2);
generator_heap->type_description_1 = "o";
goto try_except_handler_3;
}
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_exc);
generator_heap->var_exc = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 45;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;

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
    generator_heap->var_exc
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors(PyThreadState *tstate) {
    return Nuitka_Generator_New(
        trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_18e4b69a415569f0d7c3f2ca115eec0d,
        NULL,
        0,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors$$$genobj__1__translate_socket_errors_to_stream_errors_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_socket = python_pars[1];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_highlevel_socket$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_highlevel_socket$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_trio$_highlevel_socket$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_highlevel_socket$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_highlevel_socket$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_52853af5c01474bb895ff637ab734d6f, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_highlevel_socket$$$function__2___init__->m_type_description == NULL);
frame_frame_trio$_highlevel_socket$$$function__2___init__ = cache_frame_frame_trio$_highlevel_socket$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$function__2___init__);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$function__2___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_socket);
tmp_isinstance_inst_1 = par_socket;
tmp_expression_value_1 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SocketType);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_774a0081aeb925523fbf70a4afe6ae87;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 81;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_socket);
tmp_expression_value_2 = par_socket;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_1e113fd3268cc8ea96719dcaa7bb8818;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 83;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_socket);
tmp_assattr_value_1 = par_socket;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_socket, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_socket$ConflictDetector(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConflictDetector);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 86;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_a713cf6bea575b662e7489efb3775bfd_tuple);

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__send_conflict_detector, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_highlevel_socket$suppress(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suppress);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 93;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_type_OSError_tuple);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 93;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_setsockopt);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_expression_value_7 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_IPPROTO_TCP);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_expression_value_8 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_TCP_NODELAY);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_args_element_value_3 = Py_True;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 93;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame)) {
        frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 93;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame)) {
        frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 93;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 93;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain_TCP_NOTSENT_LOWAT);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_trio$_highlevel_socket$suppress(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suppress);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 106;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_type_OSError_tuple);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_10 = tmp_with_2__source;
tmp_called_value_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___enter__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 106;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_11 = tmp_with_2__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_11, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_setsockopt);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_expression_value_13 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_IPPROTO_TCP);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_expression_value_14 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_TCP_NOTSENT_LOWAT);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_args_element_value_9 = mod_consts.const_int_pos_16384;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
tmp_args_element_value_10 = EXC_TYPE(tstate);
tmp_args_element_value_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_11); 
tmp_args_element_value_12 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_12 == NULL) {
    tmp_args_element_value_12 = Py_None;
}
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame)) {
        frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_8;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame)) {
        frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_8;
branch_end_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 106;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_10:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_5;
// End of try:
try_end_7:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame.f_lineno = 106;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
branch_no_7:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$function__2___init__,
    type_description_1,
    par_self,
    par_socket
);


// Release cached frame if used for exception.
if (frame_frame_trio$_highlevel_socket$$$function__2___init__ == cache_frame_frame_trio$_highlevel_socket$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_highlevel_socket$$$function__2___init__);
    cache_frame_frame_trio$_highlevel_socket$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_trio$_highlevel_socket$$$function__2___init__);

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
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_highlevel_socket$$$function__3_send_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_locals {
PyObject *var_total_sent;
PyObject *var_remaining;
PyObject *var_sent;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
PyObject *tmp_with_3__enter;
PyObject *tmp_with_3__exit;
nuitka_bool tmp_with_3__indicator;
PyObject *tmp_with_3__source;
PyObject *tmp_with_4__enter;
PyObject *tmp_with_4__exit;
nuitka_bool tmp_with_4__indicator;
PyObject *tmp_with_4__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_total_sent = NULL;
coroutine_heap->var_remaining = NULL;
coroutine_heap->var_sent = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
coroutine_heap->tmp_with_3__enter = NULL;
coroutine_heap->tmp_with_3__exit = NULL;
coroutine_heap->tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_3__source = NULL;
coroutine_heap->tmp_with_4__enter = NULL;
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_4__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_131361d757a784d5d9ecba9fd1f12188, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_socket);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_did_shutdown_SHUT_WR);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "ccooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ClosedResourceError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ceb88ad61f8e5b478f8fca19b573782c_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 111;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__send_conflict_detector);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__source == NULL);
coroutine_heap->tmp_with_4__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_4 = coroutine_heap->tmp_with_4__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 112;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__enter == NULL);
coroutine_heap->tmp_with_4__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_5 = coroutine_heap->tmp_with_4__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_4__exit == NULL);
coroutine_heap->tmp_with_4__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_highlevel_socket$_translate_socket_errors_to_stream_errors(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_3__source == NULL);
coroutine_heap->tmp_with_3__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_6 = coroutine_heap->tmp_with_3__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_3__enter == NULL);
coroutine_heap->tmp_with_3__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_3__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___exit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_with_3__exit == NULL);
coroutine_heap->tmp_with_3__exit = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_8;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
tmp_called_value_4 = (PyObject *)&PyMemoryView_Type;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_8 = coroutine_heap->tmp_with_2__source;
tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___enter__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_9 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_11 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___exit__);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_11;
}
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
tmp_assign_source_13 = coroutine_heap->tmp_with_2__enter;
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
    Nuitka_Cell_SET(coroutine->m_closure[0], tmp_assign_source_13);
    Py_INCREF(tmp_assign_source_13);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_10;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_socket);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_fileno);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_1 = const_int_neg_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
coroutine->m_frame->m_frame.f_lineno = 117;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_ClosedResourceError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e123f5250a0e07d7ed48812ce79c3834_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_10;
}
branch_no_3:;
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 118;
tmp_expression_value_13 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
coroutine->m_frame->m_frame.f_lineno = 118;
tmp_expression_value_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_normal);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_11;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto try_return_handler_9;
branch_no_2:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = const_int_0;
assert(coroutine_heap->var_total_sent == NULL);
Py_INCREF(tmp_assign_source_14);
coroutine_heap->var_total_sent = tmp_assign_source_14;
}
loop_start_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
if (coroutine_heap->var_total_sent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_sent);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}

tmp_cmp_expr_left_2 = coroutine_heap->var_total_sent;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}

tmp_len_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_1;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (coroutine_heap->var_total_sent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_sent);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}

tmp_start_value_1 = coroutine_heap->var_total_sent;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__source;
    coroutine_heap->tmp_with_1__source = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_15 = coroutine_heap->tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_15, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
coroutine->m_frame->m_frame.f_lineno = 122;
tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_16 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_17 = LOOKUP_SPECIAL(tstate, tmp_expression_value_16, const_str_plain___exit__);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__exit;
    coroutine_heap->tmp_with_1__exit = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_19 = coroutine_heap->tmp_with_1__enter;
{
    PyObject *old = coroutine_heap->var_remaining;
    coroutine_heap->var_remaining = tmp_assign_source_19;
    Py_INCREF(coroutine_heap->var_remaining);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 123;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_13;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_socket);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(coroutine_heap->var_remaining);
tmp_args_element_value_2 = coroutine_heap->var_remaining;
coroutine->m_frame->m_frame.f_lineno = 123;
tmp_expression_value_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, const_str_plain_send, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_13;
}
tmp_expression_value_17 = ASYNC_AWAIT(tstate, tmp_expression_value_18, await_normal);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_13;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_17;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_18, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_13;
}
tmp_assign_source_20 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_sent;
    coroutine_heap->var_sent = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_13:;
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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_21;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_14;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_14;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 122;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_14;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 122;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_14;
branch_end_5:;
goto try_end_2;
// Exception handler code:
try_except_handler_14:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_12;
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
try_except_handler_12:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 122;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_7:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_11;
// End of try:
try_end_3:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 122;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 122;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_8:;
goto try_end_4;
// Exception handler code:
try_except_handler_11:;
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

goto try_except_handler_10;
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
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (coroutine_heap->var_total_sent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_total_sent);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 124;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_1 = coroutine_heap->var_total_sent;
if (coroutine_heap->var_sent == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sent);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 124;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_right_1 = coroutine_heap->var_sent;
coroutine_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 124;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
tmp_assign_source_22 = tmp_iadd_expr_left_1;
coroutine_heap->var_total_sent = tmp_assign_source_22;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_10:;
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
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_9 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_assign_source_23;
tmp_assign_source_23 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_23;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_10 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_15;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_15;
}
tmp_condition_result_10 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 114;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_15;
branch_no_10:;
goto branch_end_9;
branch_no_9:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 114;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_15;
branch_end_9:;
goto try_end_6;
// Exception handler code:
try_except_handler_15:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_9;
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
// Return handler code:
try_return_handler_9:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_3;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_11 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_4;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_12 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_11:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_5;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_13 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 114;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_12:;
goto try_end_8;
// Return handler code:
try_return_handler_8:;
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
goto try_return_handler_6;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_7;
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
goto try_end_9;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 3.
coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_13 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
nuitka_bool tmp_assign_source_24;
tmp_assign_source_24 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_24;
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_14 = coroutine_heap->tmp_with_3__exit;
tmp_args_element_value_9 = EXC_TYPE(tstate);
tmp_args_element_value_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_10); 
tmp_args_element_value_11 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_11 == NULL) {
    tmp_args_element_value_11 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_16;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_16;
}
tmp_condition_result_14 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
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
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_16;
branch_no_14:;
goto branch_end_13;
branch_no_13:;
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
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_16;
branch_end_13:;
goto try_end_10;
// Exception handler code:
try_except_handler_16:;
coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_10;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

goto try_except_handler_6;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
goto try_end_11;
// Return handler code:
try_return_handler_6:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_6;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_15 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_call_result_7;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_16 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_11);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_15:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_11;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

goto try_except_handler_5;
// End of try:
try_end_11:;
{
bool tmp_condition_result_16;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_16 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_8;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_17 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_17, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_16:;
goto try_end_12;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
Py_DECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
Py_DECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
Py_DECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_12 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_12;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

goto try_except_handler_4;
// End of try:
try_end_12:;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
Py_DECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
Py_DECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
Py_DECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
goto try_end_13;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_13 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 4.
coroutine_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_17 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
nuitka_bool tmp_assign_source_25;
tmp_assign_source_25 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_25;
}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_6;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_18 = coroutine_heap->tmp_with_4__exit;
tmp_args_element_value_12 = EXC_TYPE(tstate);
tmp_args_element_value_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_13); 
tmp_args_element_value_14 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_14 == NULL) {
    tmp_args_element_value_14 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
}

if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_17;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_17;
}
tmp_condition_result_18 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_17;
branch_no_18:;
goto branch_end_17;
branch_no_17:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_17;
branch_end_17:;
goto try_end_14;
// Exception handler code:
try_except_handler_17:;
coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_14 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_4);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_14;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

goto try_except_handler_3;
// End of try:
try_end_14:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_4);

goto try_end_13;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_13:;
goto try_end_15;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_call_result_9;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_19 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 112;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_19, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_15 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_15 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_19;
nuitka_bool tmp_cmp_expr_left_13;
nuitka_bool tmp_cmp_expr_right_13;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_13 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
tmp_condition_result_19 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_call_result_10;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_20 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 112;
tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_15);

coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_19:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_15;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_15;

goto try_except_handler_2;
// End of try:
try_end_15:;
{
bool tmp_condition_result_20;
nuitka_bool tmp_cmp_expr_left_14;
nuitka_bool tmp_cmp_expr_right_14;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_14 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
tmp_condition_result_20 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_call_result_11;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_21 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 112;
tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 112;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_20:;
goto try_end_16;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
Py_DECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
Py_DECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
Py_DECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_16 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_16 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_16;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_16:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_total_sent,
    coroutine_heap->var_remaining,
    coroutine_heap->var_sent
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
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
Py_DECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
Py_DECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
Py_DECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_total_sent);
coroutine_heap->var_total_sent = NULL;
Py_XDECREF(coroutine_heap->var_remaining);
coroutine_heap->var_remaining = NULL;
Py_XDECREF(coroutine_heap->var_sent);
coroutine_heap->var_sent = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_17 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_17 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_total_sent);
coroutine_heap->var_total_sent = NULL;
Py_XDECREF(coroutine_heap->var_remaining);
coroutine_heap->var_remaining = NULL;
Py_XDECREF(coroutine_heap->var_sent);
coroutine_heap->var_sent = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_17;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_17;

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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_send_all,
        mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426,
        code_objects_131361d757a784d5d9ecba9fd1f12188,
        closure,
        2,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__3_send_all$$$coroutine__1_send_all_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_locals {
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
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_locals *)coroutine->m_heap_storage;
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
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ebbe9c1bd2b9b7f9cecd7e53d3f67f08, module_trio$_highlevel_socket, sizeof(void *));
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
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__send_conflict_detector);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_2__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 127;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 128;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = const_int_neg_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_raise_type_input_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ClosedResourceError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 129;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "c";
goto try_except_handler_3;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_highlevel_socket$_translate_socket_errors_to_stream_errors(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 130;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_6 = coroutine_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 130;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___exit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 131;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_socket);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
coroutine->m_frame->m_frame.f_lineno = 131;
tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_wait_writable);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_7;
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
    coroutine_heap->exception_lineno = 130;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 130;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_7;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_5;
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
try_except_handler_5:;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 130;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 130;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
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
try_except_handler_3:;
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
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_8;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_8;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 127;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_8;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 127;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_8;
branch_end_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_2;
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
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 127;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_1;
// End of try:
try_end_7:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 127;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_9:;
goto try_end_8;
// Exception handler code:
try_except_handler_1:;
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_wait_send_all_might_not_block,
        mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4,
        code_objects_ebbe9c1bd2b9b7f9cecd7e53d3f67f08,
        closure,
        1,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block$$$coroutine__1_wait_send_all_might_not_block_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__5_send_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_locals {
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
PyObject *tmp_return_value;
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
};
#endif

static PyObject *trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_locals *)coroutine->m_heap_storage;
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
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c2f372beddbc9324dc5afdde5a68a3a6, module_trio$_highlevel_socket, sizeof(void *));
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
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__send_conflict_detector);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_2__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 134;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 135;
tmp_expression_value_6 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 135;
tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_socket);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_did_shutdown_SHUT_WR);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_highlevel_socket$_translate_socket_errors_to_stream_errors(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 140;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_9 = coroutine_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 140;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_10 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___exit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_13;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_socket);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_shutdown);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
tmp_expression_value_13 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_SHUT_WR);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
coroutine->m_frame->m_frame.f_lineno = 141;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_7;
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
    coroutine_heap->exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_7;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_5;
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
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 140;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 140;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
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
try_except_handler_3:;
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
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_8;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_8;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 134;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_8;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 134;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_8;
branch_end_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_2;
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
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_9 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 134;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_5;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_10 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 134;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_8:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_1;
// End of try:
try_end_7:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_6;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_11 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 134;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_9:;
goto try_end_8;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_send_eof,
        mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5,
        code_objects_c2f372beddbc9324dc5afdde5a68a3a6,
        closure,
        1,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__5_send_eof$$$coroutine__1_send_eof_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__6_receive_some(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_max_bytes = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_max_bytes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_max_bytes);
CHECK_OBJECT(par_max_bytes);
Py_DECREF(par_max_bytes);
par_max_bytes = NULL;
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
struct trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
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
};
#endif

static PyObject *trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4a03d38c27d26b3416c9800d36f58b27, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *));
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_bytes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_trio$_highlevel_socket$DEFAULT_RECEIVE_SIZE(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
    Nuitka_Cell_SET(coroutine->m_closure[0], tmp_assign_source_1);
    Py_INCREF(tmp_assign_source_1);
    Py_XDECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_bytes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cc";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_770a7ba33a482dbe77633205dcd5fdca;
coroutine->m_frame->m_frame.f_lineno = 147;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 147;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cc";
goto frame_exception_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_socket$_translate_socket_errors_to_stream_errors(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 148;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
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
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 148;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 149;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_socket);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_recv);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_max_bytes);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 149;
tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 149;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_3;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_4;
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
    coroutine_heap->exception_lineno = 148;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cc";
goto try_except_handler_4;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 148;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cc";
goto try_except_handler_4;
branch_end_3:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 148;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 148;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cc";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
    coroutine->m_closure[1],
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_receive_some,
        mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb,
        code_objects_4a03d38c27d26b3416c9800d36f58b27,
        closure,
        2,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__6_receive_some$$$coroutine__1_receive_some_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__7_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a5a4a647999c041421f6d989c843b511, module_trio$_highlevel_socket, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 152;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 153;
tmp_expression_value_4 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 153;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 153;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 153;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 153;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 153;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 153;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f,
        code_objects_a5a4a647999c041421f6d989c843b511,
        closure,
        1,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__7_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__10_setsockopt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_level = python_pars[1];
PyObject *par_option = python_pars[2];
PyObject *par_value = python_pars[3];
PyObject *par_length = python_pars[4];
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$function__10_setsockopt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt)) {
    Py_XDECREF(cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt = MAKE_FUNCTION_FRAME(tstate, code_objects_84d718e7ff90332ea665ba8485edd0e3, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_type_description == NULL);
frame_frame_trio$_highlevel_socket$$$function__10_setsockopt = cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$function__10_setsockopt);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$function__10_setsockopt) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_length);
tmp_cmp_expr_left_1 = par_length;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_2 = par_value;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_15330f7d1314c06f30a251377f661150;
frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_frame.f_lineno = 178;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 178;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_level);
tmp_args_element_value_1 = par_level;
CHECK_OBJECT(par_option);
tmp_args_element_value_2 = par_option;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_setsockopt,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_3 = par_value;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4190d417ab1cc7f707f6ab086083c766;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_operand_value_1 = par_value;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_c7f9fda29856679571eacc9a43767708;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_frame.f_lineno = 183;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 183;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_socket);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_level);
tmp_args_element_value_4 = par_level;
CHECK_OBJECT(par_option);
tmp_args_element_value_5 = par_option;
CHECK_OBJECT(par_value);
tmp_args_element_value_6 = par_value;
CHECK_OBJECT(par_length);
tmp_args_element_value_7 = par_length;
frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_setsockopt,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__10_setsockopt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$function__10_setsockopt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__10_setsockopt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$function__10_setsockopt,
    type_description_1,
    par_self,
    par_level,
    par_option,
    par_value,
    par_length
);


// Release cached frame if used for exception.
if (frame_frame_trio$_highlevel_socket$$$function__10_setsockopt == cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt);
    cache_frame_frame_trio$_highlevel_socket$$$function__10_setsockopt = NULL;
}

assertFrameObject(frame_frame_trio$_highlevel_socket$$$function__10_setsockopt);

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
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_highlevel_socket$$$function__13_getsockopt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_level = python_pars[1];
PyObject *par_option = python_pars[2];
PyObject *par_buffersize = python_pars[3];
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$function__13_getsockopt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt)) {
    Py_XDECREF(cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt = MAKE_FUNCTION_FRAME(tstate, code_objects_cfba677859692d91e199cd1f2b265176, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt->m_type_description == NULL);
frame_frame_trio$_highlevel_socket$$$function__13_getsockopt = cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$function__13_getsockopt);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$function__13_getsockopt) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_buffersize);
tmp_cmp_expr_left_1 = par_buffersize;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_level);
tmp_args_element_value_1 = par_level;
CHECK_OBJECT(par_option);
tmp_args_element_value_2 = par_option;
frame_frame_trio$_highlevel_socket$$$function__13_getsockopt->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_getsockopt,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_socket);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_level);
tmp_args_element_value_3 = par_level;
CHECK_OBJECT(par_option);
tmp_args_element_value_4 = par_option;
CHECK_OBJECT(par_buffersize);
tmp_args_element_value_5 = par_buffersize;
frame_frame_trio$_highlevel_socket$$$function__13_getsockopt->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_getsockopt,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__13_getsockopt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$function__13_getsockopt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__13_getsockopt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$function__13_getsockopt,
    type_description_1,
    par_self,
    par_level,
    par_option,
    par_buffersize
);


// Release cached frame if used for exception.
if (frame_frame_trio$_highlevel_socket$$$function__13_getsockopt == cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt);
    cache_frame_frame_trio$_highlevel_socket$$$function__13_getsockopt = NULL;
}

assertFrameObject(frame_frame_trio$_highlevel_socket$$$function__13_getsockopt);

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
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_buffersize);
Py_DECREF(par_buffersize);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_buffersize);
Py_DECREF(par_buffersize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_highlevel_socket$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_socket = python_pars[1];
PyObject *var_listening = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$function__14___init__;
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
static struct Nuitka_FrameObject *cache_frame_frame_trio$_highlevel_socket$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_highlevel_socket$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_trio$_highlevel_socket$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_highlevel_socket$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_highlevel_socket$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e32a1bbb4067db56e5d2f44435177ba0, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_highlevel_socket$$$function__14___init__->m_type_description == NULL);
frame_frame_trio$_highlevel_socket$$$function__14___init__ = cache_frame_frame_trio$_highlevel_socket$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$function__14___init__);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$function__14___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_socket);
tmp_isinstance_inst_1 = par_socket;
tmp_expression_value_1 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SocketType);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d5250a91a36ff406554bf947630a597f;
frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame.f_lineno = 378;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_socket);
tmp_expression_value_2 = par_socket;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SOCK_STREAM);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 379;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_bcc3f965619707e9fbc745366880ea74;
frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame.f_lineno = 380;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 380;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_socket);
tmp_expression_value_4 = par_socket;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_getsockopt);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SOL_SOCKET);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = module_var_accessor_trio$_highlevel_socket$tsocket(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tsocket);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SO_ACCEPTCONN);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame.f_lineno = 382;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_listening == NULL);
var_listening = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__14___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__14___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 381;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame)) {
        frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_no_3:;
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
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_try_except_1__unhandled_indicator;
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
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
if (var_listening == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_listening);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 387;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = var_listening;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_eb8daec2fbd946ee096498b31aee260a;
frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame.f_lineno = 388;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 388;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_no_4:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_socket);
tmp_assattr_value_1 = par_socket;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_socket, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$function__14___init__,
    type_description_1,
    par_self,
    par_socket,
    var_listening
);


// Release cached frame if used for exception.
if (frame_frame_trio$_highlevel_socket$$$function__14___init__ == cache_frame_frame_trio$_highlevel_socket$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_highlevel_socket$$$function__14___init__);
    cache_frame_frame_trio$_highlevel_socket$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_trio$_highlevel_socket$$$function__14___init__);

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
Py_XDECREF(var_listening);
var_listening = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_listening);
var_listening = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_socket);
Py_DECREF(par_socket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_highlevel_socket$$$function__15_accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_locals {
PyObject *var_sock;
PyObject *var__;
PyObject *var_exc;
nuitka_bool tmp_try_except_1__unhandled_indicator;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_sock = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->var_exc = NULL;
coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_550c72e0231256280872e6e2e6ad2e0b, module_trio$_highlevel_socket, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 411;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 411;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_accept);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = yield_return_value;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
}
{
    PyObject *old = coroutine_heap->tmp_tuple_unpack_1__source_iter;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
{
    PyObject *old = coroutine_heap->tmp_tuple_unpack_1__element_1;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
{
    PyObject *old = coroutine_heap->tmp_tuple_unpack_1__element_2;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = coroutine_heap->var_sock;
    coroutine_heap->var_sock = tmp_assign_source_5;
    Py_INCREF(coroutine_heap->var_sock);
    Py_XDECREF(old);
}

}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = coroutine_heap->var__;
    coroutine_heap->var__ = tmp_assign_source_6;
    Py_INCREF(coroutine_heap->var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_7;
}
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
{
    PyObject *old = coroutine_heap->var_exc;
    coroutine_heap->var_exc = tmp_assign_source_8;
    Py_INCREF(coroutine_heap->var_exc);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_expression_value_4 = coroutine_heap->var_exc;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_2 = module_var_accessor_trio$_highlevel_socket$_closed_stream_errnos(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__closed_stream_errnos);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 413;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_raise_cause_1;
tmp_expression_value_5 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_raise_type_input_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ClosedResourceError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_raise_cause_1 = Py_None;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 414;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "cooo";
goto try_except_handler_6;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(coroutine_heap->var_exc);
tmp_expression_value_6 = coroutine_heap->var_exc;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_3 = module_var_accessor_trio$_highlevel_socket$_ignorable_accept_errnos(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__ignorable_accept_errnos);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 415;
coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_6;
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
    coroutine_heap->exception_lineno = 416;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooo";
goto try_except_handler_6;
branch_no_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;

goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 410;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_socket$SocketStream(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_SocketStream);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_sock == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sock);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = coroutine_heap->var_sock;
coroutine->m_frame->m_frame.f_lineno = 418;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 409;
coroutine_heap->type_description_1 = "cooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;

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
    coroutine_heap->var_sock,
    coroutine_heap->var__,
    coroutine_heap->var_exc
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
Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_sock);
coroutine_heap->var_sock = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
Py_XDECREF(coroutine_heap->var_exc);
coroutine_heap->var_exc = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_accept,
        mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168,
        code_objects_550c72e0231256280872e6e2e6ad2e0b,
        closure,
        1,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__15_accept$$$coroutine__1_accept_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_highlevel_socket$$$function__16_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c55afeb3ba95c6ef2f7a6331969b4f02, module_trio$_highlevel_socket, sizeof(void *));
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 422;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_socket);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 422;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 422;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 422;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 423;
tmp_expression_value_4 = module_var_accessor_trio$_highlevel_socket$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 423;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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

static PyObject *MAKE_COROUTINE_trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_context,
        module_trio$_highlevel_socket,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c,
        code_objects_c55afeb3ba95c6ef2f7a6331969b4f02,
        closure,
        1,
#if 1
        sizeof(struct trio$_highlevel_socket$$$function__16_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__10_setsockopt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__10_setsockopt,
        mod_consts.const_str_plain_setsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc,
#endif
        code_objects_84d718e7ff90332ea665ba8485edd0e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        mod_consts.const_str_digest_6f135f564c65e8d02ffb1e5cf7c1d000,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__11_getsockopt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e,
#endif
        code_objects_b19a04ec45814f849f250673267a71dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__12_getsockopt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e,
#endif
        code_objects_dd0f19f8ca22b7fdb6487d3b9774f5a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__13_getsockopt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__13_getsockopt,
        mod_consts.const_str_plain_getsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1efcfdf64d69789417faa55f097a087e,
#endif
        code_objects_cfba677859692d91e199cd1f2b265176,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        mod_consts.const_str_digest_e16d55f0c57c9d2974fbaf7fd755c774,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__14___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_81b25f7faa15143b49ea355de8aedf67,
#endif
        code_objects_e32a1bbb4067db56e5d2f44435177ba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__15_accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__15_accept,
        mod_consts.const_str_plain_accept,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_345a17104ad219e77d1181ffa8d69168,
#endif
        code_objects_550c72e0231256280872e6e2e6ad2e0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        mod_consts.const_str_digest_430b4f1e4998df5828d60c3993eec7a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__16_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__16_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89ce4fb1509f4a04d1f68d8069f0367c,
#endif
        code_objects_c55afeb3ba95c6ef2f7a6331969b4f02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        mod_consts.const_str_digest_2bc3de6b47f3278f284f6a4f3af28afa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors,
        mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18e4b69a415569f0d7c3f2ca115eec0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb1d52a9e0f0580e993918e862dcc23b,
#endif
        code_objects_52853af5c01474bb895ff637ab734d6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__3_send_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__3_send_all,
        mod_consts.const_str_plain_send_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e4d296cab9b751e6154d9e6ef074a426,
#endif
        code_objects_131361d757a784d5d9ecba9fd1f12188,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block,
        mod_consts.const_str_plain_wait_send_all_might_not_block,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_38bf03b3fcc6606482ec796134faeab4,
#endif
        code_objects_ebbe9c1bd2b9b7f9cecd7e53d3f67f08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__5_send_eof(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__5_send_eof,
        mod_consts.const_str_plain_send_eof,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b702d9c5be67839511a733414927b4f5,
#endif
        code_objects_c2f372beddbc9324dc5afdde5a68a3a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__6_receive_some(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__6_receive_some,
        mod_consts.const_str_plain_receive_some,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4e23ab525f6b4b62097048d692825dfb,
#endif
        code_objects_4a03d38c27d26b3416c9800d36f58b27,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__7_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_highlevel_socket$$$function__7_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_871027d0c1b4176118646eee2171c67f,
#endif
        code_objects_a5a4a647999c041421f6d989c843b511,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__8_setsockopt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_setsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc,
#endif
        code_objects_a3abb702527a2f502209c8cf7ac56a70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_highlevel_socket$$$function__9_setsockopt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_setsockopt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3e8f878bc40f4e15e24fb2706c8973cc,
#endif
        code_objects_b777c8a7ebee23c9a1d5030f76eca8f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_highlevel_socket,
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

static function_impl_code const function_table_trio$_highlevel_socket[] = {
impl_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors,
impl_trio$_highlevel_socket$$$function__2___init__,
impl_trio$_highlevel_socket$$$function__3_send_all,
impl_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block,
impl_trio$_highlevel_socket$$$function__5_send_eof,
impl_trio$_highlevel_socket$$$function__6_receive_some,
impl_trio$_highlevel_socket$$$function__7_aclose,
impl_trio$_highlevel_socket$$$function__10_setsockopt,
impl_trio$_highlevel_socket$$$function__13_getsockopt,
impl_trio$_highlevel_socket$$$function__14___init__,
impl_trio$_highlevel_socket$$$function__15_accept,
impl_trio$_highlevel_socket$$$function__16_aclose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_highlevel_socket);
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
        module_trio$_highlevel_socket,
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
        function_table_trio$_highlevel_socket,
        sizeof(function_table_trio$_highlevel_socket) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._highlevel_socket";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_highlevel_socket(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_highlevel_socket");

    // Store the module for future use.
    module_trio$_highlevel_socket = module;

    moduledict_trio$_highlevel_socket = MODULE_DICT(module_trio$_highlevel_socket);

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
        PRINT_STRING("trio$_highlevel_socket: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_highlevel_socket: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_highlevel_socket: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_socket" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_highlevel_socket\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_highlevel_socket,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_highlevel_socket,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_highlevel_socket,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_highlevel_socket);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_highlevel_socket);
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

        UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
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
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket;
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
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_trio$_highlevel_socket$$$class__1_SocketStream_55 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_trio$_highlevel_socket$$$class__2_SocketListener_359 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_highlevel_socket = MAKE_MODULE_FRAME(code_objects_0e216849974ae8753bbe74870b488c31, module_trio$_highlevel_socket);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_highlevel_socket$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_highlevel_socket$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_errno;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_errno, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_contextmanager_str_plain_suppress_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

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
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_contextmanager);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_8);
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
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_suppress,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_suppress);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_suppress, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_import_from_2__module = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
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
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 8;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_socket_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_socket,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_socket);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_tsocket, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_final_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 11;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_5 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_ConflictDetector,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ConflictDetector);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_final,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_final);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_final, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_6 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_HalfCloseableStream_str_plain_Listener_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 12;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_7 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_HalfCloseableStream,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HalfCloseableStream);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_HalfCloseableStream, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_8 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_Listener,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Listener);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_21 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_7 = (PyObject *)moduledict_trio$_highlevel_socket;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Buffer_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 25;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio$_highlevel_socket,
        mod_consts.const_str_plain_Buffer,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Buffer);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_Buffer, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_int_pos_65536;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_RECEIVE_SIZE, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_set_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_trio$_highlevel_socket$errno(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EBADF);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_assign_source_24 = PySet_New(NULL);
assert(tmp_assign_source_24);
tmp_res = PySet_Add(tmp_assign_source_24, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_set_element_1);
Py_DECREF(tmp_assign_source_24);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
tmp_expression_value_2 = module_var_accessor_trio$_highlevel_socket$errno(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_24);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ENOTSOCK);
if (tmp_set_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_24);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_24, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_24);
Py_DECREF(tmp_set_element_1);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
Py_DECREF(tmp_set_element_1);
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__closed_stream_errnos, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_1 = module_var_accessor_trio$_highlevel_socket$contextmanager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_highlevel_socket$$$function__1__translate_socket_errors_to_stream_errors(tstate, tmp_annotations_1);

frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 43;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_digest_ac3c9ebc8c3068aa5d977adc82178ad0, tmp_assign_source_25);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_trio$_highlevel_socket$HalfCloseableStream(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HalfCloseableStream);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_SocketStream;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 55;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_5;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_31;
}
branch_end_1:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_trio$_highlevel_socket$final(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_final);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_5;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_trio$_highlevel_socket$$$class__1_SocketStream_55 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7c857a70c4fc800d1f85b61e799391e6;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_db65971298fb89942fbe6eb7f9ee454f;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_SocketStream;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2 = MAKE_CLASS_FRAME(tstate, code_objects_1663d8ef430d83335ed392137589cc82, module_trio$_highlevel_socket, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_17e101f4310ebfa70a44c6e3032e16a0);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__2___init__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b6992c1efbaa4c4dfc85ae147f0378bf);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__3_send_all(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_send_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__4_wait_send_all_might_not_block(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_wait_send_all_might_not_block, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__5_send_eof(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_send_eof, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_6;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_5f989ddf79a25de84b5917624c5cff59);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__6_receive_some(tstate, tmp_defaults_1, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_receive_some, tmp_dictset_value);
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
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__7_aclose(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_8;
tmp_called_value_4 = PyObject_GetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_overload);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_trio$_highlevel_socket$overload(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_eb03664070e48af5add1ae62635ede19);

tmp_args_element_value_3 = MAKE_FUNCTION_trio$_highlevel_socket$$$function__8_setsockopt(tstate, tmp_annotations_8);

frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2->m_frame.f_lineno = 157;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_setsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_9;
tmp_called_value_5 = PyObject_GetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_overload);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_trio$_highlevel_socket$overload(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_031a92b41055f2b0f45a500a4814c8b2);

tmp_args_element_value_4 = MAKE_FUNCTION_trio$_highlevel_socket$$$function__9_setsockopt(tstate, tmp_annotations_9);

frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2->m_frame.f_lineno = 160;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_setsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_10;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_f42ec8632ee031441043b651847d612d);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__10_setsockopt(tstate, tmp_defaults_2, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_setsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_11;
tmp_called_value_6 = PyObject_GetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_overload);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_trio$_highlevel_socket$overload(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_859cc3377ef9dacd2dae9ee741b74c49);

tmp_args_element_value_5 = MAKE_FUNCTION_trio$_highlevel_socket$$$function__11_getsockopt(tstate, tmp_annotations_11);

frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2->m_frame.f_lineno = 188;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_getsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_12;
tmp_called_value_7 = PyObject_GetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_overload);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_trio$_highlevel_socket$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6d7f87383f17e12cc74fec5bed510084);

tmp_args_element_value_6 = MAKE_FUNCTION_trio$_highlevel_socket$$$function__12_getsockopt(tstate, tmp_annotations_12);

frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2->m_frame.f_lineno = 191;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_getsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_13;
tmp_defaults_3 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_5a320395ce301a72f8207637d37d2133);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__13_getsockopt(tstate, tmp_defaults_3, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain_getsockopt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_trio$_highlevel_socket$$$class__1_SocketStream_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_socket_str_plain__send_conflict_detector_tuple;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
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


exception_lineno = 55;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__1_SocketStream_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_SocketStream;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_trio$_highlevel_socket$$$class__1_SocketStream_55;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 55;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_2 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_trio$_highlevel_socket$$$class__1_SocketStream_55);
locals_trio$_highlevel_socket$$$class__1_SocketStream_55 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_highlevel_socket$$$class__1_SocketStream_55);
locals_trio$_highlevel_socket$$$class__1_SocketStream_55 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 55;
goto try_except_handler_5;
outline_result_2:;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 54;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream, tmp_assign_source_32);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = LIST_COPY(tstate, mod_consts.const_list_5c720171d4bcf38ed22a425c0e22b3d3_list);
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errno_names, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = PySet_New(NULL);
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain__ignorable_accept_errnos, tmp_assign_source_35);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_5d0fab3a1dece69bac9d0a3f85ea6ebb;
tmp_ass_subscribed_1 = module_var_accessor_trio$_highlevel_socket$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__ignorable_accept_errnos;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_trio$_highlevel_socket$_ignorable_accept_errno_names(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ignorable_accept_errno_names);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;

    goto frame_exception_exit_1;
}
tmp_assign_source_36 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_36;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_37 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 353;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_38 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_38);
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_trio$_highlevel_socket$suppress(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_suppress);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;

    goto try_except_handler_9;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 354;
tmp_assign_source_39 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_type_AttributeError_tuple);

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_9;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_9 = tmp_with_1__source;
tmp_called_value_10 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___enter__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_9;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 354;
tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_9;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_10 = tmp_with_1__source;
tmp_assign_source_41 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, const_str_plain___exit__);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_9;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_42;
tmp_assign_source_42 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_42;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
tmp_expression_value_11 = module_var_accessor_trio$_highlevel_socket$_ignorable_accept_errnos(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ignorable_accept_errnos);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;

    goto try_except_handler_11;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_add);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_11;
}
tmp_expression_value_12 = module_var_accessor_trio$_highlevel_socket$errno(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 355;

    goto try_except_handler_11;
}
tmp_name_value_9 = module_var_accessor_trio$_highlevel_socket$name(tstate);
if (unlikely(tmp_name_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_name);
}

if (tmp_name_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 355;

    goto try_except_handler_11;
}
tmp_args_element_value_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, NULL);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 355;

    goto try_except_handler_11;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 355;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_43;
tmp_assign_source_43 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_43;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_12 = tmp_with_1__exit;
tmp_args_element_value_8 = EXC_TYPE(tstate);
tmp_args_element_value_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_9); 
tmp_args_element_value_10 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_10 == NULL) {
    tmp_args_element_value_10 = Py_None;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_12;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_12;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket->m_frame)) {
        frame_frame_trio$_highlevel_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_12;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 354;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_highlevel_socket->m_frame)) {
        frame_frame_trio$_highlevel_socket->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_12;
branch_end_4:;
goto try_end_7;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_7:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_13 = tmp_with_1__exit;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 354;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_10);

exception_lineno = 354;

    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
try_end_8:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_14 = tmp_with_1__exit;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 354;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// End of try:
try_end_9:;
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
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_10;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
tmp_expression_value_13 = module_var_accessor_trio$_highlevel_socket$Listener(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_subscript_value_2 = module_var_accessor_trio$_highlevel_socket$SocketStream(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SocketStream);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SocketListener;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 359;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_13;
}
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 359;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 359;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_49;
}
branch_end_8:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_11;
tmp_called_value_16 = module_var_accessor_trio$_highlevel_socket$final(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_final);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;

    goto try_except_handler_13;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_trio$_highlevel_socket$$$class__2_SocketListener_359 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7c857a70c4fc800d1f85b61e799391e6;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_0465864ac183ebd698c056dd310f4153;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_SocketListener;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_359;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3 = MAKE_CLASS_FRAME(tstate, code_objects_1724f1df9ebcfcd4e831e0b2f33b5ac1, module_trio$_highlevel_socket, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3);
assert(Py_REFCNT(frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_17e101f4310ebfa70a44c6e3032e16a0);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__14___init__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_aebc2ba443dfc176ff5fc8361a5b15de);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__15_accept(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain_accept, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_highlevel_socket$$$function__16_aclose(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_trio$_highlevel_socket$$$class__2_SocketListener_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_15;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_socket_tuple;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_highlevel_socket$$$class__2_SocketListener_359, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
branch_no_10:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_SocketListener;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_trio$_highlevel_socket$$$class__2_SocketListener_359;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 359;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_15;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_51;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_11 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_11);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_trio$_highlevel_socket$$$class__2_SocketListener_359);
locals_trio$_highlevel_socket$$$class__2_SocketListener_359 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_highlevel_socket$$$class__2_SocketListener_359);
locals_trio$_highlevel_socket$$$class__2_SocketListener_359 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 359;
goto try_except_handler_13;
outline_result_4:;
frame_frame_trio$_highlevel_socket->m_frame.f_lineno = 358;
tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketListener, tmp_assign_source_50);
}
goto try_end_11;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_highlevel_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_highlevel_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_highlevel_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_highlevel_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_highlevel_socket", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._highlevel_socket" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_highlevel_socket);
    return module_trio$_highlevel_socket;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_highlevel_socket, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_highlevel_socket", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

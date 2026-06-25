/* Generated code for Python module 'h2$events'
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



/* The "module_h2$events" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h2$events;
PyDictObject *moduledict_h2$events;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_de92b878e901a62aedb46852b18696da;
PyObject *const_str_plain_stream_id;
PyObject *const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyObject *const_str_plain_headers;
PyObject *const_str_chr_62;
PyObject *const_str_digest_0a89c70b377cf7d403389160bc3e3a7b;
PyObject *const_str_digest_62b9cb23b04a97100bc77e91eaa8de8e;
PyObject *const_str_digest_e06ad176472a3358508d3c431c5da572;
PyObject *const_str_digest_96c5aabf8c9d6b705244d7d1c49121a8;
PyObject *const_str_plain_flow_controlled_length;
PyObject *const_str_plain_data;
PyObject *const_str_plain__bytes_representation;
PyObject *const_slice_none_int_pos_20_none;
PyObject *const_str_digest_b8980646f6bdae4088d25b503a59a9ea;
PyObject *const_str_digest_85eed28ccbd6739f29b67a53c93d9988;
PyObject *const_str_plain_delta;
PyObject *const_str_plain_changed_settings;
PyObject *const_str_plain_items;
PyObject *const_str_plain__setting_code_from_int;
PyObject *const_str_plain_old_settings;
PyObject *const_str_plain_ChangedSetting;
PyObject *const_str_plain_e;
PyObject *const_str_digest_52203b2d32bc9f68cd8ad60cb82a048a;
PyObject *const_str_digest_b393ee0b09d0c80ff0b5c5c9b81133fe;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_plain_values;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_e9e7b741ae7a536a367d5af41614ca1d;
PyObject *const_str_digest_50dd33030ac18e35cd558d1af8be4d34;
PyObject *const_str_plain_ping_data;
PyObject *const_str_digest_03d5427660d1e325af2654e92bd5fc31;
PyObject *const_str_digest_1098e0fecf4415d96156fac3c88eb4b1;
PyObject *const_str_digest_b961f7cf89d31ef454d404ffa617576d;
PyObject *const_str_digest_22d225f2bcb173376298d8611290805a;
PyObject *const_str_plain_error_code;
PyObject *const_str_digest_3c7c4f48f82aff0526ab82032e2d5ebf;
PyObject *const_str_plain_remote_reset;
PyObject *const_str_plain_pushed_stream_id;
PyObject *const_str_plain_parent_stream_id;
PyObject *const_str_digest_6aaf58d02166f0bfef06c6f4b70233f3;
PyObject *const_str_digest_fce6084381ed368c5147608b5c71f102;
PyObject *const_str_digest_3e3b8204226050741cf65d4ea044fd6d;
PyObject *const_str_digest_4aa21900d12464e734e05f58da2b9dfa;
PyObject *const_str_digest_48a002302e7c0dd1f266e0c54e1f7193;
PyObject *const_str_plain_weight;
PyObject *const_str_plain_depends_on;
PyObject *const_str_plain_exclusive;
PyObject *const_str_digest_5dfb3bc96dd0e107d46126a6fc6c9a7d;
PyObject *const_str_digest_eb0ecbde26094c7e056aaa1bdfc5de6e;
PyObject *const_str_digest_b0fbd02411607ed08fa6b07927235511;
PyObject *const_str_digest_812751476016fbd59b91ac43a2e96bf2;
PyObject *const_str_plain_last_stream_id;
PyObject *const_str_plain_additional_data;
PyObject *const_str_digest_3d098480272a83b988bb67ed80ba80a4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_field_value;
PyObject *const_str_digest_42692192ce485ac61e21428eb96db78f;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple;
PyObject *const_str_plain_binascii;
PyObject *const_str_plain_hexlify;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_digest_917afaaa5d45ad67fa0b5ef90179513e;
PyObject *const_str_digest_1bd7012efe6843a4ef89e24744b17383;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_settings;
PyObject *const_tuple_5a8cbf3dbe63303e7b46f0ce55b58ebc_tuple;
PyObject *const_str_plain_SettingCodes;
PyObject *const_str_plain_Settings;
PyObject *const_dict_79de1992aff8a71f7311f7b616e2145b;
PyObject *const_str_plain_kw_only;
PyObject *const_str_plain__LAZY_INIT;
PyObject *const_str_digest_60d39b746eebe83fae494903472878fd;
PyObject *const_str_digest_93b0b81487cb8171828671b6f88b1f1b;
PyObject *const_str_plain_Event;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_42;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_RequestReceived;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_3b563ffff4946cb0841ff86fe2cbc0cd;
PyObject *const_int_pos_49;
PyObject *const_str_digest_7d7f2cc97116bb64113181be2afd32f0;
PyObject *const_str_plain_stream_ended;
PyObject *const_str_digest_ab3da3b31c0842eb230e0fd334382511;
PyObject *const_str_plain_priority_updated;
PyObject *const_str_digest_a14a126185061f57b5bbbc9e0665ea5c;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_2912e0c3ed47d8a9732c517334da60af;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ResponseReceived;
PyObject *const_str_digest_34eefa115e7f96408212d24e345849a4;
PyObject *const_int_pos_96;
PyObject *const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e;
PyObject *const_str_plain_TrailersReceived;
PyObject *const_str_digest_48a1942e8d98887381ab25532619b684;
PyObject *const_int_pos_139;
PyObject *const_str_digest_b3d353b8b47cd0f5a72497fe00aca561;
PyObject *const_str_plain__HeadersSent;
PyObject *const_str_digest_a57df8818ff00cbeb4f3814eb11cab5a;
PyObject *const_int_pos_183;
PyObject *const_str_plain__ResponseSent;
PyObject *const_str_digest_e41af19fbf1bcfd908fb93cce89f82cf;
PyObject *const_int_pos_193;
PyObject *const_str_plain__RequestSent;
PyObject *const_str_digest_ac51bd91748b030515c094d34a5b9e88;
PyObject *const_int_pos_204;
PyObject *const_str_plain__TrailersSent;
PyObject *const_str_digest_1cf10b3946a32f92444dd0e117e43234;
PyObject *const_int_pos_215;
PyObject *const_str_plain__PushedRequestSent;
PyObject *const_str_digest_7bb4af565f5f176ec276d283b8fe366a;
PyObject *const_int_pos_228;
PyObject *const_str_plain_InformationalResponseReceived;
PyObject *const_str_digest_b0843f6caafda56208fba50759484418;
PyObject *const_int_pos_239;
PyObject *const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59;
PyObject *const_str_plain_DataReceived;
PyObject *const_str_digest_786af2494bb8a35510e964f47d5100e1;
PyObject *const_int_pos_282;
PyObject *const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d;
PyObject *const_str_plain_WindowUpdated;
PyObject *const_str_digest_28ace78883545299f20e1dcae5289ae4;
PyObject *const_int_pos_328;
PyObject *const_str_digest_cafe3cb83b3801d366577460b297b5d1;
PyObject *const_str_plain_RemoteSettingsChanged;
PyObject *const_str_digest_a2c6112240f5b5fc1539d9ad7d34804b;
PyObject *const_int_pos_352;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_f5064e10f3752da568cfb61e03955c3d;
PyObject *const_dict_067b206942708260a435ca3a69d422de;
PyObject *const_str_plain_from_settings;
PyObject *const_str_digest_7742f23684364f08f8aee88102f48c34;
PyObject *const_str_digest_b72b969c2453c9ab71bdd9c90f499057;
PyObject *const_tuple_str_plain_changed_settings_tuple;
PyObject *const_str_plain_PingReceived;
PyObject *const_str_digest_51823a7615f3dd310df20fc66a96f431;
PyObject *const_int_pos_407;
PyObject *const_str_digest_e8c4f59ab40bba3563e9f02e64431595;
PyObject *const_str_plain_PingAckReceived;
PyObject *const_str_digest_f1cefe6b70da5533b20e4529991a3221;
PyObject *const_int_pos_424;
PyObject *const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c;
PyObject *const_str_plain_StreamEnded;
PyObject *const_str_digest_523afa7f541d3d28501ac226f73e73f7;
PyObject *const_int_pos_444;
PyObject *const_str_digest_0be9214afcc653d496db43bad3065641;
PyObject *const_str_plain_StreamReset;
PyObject *const_str_digest_652d12b7e4c292d77c44861c7925faf5;
PyObject *const_int_pos_459;
PyObject *const_str_digest_f7cc717a0dc4fc92a34b10939905ab4d;
PyObject *const_str_plain_bool;
PyObject *const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535;
PyObject *const_str_plain_PushedStreamReceived;
PyObject *const_str_digest_cb9b5042932f06c5386f33bc4d6cee86;
PyObject *const_int_pos_489;
PyObject *const_str_digest_10d561cb9c231d010965cad851378d27;
PyObject *const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37;
PyObject *const_tuple_0eb899d202176d56444adc3fc7ffd4f1_tuple;
PyObject *const_str_plain_SettingsAcknowledged;
PyObject *const_str_digest_705527f9e9f68196ab57155f8414df25;
PyObject *const_int_pos_513;
PyObject *const_str_digest_5e9cbae59002ef627b87f668a9bbec5e;
PyObject *const_str_digest_de8df53095b8725bc3e41bfb345c2af1;
PyObject *const_str_plain_PriorityUpdated;
PyObject *const_str_digest_eab17eb3ec928097b6d3100d227ff88c;
PyObject *const_int_pos_532;
PyObject *const_str_digest_f137575693b8cab85def3047b1a47a8e;
PyObject *const_str_digest_b0857c0ec0083b3df36d195403df4c36;
PyObject *const_tuple_58473301b6228bc6959137917674927c_tuple;
PyObject *const_str_plain_ConnectionTerminated;
PyObject *const_str_digest_008efb5275cd3450e81b25fb171352ea;
PyObject *const_int_pos_566;
PyObject *const_str_digest_cd0ceba14af270da0c0a7c724440860c;
PyObject *const_str_digest_e96edc4c8040fb69d2b769ae318aa16c;
PyObject *const_tuple_09f7e29dfc03dca69635f82feb6de62e_tuple;
PyObject *const_str_plain_AlternativeServiceAvailable;
PyObject *const_str_digest_cc575cee702ff7a6b4881958670a6426;
PyObject *const_int_pos_600;
PyObject *const_str_digest_077309d4d3135e89ed7f6eb1431df73b;
PyObject *const_str_digest_e6fae044eb603bede5f9345415da5d8f;
PyObject *const_tuple_str_plain_origin_str_plain_field_value_tuple;
PyObject *const_str_plain_UnknownFrameReceived;
PyObject *const_str_digest_05ad07a345dd067c738ee95e89944dd8;
PyObject *const_int_pos_646;
PyObject *const_str_plain_Frame;
PyObject *const_str_plain_frame;
PyObject *const_str_angle_UnknownFrameReceived;
PyObject *const_str_digest_5b7b437c532ddac993c92be47638aab3;
PyObject *const_dict_419a42b1a25198e70b80fefdc3816fec;
PyObject *const_str_digest_e0fce0a28ed974103817894ec5ef57a7;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple;
PyObject *const_str_digest_baa84a9cd1712530015ffca6b753d274;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
PyObject *const_tuple_str_plain_data_tuple;
PyObject *const_tuple_c5cbb0b85cec54fa946dedacc02c76ef_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[210];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h2.events"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_de92b878e901a62aedb46852b18696da);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_id);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a89c70b377cf7d403389160bc3e3a7b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_62b9cb23b04a97100bc77e91eaa8de8e);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_e06ad176472a3358508d3c431c5da572);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_96c5aabf8c9d6b705244d7d1c49121a8);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_flow_controlled_length);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_representation);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_20_none);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8980646f6bdae4088d25b503a59a9ea);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_85eed28ccbd6739f29b67a53c93d9988);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_delta);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_changed_settings);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__setting_code_from_int);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_old_settings);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChangedSetting);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_e);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_52203b2d32bc9f68cd8ad60cb82a048a);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_b393ee0b09d0c80ff0b5c5c9b81133fe);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9e7b741ae7a536a367d5af41614ca1d);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_50dd33030ac18e35cd558d1af8be4d34);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ping_data);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_03d5427660d1e325af2654e92bd5fc31);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_1098e0fecf4415d96156fac3c88eb4b1);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_b961f7cf89d31ef454d404ffa617576d);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_22d225f2bcb173376298d8611290805a);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_error_code);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c7c4f48f82aff0526ab82032e2d5ebf);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_remote_reset);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_pushed_stream_id);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_parent_stream_id);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aaf58d02166f0bfef06c6f4b70233f3);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_fce6084381ed368c5147608b5c71f102);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e3b8204226050741cf65d4ea044fd6d);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_4aa21900d12464e734e05f58da2b9dfa);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_48a002302e7c0dd1f266e0c54e1f7193);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_weight);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_depends_on);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclusive);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_5dfb3bc96dd0e107d46126a6fc6c9a7d);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb0ecbde26094c7e056aaa1bdfc5de6e);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0fbd02411607ed08fa6b07927235511);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_812751476016fbd59b91ac43a2e96bf2);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_stream_id);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_additional_data);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d098480272a83b988bb67ed80ba80a4);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_value);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_42692192ce485ac61e21428eb96db78f);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_binascii);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_hexlify);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_917afaaa5d45ad67fa0b5ef90179513e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bd7012efe6843a4ef89e24744b17383);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_settings);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_5a8cbf3dbe63303e7b46f0ce55b58ebc_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_SettingCodes);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_Settings);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_kw_only);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__LAZY_INIT);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_93b0b81487cb8171828671b6f88b1f1b);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestReceived);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b563ffff4946cb0841ff86fe2cbc0cd);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_49);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_ended);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_priority_updated);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_2912e0c3ed47d8a9732c517334da60af);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReceived);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_34eefa115e7f96408212d24e345849a4);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_96);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_TrailersReceived);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_48a1942e8d98887381ab25532619b684);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_139);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3d353b8b47cd0f5a72497fe00aca561);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__HeadersSent);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_a57df8818ff00cbeb4f3814eb11cab5a);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_183);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__ResponseSent);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_e41af19fbf1bcfd908fb93cce89f82cf);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_193);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__RequestSent);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac51bd91748b030515c094d34a5b9e88);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_204);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__TrailersSent);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cf10b3946a32f92444dd0e117e43234);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_pos_215);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__PushedRequestSent);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bb4af565f5f176ec276d283b8fe366a);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_228);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponseReceived);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0843f6caafda56208fba50759484418);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_239);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataReceived);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_786af2494bb8a35510e964f47d5100e1);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_int_pos_282);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_WindowUpdated);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_28ace78883545299f20e1dcae5289ae4);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_328);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_cafe3cb83b3801d366577460b297b5d1);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteSettingsChanged);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2c6112240f5b5fc1539d9ad7d34804b);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_int_pos_352);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5064e10f3752da568cfb61e03955c3d);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_067b206942708260a435ca3a69d422de);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_settings);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_7742f23684364f08f8aee88102f48c34);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_b72b969c2453c9ab71bdd9c90f499057);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_changed_settings_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_PingReceived);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_51823a7615f3dd310df20fc66a96f431);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_407);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8c4f59ab40bba3563e9f02e64431595);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_PingAckReceived);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1cefe6b70da5533b20e4529991a3221);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_424);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamEnded);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_523afa7f541d3d28501ac226f73e73f7);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_444);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_0be9214afcc653d496db43bad3065641);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamReset);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_652d12b7e4c292d77c44861c7925faf5);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_459);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7cc717a0dc4fc92a34b10939905ab4d);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_PushedStreamReceived);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb9b5042932f06c5386f33bc4d6cee86);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_489);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_10d561cb9c231d010965cad851378d27);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_0eb899d202176d56444adc3fc7ffd4f1_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_SettingsAcknowledged);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_705527f9e9f68196ab57155f8414df25);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_513);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e9cbae59002ef627b87f668a9bbec5e);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_de8df53095b8725bc3e41bfb345c2af1);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_PriorityUpdated);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_eab17eb3ec928097b6d3100d227ff88c);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_532);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_f137575693b8cab85def3047b1a47a8e);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0857c0ec0083b3df36d195403df4c36);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_58473301b6228bc6959137917674927c_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionTerminated);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_008efb5275cd3450e81b25fb171352ea);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_566);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd0ceba14af270da0c0a7c724440860c);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_e96edc4c8040fb69d2b769ae318aa16c);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_09f7e29dfc03dca69635f82feb6de62e_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlternativeServiceAvailable);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc575cee702ff7a6b4881958670a6426);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_600);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_077309d4d3135e89ed7f6eb1431df73b);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6fae044eb603bede5f9345415da5d8f);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_field_value_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnknownFrameReceived);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_05ad07a345dd067c738ee95e89944dd8);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_int_pos_646);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_Frame);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_angle_UnknownFrameReceived);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b7b437c532ddac993c92be47638aab3);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_419a42b1a25198e70b80fefdc3816fec);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0fce0a28ed974103817894ec5ef57a7);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_baa84a9cd1712530015ffca6b753d274);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_c5cbb0b85cec54fa946dedacc02c76ef_tuple);
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
void checkModuleConstants_h2$events(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_de92b878e901a62aedb46852b18696da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de92b878e901a62aedb46852b18696da);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_id);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a89c70b377cf7d403389160bc3e3a7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a89c70b377cf7d403389160bc3e3a7b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_62b9cb23b04a97100bc77e91eaa8de8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62b9cb23b04a97100bc77e91eaa8de8e);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_e06ad176472a3358508d3c431c5da572));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e06ad176472a3358508d3c431c5da572);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_96c5aabf8c9d6b705244d7d1c49121a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96c5aabf8c9d6b705244d7d1c49121a8);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_flow_controlled_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flow_controlled_length);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__bytes_representation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bytes_representation);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_20_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_20_none);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8980646f6bdae4088d25b503a59a9ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8980646f6bdae4088d25b503a59a9ea);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_85eed28ccbd6739f29b67a53c93d9988));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85eed28ccbd6739f29b67a53c93d9988);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_delta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delta);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_changed_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_changed_settings);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__setting_code_from_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__setting_code_from_int);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_old_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_old_settings);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChangedSetting));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChangedSetting);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_e));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_e);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_52203b2d32bc9f68cd8ad60cb82a048a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52203b2d32bc9f68cd8ad60cb82a048a);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_b393ee0b09d0c80ff0b5c5c9b81133fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b393ee0b09d0c80ff0b5c5c9b81133fe);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9e7b741ae7a536a367d5af41614ca1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9e7b741ae7a536a367d5af41614ca1d);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_50dd33030ac18e35cd558d1af8be4d34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50dd33030ac18e35cd558d1af8be4d34);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ping_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ping_data);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_03d5427660d1e325af2654e92bd5fc31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03d5427660d1e325af2654e92bd5fc31);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_1098e0fecf4415d96156fac3c88eb4b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1098e0fecf4415d96156fac3c88eb4b1);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_b961f7cf89d31ef454d404ffa617576d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b961f7cf89d31ef454d404ffa617576d);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_22d225f2bcb173376298d8611290805a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22d225f2bcb173376298d8611290805a);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_error_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error_code);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c7c4f48f82aff0526ab82032e2d5ebf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c7c4f48f82aff0526ab82032e2d5ebf);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_remote_reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remote_reset);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_pushed_stream_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pushed_stream_id);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_parent_stream_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parent_stream_id);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aaf58d02166f0bfef06c6f4b70233f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6aaf58d02166f0bfef06c6f4b70233f3);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_fce6084381ed368c5147608b5c71f102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fce6084381ed368c5147608b5c71f102);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e3b8204226050741cf65d4ea044fd6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3e3b8204226050741cf65d4ea044fd6d);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_4aa21900d12464e734e05f58da2b9dfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4aa21900d12464e734e05f58da2b9dfa);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_48a002302e7c0dd1f266e0c54e1f7193));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48a002302e7c0dd1f266e0c54e1f7193);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_weight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weight);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_depends_on));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_depends_on);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclusive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclusive);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_5dfb3bc96dd0e107d46126a6fc6c9a7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5dfb3bc96dd0e107d46126a6fc6c9a7d);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb0ecbde26094c7e056aaa1bdfc5de6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb0ecbde26094c7e056aaa1bdfc5de6e);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0fbd02411607ed08fa6b07927235511));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0fbd02411607ed08fa6b07927235511);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_812751476016fbd59b91ac43a2e96bf2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_812751476016fbd59b91ac43a2e96bf2);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_stream_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_stream_id);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_additional_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_additional_data);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d098480272a83b988bb67ed80ba80a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d098480272a83b988bb67ed80ba80a4);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_value);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_42692192ce485ac61e21428eb96db78f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42692192ce485ac61e21428eb96db78f);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_binascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_binascii);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_hexlify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hexlify);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_917afaaa5d45ad67fa0b5ef90179513e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_917afaaa5d45ad67fa0b5ef90179513e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bd7012efe6843a4ef89e24744b17383));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bd7012efe6843a4ef89e24744b17383);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_settings);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_5a8cbf3dbe63303e7b46f0ce55b58ebc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5a8cbf3dbe63303e7b46f0ce55b58ebc_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_SettingCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SettingCodes);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_Settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Settings);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_kw_only));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kw_only);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__LAZY_INIT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LAZY_INIT);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_93b0b81487cb8171828671b6f88b1f1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93b0b81487cb8171828671b6f88b1f1b);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_int_pos_42));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_42);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestReceived);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b563ffff4946cb0841ff86fe2cbc0cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b563ffff4946cb0841ff86fe2cbc0cd);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_49));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_49);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_ended));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_ended);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_priority_updated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_priority_updated);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_2912e0c3ed47d8a9732c517334da60af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2912e0c3ed47d8a9732c517334da60af);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReceived);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_34eefa115e7f96408212d24e345849a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34eefa115e7f96408212d24e345849a4);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_96));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_96);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_TrailersReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TrailersReceived);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_48a1942e8d98887381ab25532619b684));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48a1942e8d98887381ab25532619b684);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_139));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_139);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3d353b8b47cd0f5a72497fe00aca561));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3d353b8b47cd0f5a72497fe00aca561);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__HeadersSent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HeadersSent);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_a57df8818ff00cbeb4f3814eb11cab5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a57df8818ff00cbeb4f3814eb11cab5a);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_183));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_183);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__ResponseSent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ResponseSent);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_e41af19fbf1bcfd908fb93cce89f82cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e41af19fbf1bcfd908fb93cce89f82cf);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_193));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_193);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__RequestSent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__RequestSent);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac51bd91748b030515c094d34a5b9e88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac51bd91748b030515c094d34a5b9e88);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_204));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_204);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__TrailersSent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TrailersSent);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cf10b3946a32f92444dd0e117e43234));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cf10b3946a32f92444dd0e117e43234);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_pos_215));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_215);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__PushedRequestSent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PushedRequestSent);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bb4af565f5f176ec276d283b8fe366a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bb4af565f5f176ec276d283b8fe366a);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_228));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_228);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_InformationalResponseReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InformationalResponseReceived);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0843f6caafda56208fba50759484418));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0843f6caafda56208fba50759484418);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_239));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_239);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataReceived);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_786af2494bb8a35510e964f47d5100e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_786af2494bb8a35510e964f47d5100e1);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_int_pos_282));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_282);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_WindowUpdated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WindowUpdated);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_28ace78883545299f20e1dcae5289ae4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28ace78883545299f20e1dcae5289ae4);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_328));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_328);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_cafe3cb83b3801d366577460b297b5d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cafe3cb83b3801d366577460b297b5d1);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_RemoteSettingsChanged));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RemoteSettingsChanged);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2c6112240f5b5fc1539d9ad7d34804b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2c6112240f5b5fc1539d9ad7d34804b);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_int_pos_352));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_352);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5064e10f3752da568cfb61e03955c3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5064e10f3752da568cfb61e03955c3d);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_067b206942708260a435ca3a69d422de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_067b206942708260a435ca3a69d422de);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_settings);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_7742f23684364f08f8aee88102f48c34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7742f23684364f08f8aee88102f48c34);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_b72b969c2453c9ab71bdd9c90f499057));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b72b969c2453c9ab71bdd9c90f499057);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_changed_settings_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_changed_settings_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_PingReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PingReceived);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_51823a7615f3dd310df20fc66a96f431));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51823a7615f3dd310df20fc66a96f431);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_407));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_407);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8c4f59ab40bba3563e9f02e64431595));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8c4f59ab40bba3563e9f02e64431595);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_PingAckReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PingAckReceived);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1cefe6b70da5533b20e4529991a3221));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1cefe6b70da5533b20e4529991a3221);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_424));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_424);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamEnded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamEnded);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_523afa7f541d3d28501ac226f73e73f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_523afa7f541d3d28501ac226f73e73f7);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_444));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_444);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_0be9214afcc653d496db43bad3065641));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0be9214afcc653d496db43bad3065641);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamReset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StreamReset);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_652d12b7e4c292d77c44861c7925faf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_652d12b7e4c292d77c44861c7925faf5);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_459));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_459);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7cc717a0dc4fc92a34b10939905ab4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7cc717a0dc4fc92a34b10939905ab4d);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_PushedStreamReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PushedStreamReceived);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb9b5042932f06c5386f33bc4d6cee86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb9b5042932f06c5386f33bc4d6cee86);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_489));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_489);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_10d561cb9c231d010965cad851378d27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10d561cb9c231d010965cad851378d27);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_0eb899d202176d56444adc3fc7ffd4f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0eb899d202176d56444adc3fc7ffd4f1_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_SettingsAcknowledged));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SettingsAcknowledged);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_705527f9e9f68196ab57155f8414df25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_705527f9e9f68196ab57155f8414df25);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_513));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_513);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e9cbae59002ef627b87f668a9bbec5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e9cbae59002ef627b87f668a9bbec5e);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_de8df53095b8725bc3e41bfb345c2af1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de8df53095b8725bc3e41bfb345c2af1);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_PriorityUpdated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PriorityUpdated);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_eab17eb3ec928097b6d3100d227ff88c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eab17eb3ec928097b6d3100d227ff88c);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_532));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_532);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_f137575693b8cab85def3047b1a47a8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f137575693b8cab85def3047b1a47a8e);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0857c0ec0083b3df36d195403df4c36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0857c0ec0083b3df36d195403df4c36);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_58473301b6228bc6959137917674927c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_58473301b6228bc6959137917674927c_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionTerminated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionTerminated);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_008efb5275cd3450e81b25fb171352ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_008efb5275cd3450e81b25fb171352ea);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_566));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_566);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd0ceba14af270da0c0a7c724440860c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd0ceba14af270da0c0a7c724440860c);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_e96edc4c8040fb69d2b769ae318aa16c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e96edc4c8040fb69d2b769ae318aa16c);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_09f7e29dfc03dca69635f82feb6de62e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_09f7e29dfc03dca69635f82feb6de62e_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlternativeServiceAvailable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AlternativeServiceAvailable);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc575cee702ff7a6b4881958670a6426));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc575cee702ff7a6b4881958670a6426);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_600));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_600);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_077309d4d3135e89ed7f6eb1431df73b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_077309d4d3135e89ed7f6eb1431df73b);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6fae044eb603bede5f9345415da5d8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6fae044eb603bede5f9345415da5d8f);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_origin_str_plain_field_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_origin_str_plain_field_value_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnknownFrameReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnknownFrameReceived);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_05ad07a345dd067c738ee95e89944dd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05ad07a345dd067c738ee95e89944dd8);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_int_pos_646));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_646);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_Frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Frame);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frame);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_angle_UnknownFrameReceived));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_UnknownFrameReceived);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b7b437c532ddac993c92be47638aab3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b7b437c532ddac993c92be47638aab3);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_419a42b1a25198e70b80fefdc3816fec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_419a42b1a25198e70b80fefdc3816fec);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0fce0a28ed974103817894ec5ef57a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0fce0a28ed974103817894ec5ef57a7);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_baa84a9cd1712530015ffca6b753d274));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_baa84a9cd1712530015ffca6b753d274);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_s_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_c5cbb0b85cec54fa946dedacc02c76ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5cbb0b85cec54fa946dedacc02c76ef_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_h2$events$ChangedSetting(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ChangedSetting);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChangedSetting);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChangedSetting, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChangedSetting);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChangedSetting, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ChangedSetting);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ChangedSetting);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ChangedSetting);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$Event(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$_HeadersSent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__HeadersSent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HeadersSent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HeadersSent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HeadersSent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HeadersSent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__HeadersSent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__HeadersSent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HeadersSent);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$_LAZY_INIT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__LAZY_INIT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LAZY_INIT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LAZY_INIT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LAZY_INIT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LAZY_INIT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__LAZY_INIT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__LAZY_INIT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LAZY_INIT);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$_bytes_representation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__bytes_representation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bytes_representation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bytes_representation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__bytes_representation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__bytes_representation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__bytes_representation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__bytes_representation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__bytes_representation);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$_setting_code_from_int(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__setting_code_from_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setting_code_from_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setting_code_from_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setting_code_from_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setting_code_from_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__setting_code_from_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__setting_code_from_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__setting_code_from_int);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$binascii(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_h2$events$kw_only(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h2$events->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h2$events->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_kw_only);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h2$events->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_kw_only);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_kw_only, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_kw_only);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_kw_only, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_kw_only);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_kw_only);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_kw_only);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b7071a0ff421030a31fea9af045a6936;
static PyCodeObject *code_objects_7f2a83de6c2301c83aca10e5289e21c5;
static PyCodeObject *code_objects_c1e7ad2e77e8cf1962eb863ba23e4c5f;
static PyCodeObject *code_objects_a1b053b205970777f3adec545b3bccf2;
static PyCodeObject *code_objects_3436398e35d748d7760de3ce53e5dac9;
static PyCodeObject *code_objects_9605845a8fc5bd4b065e15f8e29b8ea2;
static PyCodeObject *code_objects_7a0235cb0dd9a7543e3fa11efade42e2;
static PyCodeObject *code_objects_5caebc52412309a5d1453c1f22497a30;
static PyCodeObject *code_objects_b4531cd2288f812f675c464140b834fa;
static PyCodeObject *code_objects_5b0fca5028656c316f63db2ca951a5df;
static PyCodeObject *code_objects_14224cfcdca4503b6541f1c0f57fa4c6;
static PyCodeObject *code_objects_d1f47593d780fa62b3719c6b2fb82cb4;
static PyCodeObject *code_objects_ebbb378308bc911e0cd0f1a3f25c351e;
static PyCodeObject *code_objects_7e9c1eeea6ac6f553c9f69a0b5265a04;
static PyCodeObject *code_objects_789f2b72de3a50414ada6bf008857e38;
static PyCodeObject *code_objects_12a585cc99676e9fe6806bff98ed987c;
static PyCodeObject *code_objects_9b35ddbd93cc8dd0690bbb884b5bdbc4;
static PyCodeObject *code_objects_8db8113937e1c27c14b970b6d41290d4;
static PyCodeObject *code_objects_50caca969e2e4d5485e83aa61b3550a2;
static PyCodeObject *code_objects_c1e9cca6ebef656fb8f461d3726d9e0f;
static PyCodeObject *code_objects_29e5f47d573eba2e9b6dacf9d4dd322c;
static PyCodeObject *code_objects_f7fbb57c0d2b8bb0367f2dfdc5b86d53;
static PyCodeObject *code_objects_958f1049c58e976f5db1a362348e810f;
static PyCodeObject *code_objects_75f45a20700d06f7051e88279428c26c;
static PyCodeObject *code_objects_2f40bff83e4ba43733f0ee66e296f179;
static PyCodeObject *code_objects_3d487355d26fbb366062c28dbbd98d9f;
static PyCodeObject *code_objects_5c890f9aa58af53e5a6b264217aa12cd;
static PyCodeObject *code_objects_58128e184adde2f7c76e742bbdb9cf6b;
static PyCodeObject *code_objects_a171e8b169054fce2ee4fb4786e20859;
static PyCodeObject *code_objects_e489eeb663d1a1e2581c0f29c2afa455;
static PyCodeObject *code_objects_4fd4943229611e50e90842a96e40486f;
static PyCodeObject *code_objects_c22179f1f4b67123b61139ac1a685671;
static PyCodeObject *code_objects_bf32751cf45b12ea31d877e4c68fc5d1;
static PyCodeObject *code_objects_8cef29aeb875032ab04d4612f9862e75;
static PyCodeObject *code_objects_afc8742f76bd02468fbc0c3768b98db6;
static PyCodeObject *code_objects_115449ceed7832daf731820ac36ab0e9;
static PyCodeObject *code_objects_1ca3852215217d4e5150d409cc1113e0;
static PyCodeObject *code_objects_eea69f0fb2505e334d13e6969de4b68a;
static PyCodeObject *code_objects_7339fdfb0a8746213bf7395466d3d13f;
static PyCodeObject *code_objects_a4888d2b8713e0833ab56cf1e313ad9d;
static PyCodeObject *code_objects_1bd1614129a36047202a113decd88f43;
static PyCodeObject *code_objects_f798b2a65738e6f4909da3f014203eb3;
static PyCodeObject *code_objects_f823661c18e878b509cba072a46331b5;
static PyCodeObject *code_objects_1eed5940b7ec4cb34fd4cd9fb8a92999;
static PyCodeObject *code_objects_550e06e6df34db7e1ea98eb5740d95ee;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e0fce0a28ed974103817894ec5ef57a7); CHECK_OBJECT(module_filename_obj);
code_objects_b7071a0ff421030a31fea9af045a6936 = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_e9e7b741ae7a536a367d5af41614ca1d, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple, NULL, 1, 0, 0);
code_objects_7f2a83de6c2301c83aca10e5289e21c5 = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_48a002302e7c0dd1f266e0c54e1f7193, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_cs_tuple, NULL, 1, 0, 0);
code_objects_c1e7ad2e77e8cf1962eb863ba23e4c5f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_baa84a9cd1712530015ffca6b753d274, mod_consts.const_str_digest_baa84a9cd1712530015ffca6b753d274, NULL, NULL, 0, 0, 0);
code_objects_a1b053b205970777f3adec545b3bccf2 = MAKE_CODE_OBJECT(module_filename_obj, 600, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AlternativeServiceAvailable, mod_consts.const_str_plain_AlternativeServiceAvailable, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3436398e35d748d7760de3ce53e5dac9 = MAKE_CODE_OBJECT(module_filename_obj, 566, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConnectionTerminated, mod_consts.const_str_plain_ConnectionTerminated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9605845a8fc5bd4b065e15f8e29b8ea2 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DataReceived, mod_consts.const_str_plain_DataReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7a0235cb0dd9a7543e3fa11efade42e2 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InformationalResponseReceived, mod_consts.const_str_plain_InformationalResponseReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5caebc52412309a5d1453c1f22497a30 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PingAckReceived, mod_consts.const_str_plain_PingAckReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b4531cd2288f812f675c464140b834fa = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PingReceived, mod_consts.const_str_plain_PingReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5b0fca5028656c316f63db2ca951a5df = MAKE_CODE_OBJECT(module_filename_obj, 532, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PriorityUpdated, mod_consts.const_str_plain_PriorityUpdated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_14224cfcdca4503b6541f1c0f57fa4c6 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PushedStreamReceived, mod_consts.const_str_plain_PushedStreamReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d1f47593d780fa62b3719c6b2fb82cb4 = MAKE_CODE_OBJECT(module_filename_obj, 352, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RemoteSettingsChanged, mod_consts.const_str_plain_RemoteSettingsChanged, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ebbb378308bc911e0cd0f1a3f25c351e = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestReceived, mod_consts.const_str_plain_RequestReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7e9c1eeea6ac6f553c9f69a0b5265a04 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ResponseReceived, mod_consts.const_str_plain_ResponseReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_789f2b72de3a50414ada6bf008857e38 = MAKE_CODE_OBJECT(module_filename_obj, 513, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SettingsAcknowledged, mod_consts.const_str_plain_SettingsAcknowledged, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_12a585cc99676e9fe6806bff98ed987c = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StreamEnded, mod_consts.const_str_plain_StreamEnded, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9b35ddbd93cc8dd0690bbb884b5bdbc4 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StreamReset, mod_consts.const_str_plain_StreamReset, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8db8113937e1c27c14b970b6d41290d4 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TrailersReceived, mod_consts.const_str_plain_TrailersReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_50caca969e2e4d5485e83aa61b3550a2 = MAKE_CODE_OBJECT(module_filename_obj, 646, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_UnknownFrameReceived, mod_consts.const_str_plain_UnknownFrameReceived, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c1e9cca6ebef656fb8f461d3726d9e0f = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WindowUpdated, mod_consts.const_str_plain_WindowUpdated, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_29e5f47d573eba2e9b6dacf9d4dd322c = MAKE_CODE_OBJECT(module_filename_obj, 621, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_077309d4d3135e89ed7f6eb1431df73b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f7fbb57c0d2b8bb0367f2dfdc5b86d53 = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cd0ceba14af270da0c0a7c724440860c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_958f1049c58e976f5db1a362348e810f = MAKE_CODE_OBJECT(module_filename_obj, 543, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f137575693b8cab85def3047b1a47a8e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_75f45a20700d06f7051e88279428c26c = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_10d561cb9c231d010965cad851378d27, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2f40bff83e4ba43733f0ee66e296f179 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f5064e10f3752da568cfb61e03955c3d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3d487355d26fbb366062c28dbbd98d9f = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_5e9cbae59002ef627b87f668a9bbec5e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5c890f9aa58af53e5a6b264217aa12cd = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_e6fae044eb603bede5f9345415da5d8f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_58128e184adde2f7c76e742bbdb9cf6b = MAKE_CODE_OBJECT(module_filename_obj, 587, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_e96edc4c8040fb69d2b769ae318aa16c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a171e8b169054fce2ee4fb4786e20859 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e489eeb663d1a1e2581c0f29c2afa455 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4fd4943229611e50e90842a96e40486f = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c22179f1f4b67123b61139ac1a685671 = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_e8c4f59ab40bba3563e9f02e64431595, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bf32751cf45b12ea31d877e4c68fc5d1 = MAKE_CODE_OBJECT(module_filename_obj, 559, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_b0857c0ec0083b3df36d195403df4c36, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8cef29aeb875032ab04d4612f9862e75 = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_afc8742f76bd02468fbc0c3768b98db6 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_b72b969c2453c9ab71bdd9c90f499057, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_115449ceed7832daf731820ac36ab0e9 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_2912e0c3ed47d8a9732c517334da60af, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1ca3852215217d4e5150d409cc1113e0 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eea69f0fb2505e334d13e6969de4b68a = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_de8df53095b8725bc3e41bfb345c2af1, mod_consts.const_tuple_str_plain_self_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_7339fdfb0a8746213bf7395466d3d13f = MAKE_CODE_OBJECT(module_filename_obj, 454, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_0be9214afcc653d496db43bad3065641, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a4888d2b8713e0833ab56cf1e313ad9d = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1bd1614129a36047202a113decd88f43 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_b3d353b8b47cd0f5a72497fe00aca561, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f798b2a65738e6f4909da3f014203eb3 = MAKE_CODE_OBJECT(module_filename_obj, 663, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_5b7b437c532ddac993c92be47638aab3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f823661c18e878b509cba072a46331b5 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_cafe3cb83b3801d366577460b297b5d1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1eed5940b7ec4cb34fd4cd9fb8a92999 = MAKE_CODE_OBJECT(module_filename_obj, 667, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__bytes_representation, mod_consts.const_str_plain__bytes_representation, mod_consts.const_tuple_str_plain_data_tuple, NULL, 1, 0, 0);
code_objects_550e06e6df34db7e1ea98eb5740d95ee = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_settings, mod_consts.const_str_digest_7742f23684364f08f8aee88102f48c34, mod_consts.const_tuple_c5cbb0b85cec54fa946dedacc02c76ef_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_h2$events$$$function__9___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_h2$events$$$function__17___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h2$events$$$function__10___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__11___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__12___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__14___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__16___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__17___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__18___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__19___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__1___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__20___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__21___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__22___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__24___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__25__bytes_representation(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__3___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__4___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__5___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__6___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__7___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__8_from_settings(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_h2$events$$$function__9___repr__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_h2$events$$$function__1___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__1___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__1___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__1___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__1___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__1___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__1___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_115449ceed7832daf731820ac36ab0e9, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__1___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__1___repr__ = cache_frame_frame_h2$events$$$function__1___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__1___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__1___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_de92b878e901a62aedb46852b18696da;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__1___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__1___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__1___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__1___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__1___repr__ == cache_frame_frame_h2$events$$$function__1___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__1___repr__);
    cache_frame_frame_h2$events$$$function__1___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__1___repr__);

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


static PyObject *impl_h2$events$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1ca3852215217d4e5150d409cc1113e0, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__2___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__2___repr__ = cache_frame_frame_h2$events$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__2___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_0a89c70b377cf7d403389160bc3e3a7b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__2___repr__ == cache_frame_frame_h2$events$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__2___repr__);
    cache_frame_frame_h2$events$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__2___repr__);

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


static PyObject *impl_h2$events$$$function__3___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__3___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__3___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__3___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__3___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__3___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__3___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1bd1614129a36047202a113decd88f43, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__3___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__3___repr__ = cache_frame_frame_h2$events$$$function__3___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__3___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__3___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_62b9cb23b04a97100bc77e91eaa8de8e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__3___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__3___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__3___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__3___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__3___repr__ == cache_frame_frame_h2$events$$$function__3___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__3___repr__);
    cache_frame_frame_h2$events$$$function__3___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__3___repr__);

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


static PyObject *impl_h2$events$$$function__4___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__4___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__4___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__4___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__4___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__4___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__4___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e489eeb663d1a1e2581c0f29c2afa455, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__4___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__4___repr__ = cache_frame_frame_h2$events$$$function__4___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__4___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__4___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_e06ad176472a3358508d3c431c5da572;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__4___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__4___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__4___repr__ == cache_frame_frame_h2$events$$$function__4___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__4___repr__);
    cache_frame_frame_h2$events$$$function__4___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__4___repr__);

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


static PyObject *impl_h2$events$$$function__5___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__5___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__5___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__5___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__5___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__5___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__5___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a171e8b169054fce2ee4fb4786e20859, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__5___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__5___repr__ = cache_frame_frame_h2$events$$$function__5___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__5___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__5___repr__) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_3_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_96c5aabf8c9d6b705244d7d1c49121a8;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_flow_controlled_length);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 321;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_data);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_h2$events$_bytes_representation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bytes_representation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_20_none;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__5___repr__->m_frame.f_lineno = 322;
tmp_kw_call_arg_value_3_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 322;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_arg_value_3_1 = const_str_empty;
Py_INCREF(tmp_kw_call_arg_value_3_1);
condexpr_end_1:;
frame_frame_h2$events$$$function__5___repr__->m_frame.f_lineno = 317;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__5___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__5___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__5___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__5___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__5___repr__ == cache_frame_frame_h2$events$$$function__5___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__5___repr__);
    cache_frame_frame_h2$events$$$function__5___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__5___repr__);

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


static PyObject *impl_h2$events$$$function__6___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__6___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__6___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__6___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__6___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__6___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__6___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f823661c18e878b509cba072a46331b5, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__6___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__6___repr__ = cache_frame_frame_h2$events$$$function__6___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__6___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__6___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_b8980646f6bdae4088d25b503a59a9ea;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_85eed28ccbd6739f29b67a53c93d9988;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_delta);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__6___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__6___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__6___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__6___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__6___repr__ == cache_frame_frame_h2$events$$$function__6___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__6___repr__);
    cache_frame_frame_h2$events$$$function__6___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__6___repr__);

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


static PyObject *impl_h2$events$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2f40bff83e4ba43733f0ee66e296f179, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__7___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__7___init__ = cache_frame_frame_h2$events$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__7___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_changed_settings, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__7___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__7___init__ == cache_frame_frame_h2$events$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__7___init__);
    cache_frame_frame_h2$events$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__7___init__);

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


static PyObject *impl_h2$events$$$function__8_from_settings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_old_settings = python_pars[1];
PyObject *par_new_settings = python_pars[2];
PyObject *var_e = NULL;
PyObject *var_setting = NULL;
PyObject *var_new_value = NULL;
PyObject *var_s = NULL;
PyObject *var_original_value = NULL;
PyObject *var_change = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__8_from_settings;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__8_from_settings = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__8_from_settings)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__8_from_settings);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__8_from_settings == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__8_from_settings = MAKE_FUNCTION_FRAME(tstate, code_objects_550e06e6df34db7e1ea98eb5740d95ee, module_h2$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__8_from_settings->m_type_description == NULL);
frame_frame_h2$events$$$function__8_from_settings = cache_frame_frame_h2$events$$$function__8_from_settings;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__8_from_settings);
assert(Py_REFCNT(frame_frame_h2$events$$$function__8_from_settings) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(par_cls);
tmp_called_value_1 = par_cls;
frame_frame_h2$events$$$function__8_from_settings->m_frame.f_lineno = 391;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_e == NULL);
var_e = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_new_settings);
tmp_expression_value_1 = par_new_settings;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__8_from_settings->m_frame.f_lineno = 392;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 392;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_setting;
    var_setting = tmp_assign_source_7;
    Py_INCREF(var_setting);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_new_value;
    var_new_value = tmp_assign_source_8;
    Py_INCREF(var_new_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_h2$events$_setting_code_from_int(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__setting_code_from_int);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_setting);
tmp_args_element_value_1 = var_setting;
frame_frame_h2$events$$$function__8_from_settings->m_frame.f_lineno = 393;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_s;
    var_s = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
if (par_old_settings == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_old_settings);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 394;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_old_settings;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_2 = var_s;
frame_frame_h2$events$$$function__8_from_settings->m_frame.f_lineno = 394;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_original_value;
    var_original_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_h2$events$ChangedSetting(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ChangedSetting);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_3 = var_s;
CHECK_OBJECT(var_original_value);
tmp_args_element_value_4 = var_original_value;
CHECK_OBJECT(var_new_value);
tmp_args_element_value_5 = var_new_value;
frame_frame_h2$events$$$function__8_from_settings->m_frame.f_lineno = 395;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_change;
    var_change = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_change);
tmp_ass_subvalue_1 = var_change;
if (var_e == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_e);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 396;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = var_e;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_changed_settings);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_s);
tmp_ass_subscript_1 = var_s;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_e == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_e);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 398;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_e;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__8_from_settings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__8_from_settings->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__8_from_settings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__8_from_settings,
    type_description_1,
    par_cls,
    par_old_settings,
    par_new_settings,
    var_e,
    var_setting,
    var_new_value,
    var_s,
    var_original_value,
    var_change
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__8_from_settings == cache_frame_frame_h2$events$$$function__8_from_settings) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__8_from_settings);
    cache_frame_frame_h2$events$$$function__8_from_settings = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__8_from_settings);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_setting);
var_setting = NULL;
Py_XDECREF(var_new_value);
var_new_value = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_original_value);
var_original_value = NULL;
Py_XDECREF(var_change);
var_change = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_setting);
var_setting = NULL;
Py_XDECREF(var_new_value);
var_new_value = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_original_value);
var_original_value = NULL;
Py_XDECREF(var_change);
var_change = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_old_settings);
Py_DECREF(par_old_settings);
CHECK_OBJECT(par_new_settings);
Py_DECREF(par_new_settings);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_old_settings);
Py_DECREF(par_old_settings);
CHECK_OBJECT(par_new_settings);
Py_DECREF(par_new_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_h2$events$$$function__9___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__9___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__9___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__9___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__9___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__9___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__9___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_afc8742f76bd02468fbc0c3768b98db6, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__9___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__9___repr__ = cache_frame_frame_h2$events$$$function__9___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__9___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__9___repr__) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_b393ee0b09d0c80ff0b5c5c9b81133fe;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_changed_settings);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__9___repr__->m_frame.f_lineno = 402;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_h2$events$$$function__9___repr__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_kw_call_arg_value_1_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__9___repr__->m_frame.f_lineno = 401;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__9___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__9___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__9___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__9___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__9___repr__ == cache_frame_frame_h2$events$$$function__9___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__9___repr__);
    cache_frame_frame_h2$events$$$function__9___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__9___repr__);

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



#if 1
struct h2$events$$$function__9___repr__$$$genexpr__1_genexpr_locals {
PyObject *var_cs;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *h2$events$$$function__9___repr__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct h2$events$$$function__9___repr__$$$genexpr__1_genexpr_locals *generator_heap = (struct h2$events$$$function__9___repr__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cs = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b7071a0ff421030a31fea9af045a6936, module_h2$events, sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 402;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_cs;
    generator_heap->var_cs = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_cs);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cs);
tmp_operand_value_1 = generator_heap->var_cs;
tmp_expression_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 402;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_operand_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_operand_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 402;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 402;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
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
    NULL,
    generator_heap->var_cs
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_cs);
generator_heap->var_cs = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_cs);
generator_heap->var_cs = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h2$events$$$function__9___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h2$events$$$function__9___repr__$$$genexpr__1_genexpr_context,
        module_h2$events,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e9e7b741ae7a536a367d5af41614ca1d,
#endif
        code_objects_b7071a0ff421030a31fea9af045a6936,
        closure,
        1,
#if 1
        sizeof(struct h2$events$$$function__9___repr__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h2$events$$$function__10___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__10___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__10___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__10___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__10___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__10___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__10___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c22179f1f4b67123b61139ac1a685671, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__10___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__10___repr__ = cache_frame_frame_h2$events$$$function__10___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__10___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__10___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_50dd33030ac18e35cd558d1af8be4d34;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_h2$events$_bytes_representation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bytes_representation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ping_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
frame_frame_h2$events$$$function__10___repr__->m_frame.f_lineno = 420;
tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__10___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__10___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__10___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__10___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__10___repr__ == cache_frame_frame_h2$events$$$function__10___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__10___repr__);
    cache_frame_frame_h2$events$$$function__10___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__10___repr__);

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


static PyObject *impl_h2$events$$$function__11___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__11___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__11___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__11___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__11___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__11___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__11___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4fd4943229611e50e90842a96e40486f, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__11___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__11___repr__ = cache_frame_frame_h2$events$$$function__11___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__11___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__11___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_03d5427660d1e325af2654e92bd5fc31;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_h2$events$_bytes_representation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bytes_representation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ping_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
frame_frame_h2$events$$$function__11___repr__->m_frame.f_lineno = 440;
tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__11___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__11___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__11___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__11___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__11___repr__ == cache_frame_frame_h2$events$$$function__11___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__11___repr__);
    cache_frame_frame_h2$events$$$function__11___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__11___repr__);

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


static PyObject *impl_h2$events$$$function__12___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__12___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__12___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__12___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__12___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__12___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__12___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7339fdfb0a8746213bf7395466d3d13f, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__12___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__12___repr__ = cache_frame_frame_h2$events$$$function__12___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__12___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__12___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_1098e0fecf4415d96156fac3c88eb4b1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__12___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__12___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__12___repr__ == cache_frame_frame_h2$events$$$function__12___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__12___repr__);
    cache_frame_frame_h2$events$$$function__12___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__12___repr__);

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


static PyObject *impl_h2$events$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__13___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a4888d2b8713e0833ab56cf1e313ad9d, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__13___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__13___repr__ = cache_frame_frame_h2$events$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__13___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_b961f7cf89d31ef454d404ffa617576d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_22d225f2bcb173376298d8611290805a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_error_code);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3c7c4f48f82aff0526ab82032e2d5ebf;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_remote_reset);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__13___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__13___repr__ == cache_frame_frame_h2$events$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__13___repr__);
    cache_frame_frame_h2$events$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__13___repr__);

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


static PyObject *impl_h2$events$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_75f45a20700d06f7051e88279428c26c, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__14___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__14___init__ = cache_frame_frame_h2$events$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__14___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__14___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pushed_stream_id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_parent_stream_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_headers, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__14___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__14___init__ == cache_frame_frame_h2$events$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__14___init__);
    cache_frame_frame_h2$events$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__14___init__);

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


static PyObject *impl_h2$events$$$function__15___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__15___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__15___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__15___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__15___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__15___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__15___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8cef29aeb875032ab04d4612f9862e75, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__15___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__15___repr__ = cache_frame_frame_h2$events$$$function__15___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__15___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__15___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_6aaf58d02166f0bfef06c6f4b70233f3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pushed_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_fce6084381ed368c5147608b5c71f102;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parent_stream_id);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_16f4b22cae10f501d2dc8ed7a21585e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__15___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__15___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__15___repr__ == cache_frame_frame_h2$events$$$function__15___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__15___repr__);
    cache_frame_frame_h2$events$$$function__15___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__15___repr__);

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


static PyObject *impl_h2$events$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__16___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3d487355d26fbb366062c28dbbd98d9f, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__16___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__16___init__ = cache_frame_frame_h2$events$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__16___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_changed_settings, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__16___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__16___init__ == cache_frame_frame_h2$events$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__16___init__);
    cache_frame_frame_h2$events$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__16___init__);

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


static PyObject *impl_h2$events$$$function__17___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_s = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__17___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__17___repr__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__17___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__17___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__17___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__17___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eea69f0fb2505e334d13e6969de4b68a, module_h2$events, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__17___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__17___repr__ = cache_frame_frame_h2$events$$$function__17___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__17___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__17___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_changed_settings);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__17___repr__->m_frame.f_lineno = 528;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_h2$events$$$function__17___repr__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_s == NULL);
var_s = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__17___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__17___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__17___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__17___repr__,
    type_description_1,
    par_self,
    var_s
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__17___repr__ == cache_frame_frame_h2$events$$$function__17___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__17___repr__);
    cache_frame_frame_h2$events$$$function__17___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__17___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_3e3b8204226050741cf65d4ea044fd6d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_s);
tmp_tuple_element_1 = var_s;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_4aa21900d12464e734e05f58da2b9dfa;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_s);
CHECK_OBJECT(var_s);
Py_DECREF(var_s);
var_s = NULL;
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



#if 1
struct h2$events$$$function__17___repr__$$$genexpr__1_genexpr_locals {
PyObject *var_cs;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *h2$events$$$function__17___repr__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct h2$events$$$function__17___repr__$$$genexpr__1_genexpr_locals *generator_heap = (struct h2$events$$$function__17___repr__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cs = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_7f2a83de6c2301c83aca10e5289e21c5, module_h2$events, sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 528;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_cs;
    generator_heap->var_cs = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_cs);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cs);
tmp_operand_value_1 = generator_heap->var_cs;
tmp_expression_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 528;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_operand_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_operand_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 528;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 528;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
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
    NULL,
    generator_heap->var_cs
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_cs);
generator_heap->var_cs = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_cs);
generator_heap->var_cs = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h2$events$$$function__17___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h2$events$$$function__17___repr__$$$genexpr__1_genexpr_context,
        module_h2$events,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_48a002302e7c0dd1f266e0c54e1f7193,
#endif
        code_objects_7f2a83de6c2301c83aca10e5289e21c5,
        closure,
        1,
#if 1
        sizeof(struct h2$events$$$function__17___repr__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h2$events$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__18___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__18___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__18___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__18___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__18___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__18___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_958f1049c58e976f5db1a362348e810f, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__18___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__18___init__ = cache_frame_frame_h2$events$$$function__18___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__18___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__18___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_stream_id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_weight, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_depends_on, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_exclusive, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__18___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__18___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__18___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__18___init__ == cache_frame_frame_h2$events$$$function__18___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__18___init__);
    cache_frame_frame_h2$events$$$function__18___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__18___init__);

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


static PyObject *impl_h2$events$$$function__19___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__19___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__19___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__19___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__19___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__19___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__19___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bf32751cf45b12ea31d877e4c68fc5d1, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__19___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__19___repr__ = cache_frame_frame_h2$events$$$function__19___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__19___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__19___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5dfb3bc96dd0e107d46126a6fc6c9a7d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 9);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stream_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_eb0ecbde26094c7e056aaa1bdfc5de6e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_weight);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b0fbd02411607ed08fa6b07927235511;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_depends_on);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_812751476016fbd59b91ac43a2e96bf2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_exclusive);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__19___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__19___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__19___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__19___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__19___repr__ == cache_frame_frame_h2$events$$$function__19___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__19___repr__);
    cache_frame_frame_h2$events$$$function__19___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__19___repr__);

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


static PyObject *impl_h2$events$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__20___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__20___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__20___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__20___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__20___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__20___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f7fbb57c0d2b8bb0367f2dfdc5b86d53, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__20___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__20___init__ = cache_frame_frame_h2$events$$$function__20___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__20___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__20___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_error_code, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_last_stream_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_additional_data, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__20___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__20___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__20___init__ == cache_frame_frame_h2$events$$$function__20___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__20___init__);
    cache_frame_frame_h2$events$$$function__20___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__20___init__);

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


static PyObject *impl_h2$events$$$function__21___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__21___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__21___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__21___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__21___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__21___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__21___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_58128e184adde2f7c76e742bbdb9cf6b, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__21___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__21___repr__ = cache_frame_frame_h2$events$$$function__21___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__21___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__21___repr__) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3d098480272a83b988bb67ed80ba80a4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_error_code);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_last_stream_id);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 592;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_h2$events$_bytes_representation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__bytes_representation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 593;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_additional_data);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 595;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 595;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_additional_data);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 594;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_20_none;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 594;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_1 = Py_None;
Py_INCREF(tmp_args_element_value_1);
condexpr_end_1:;
frame_frame_h2$events$$$function__21___repr__->m_frame.f_lineno = 593;
tmp_kw_call_arg_value_3_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 593;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__21___repr__->m_frame.f_lineno = 589;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__21___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__21___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__21___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__21___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__21___repr__ == cache_frame_frame_h2$events$$$function__21___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__21___repr__);
    cache_frame_frame_h2$events$$$function__21___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__21___repr__);

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


static PyObject *impl_h2$events$$$function__22___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__22___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__22___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__22___init__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__22___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__22___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__22___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_29e5f47d573eba2e9b6dacf9d4dd322c, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__22___init__->m_type_description == NULL);
frame_frame_h2$events$$$function__22___init__ = cache_frame_frame_h2$events$$$function__22___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__22___init__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__22___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_origin, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_field_value, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__22___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__22___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__22___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__22___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__22___init__ == cache_frame_frame_h2$events$$$function__22___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__22___init__);
    cache_frame_frame_h2$events$$$function__22___init__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__22___init__);

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


static PyObject *impl_h2$events$$$function__23___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__23___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__23___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__23___repr__)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__23___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__23___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__23___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5c890f9aa58af53e5a6b264217aa12cd, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__23___repr__->m_type_description == NULL);
frame_frame_h2$events$$$function__23___repr__ = cache_frame_frame_h2$events$$$function__23___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__23___repr__);
assert(Py_REFCNT(frame_frame_h2$events$$$function__23___repr__) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_4;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_42692192ce485ac61e21428eb96db78f;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_origin);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 639;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_bytes_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_expression_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__23___repr__->m_frame.f_lineno = 639;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_field_value);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 640;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 640;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_bytes_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_expression_value_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_expression_value_3 = tmp_or_left_value_2;
or_end_2:;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 640;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__23___repr__->m_frame.f_lineno = 640;
tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_ignore_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 640;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__23___repr__->m_frame.f_lineno = 638;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__23___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__23___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__23___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__23___repr__ == cache_frame_frame_h2$events$$$function__23___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__23___repr__);
    cache_frame_frame_h2$events$$$function__23___repr__ = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__23___repr__);

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


static PyObject *impl_h2$events$$$function__25__bytes_representation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$function__25__bytes_representation;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_h2$events$$$function__25__bytes_representation = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_data);
tmp_cmp_expr_left_1 = par_data;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_h2$events$$$function__25__bytes_representation)) {
    Py_XDECREF(cache_frame_frame_h2$events$$$function__25__bytes_representation);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_h2$events$$$function__25__bytes_representation == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_h2$events$$$function__25__bytes_representation = MAKE_FUNCTION_FRAME(tstate, code_objects_1eed5940b7ec4cb34fd4cd9fb8a92999, module_h2$events, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_h2$events$$$function__25__bytes_representation->m_type_description == NULL);
frame_frame_h2$events$$$function__25__bytes_representation = cache_frame_frame_h2$events$$$function__25__bytes_representation;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$function__25__bytes_representation);
assert(Py_REFCNT(frame_frame_h2$events$$$function__25__bytes_representation) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_h2$events$binascii(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binascii);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_h2$events$$$function__25__bytes_representation->m_frame.f_lineno = 679;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexlify, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_h2$events$$$function__25__bytes_representation->m_frame.f_lineno = 679;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$function__25__bytes_representation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$function__25__bytes_representation->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$function__25__bytes_representation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$function__25__bytes_representation,
    type_description_1,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_h2$events$$$function__25__bytes_representation == cache_frame_frame_h2$events$$$function__25__bytes_representation) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_h2$events$$$function__25__bytes_representation);
    cache_frame_frame_h2$events$$$function__25__bytes_representation = NULL;
}

assertFrameObject(frame_frame_h2$events$$$function__25__bytes_representation);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__10___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__10___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e8c4f59ab40bba3563e9f02e64431595,
#endif
        code_objects_c22179f1f4b67123b61139ac1a685671,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__11___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__11___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_116ad49d1b542e4b532eb4c4a1180e4c,
#endif
        code_objects_4fd4943229611e50e90842a96e40486f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__12___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__12___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0be9214afcc653d496db43bad3065641,
#endif
        code_objects_7339fdfb0a8746213bf7395466d3d13f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5e881316e1e4df5c8fed80cdd0bf535,
#endif
        code_objects_a4888d2b8713e0833ab56cf1e313ad9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__14___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_10d561cb9c231d010965cad851378d27,
#endif
        code_objects_75f45a20700d06f7051e88279428c26c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__15___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb3d8aae832b6d1c026a6850ae4a1c37,
#endif
        code_objects_8cef29aeb875032ab04d4612f9862e75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__16___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5e9cbae59002ef627b87f668a9bbec5e,
#endif
        code_objects_3d487355d26fbb366062c28dbbd98d9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__17___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__17___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_de8df53095b8725bc3e41bfb345c2af1,
#endif
        code_objects_eea69f0fb2505e334d13e6969de4b68a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__18___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__18___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f137575693b8cab85def3047b1a47a8e,
#endif
        code_objects_958f1049c58e976f5db1a362348e810f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__19___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__19___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0857c0ec0083b3df36d195403df4c36,
#endif
        code_objects_bf32751cf45b12ea31d877e4c68fc5d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__1___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__1___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2912e0c3ed47d8a9732c517334da60af,
#endif
        code_objects_115449ceed7832daf731820ac36ab0e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__20___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd0ceba14af270da0c0a7c724440860c,
#endif
        code_objects_f7fbb57c0d2b8bb0367f2dfdc5b86d53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__21___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__21___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e96edc4c8040fb69d2b769ae318aa16c,
#endif
        code_objects_58128e184adde2f7c76e742bbdb9cf6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__22___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__22___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_077309d4d3135e89ed7f6eb1431df73b,
#endif
        code_objects_29e5f47d573eba2e9b6dacf9d4dd322c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__23___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__23___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6fae044eb603bede5f9345415da5d8f,
#endif
        code_objects_5c890f9aa58af53e5a6b264217aa12cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__24___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5b7b437c532ddac993c92be47638aab3,
#endif
        code_objects_f798b2a65738e6f4909da3f014203eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_angle_UnknownFrameReceived);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__25__bytes_representation(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__25__bytes_representation,
        mod_consts.const_str_plain__bytes_representation,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1eed5940b7ec4cb34fd4cd9fb8a92999,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        mod_consts.const_str_digest_917afaaa5d45ad67fa0b5ef90179513e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1bd565c012461e4f9f4ebe98b0c719e,
#endif
        code_objects_1ca3852215217d4e5150d409cc1113e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__3___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__3___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b3d353b8b47cd0f5a72497fe00aca561,
#endif
        code_objects_1bd1614129a36047202a113decd88f43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__4___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__4___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1c7d2e07c4a14834c8a4f869ac59d59,
#endif
        code_objects_e489eeb663d1a1e2581c0f29c2afa455,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__5___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__5___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_feedb40cdd2fb3c6ef5acbe97e6a770d,
#endif
        code_objects_a171e8b169054fce2ee4fb4786e20859,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__6___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__6___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cafe3cb83b3801d366577460b297b5d1,
#endif
        code_objects_f823661c18e878b509cba072a46331b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__7___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f5064e10f3752da568cfb61e03955c3d,
#endif
        code_objects_2f40bff83e4ba43733f0ee66e296f179,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__8_from_settings(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__8_from_settings,
        mod_consts.const_str_plain_from_settings,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7742f23684364f08f8aee88102f48c34,
#endif
        code_objects_550e06e6df34db7e1ea98eb5740d95ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
        mod_consts.const_str_digest_52203b2d32bc9f68cd8ad60cb82a048a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h2$events$$$function__9___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h2$events$$$function__9___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b72b969c2453c9ab71bdd9c90f499057,
#endif
        code_objects_afc8742f76bd02468fbc0c3768b98db6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h2$events,
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

static function_impl_code const function_table_h2$events[] = {
impl_h2$events$$$function__1___repr__,
impl_h2$events$$$function__2___repr__,
impl_h2$events$$$function__3___repr__,
impl_h2$events$$$function__4___repr__,
impl_h2$events$$$function__5___repr__,
impl_h2$events$$$function__6___repr__,
impl_h2$events$$$function__7___init__,
impl_h2$events$$$function__8_from_settings,
impl_h2$events$$$function__9___repr__,
impl_h2$events$$$function__10___repr__,
impl_h2$events$$$function__11___repr__,
impl_h2$events$$$function__12___repr__,
impl_h2$events$$$function__13___repr__,
impl_h2$events$$$function__14___init__,
impl_h2$events$$$function__15___repr__,
impl_h2$events$$$function__16___init__,
impl_h2$events$$$function__17___repr__,
impl_h2$events$$$function__18___init__,
impl_h2$events$$$function__19___repr__,
impl_h2$events$$$function__20___init__,
impl_h2$events$$$function__21___repr__,
impl_h2$events$$$function__22___init__,
impl_h2$events$$$function__23___repr__,
impl_h2$events$$$function__25__bytes_representation,
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

    return Nuitka_Function_GetFunctionState(function, function_table_h2$events);
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
        module_h2$events,
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
        function_table_h2$events,
        sizeof(function_table_h2$events) / sizeof(function_impl_code)
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
static char const *module_full_name = "h2.events";
#endif

// Internal entry point for module code.
PyObject *module_code_h2$events(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h2$events");

    // Store the module for future use.
    module_h2$events = module;

    moduledict_h2$events = MODULE_DICT(module_h2$events);

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
        PRINT_STRING("h2$events: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h2$events: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h2$events: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h2.events" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith2$events\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h2$events,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h2$events,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h2$events,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h2$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h2$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h2$events);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h2$events);
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

        UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
PyObject *outline_20_var___class__ = NULL;
PyObject *outline_21_var___class__ = NULL;
PyObject *outline_22_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_13__bases = NULL;
PyObject *tmp_class_container$class_creation_13__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_13__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_13__metaclass = NULL;
PyObject *tmp_class_container$class_creation_13__prepared = NULL;
PyObject *tmp_class_container$class_creation_14__bases = NULL;
PyObject *tmp_class_container$class_creation_14__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_14__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_14__metaclass = NULL;
PyObject *tmp_class_container$class_creation_14__prepared = NULL;
PyObject *tmp_class_container$class_creation_15__bases = NULL;
PyObject *tmp_class_container$class_creation_15__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_15__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_15__metaclass = NULL;
PyObject *tmp_class_container$class_creation_15__prepared = NULL;
PyObject *tmp_class_container$class_creation_16__bases = NULL;
PyObject *tmp_class_container$class_creation_16__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__metaclass = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_17__bases = NULL;
PyObject *tmp_class_container$class_creation_17__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_17__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_17__metaclass = NULL;
PyObject *tmp_class_container$class_creation_17__prepared = NULL;
PyObject *tmp_class_container$class_creation_18__bases = NULL;
PyObject *tmp_class_container$class_creation_18__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_18__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_18__metaclass = NULL;
PyObject *tmp_class_container$class_creation_18__prepared = NULL;
PyObject *tmp_class_container$class_creation_19__bases = NULL;
PyObject *tmp_class_container$class_creation_19__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_19__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_19__metaclass = NULL;
PyObject *tmp_class_container$class_creation_19__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_21__bases = NULL;
PyObject *tmp_class_container$class_creation_21__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_21__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_21__metaclass = NULL;
PyObject *tmp_class_container$class_creation_21__prepared = NULL;
PyObject *tmp_class_container$class_creation_22__bases = NULL;
PyObject *tmp_class_container$class_creation_22__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__metaclass = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
PyObject *tmp_class_container$class_creation_23__bases = NULL;
PyObject *tmp_class_container$class_creation_23__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_23__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_23__metaclass = NULL;
PyObject *tmp_class_container$class_creation_23__prepared = NULL;
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
struct Nuitka_FrameObject *frame_frame_h2$events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_h2$events$$$class__1_Event_42 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
int tmp_res;
PyObject *locals_h2$events$$$class__2_RequestReceived_49 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__2_RequestReceived_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_h2$events$$$class__3_ResponseReceived_96 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__3_ResponseReceived_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_h2$events$$$class__4_TrailersReceived_139 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__4_TrailersReceived_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_h2$events$$$class__5__HeadersSent_183 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_h2$events$$$class__6__ResponseSent_193 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_h2$events$$$class__7__RequestSent_204 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_h2$events$$$class__8__TrailersSent_215 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_h2$events$$$class__9__PushedRequestSent_228 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_h2$events$$$class__10_InformationalResponseReceived_239 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__10_InformationalResponseReceived_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_h2$events$$$class__11_DataReceived_282 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__11_DataReceived_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
PyObject *locals_h2$events$$$class__12_WindowUpdated_328 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__12_WindowUpdated_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
PyObject *locals_h2$events$$$class__13_RemoteSettingsChanged_352 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
PyObject *locals_h2$events$$$class__14_PingReceived_407 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__14_PingReceived_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
PyObject *locals_h2$events$$$class__15_PingAckReceived_424 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__15_PingAckReceived_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
PyObject *locals_h2$events$$$class__16_StreamEnded_444 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__16_StreamEnded_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
PyObject *locals_h2$events$$$class__17_StreamReset_459 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__17_StreamReset_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
PyObject *locals_h2$events$$$class__18_PushedStreamReceived_489 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__18_PushedStreamReceived_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
PyObject *locals_h2$events$$$class__19_SettingsAcknowledged_513 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__19_SettingsAcknowledged_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
PyObject *locals_h2$events$$$class__20_PriorityUpdated_532 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__20_PriorityUpdated_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
PyObject *locals_h2$events$$$class__21_ConnectionTerminated_566 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__21_ConnectionTerminated_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
PyObject *locals_h2$events$$$class__22_AlternativeServiceAvailable_600 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
PyObject *locals_h2$events$$$class__23_UnknownFrameReceived_646 = NULL;
struct Nuitka_FrameObject *frame_frame_h2$events$$$class__23_UnknownFrameReceived_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1bd7012efe6843a4ef89e24744b17383;
UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h2$events = MAKE_MODULE_FRAME(code_objects_c1e7ad2e77e8cf1962eb863ba23e4c5f, module_h2$events);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events);
assert(Py_REFCNT(frame_frame_h2$events) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h2$events$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h2$events$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_binascii;
tmp_globals_arg_value_1 = (PyObject *)moduledict_h2$events;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_h2$events->m_frame.f_lineno = 13;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_h2$events;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_h2$events->m_frame.f_lineno = 15;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
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
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_11);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_settings;
tmp_globals_arg_value_3 = (PyObject *)moduledict_h2$events;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_5a8cbf3dbe63303e7b46f0ce55b58ebc_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_h2$events->m_frame.f_lineno = 18;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain_ChangedSetting,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ChangedSetting);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ChangedSetting, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain_SettingCodes,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_SettingCodes);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_SettingCodes, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain_Settings,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Settings);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Settings, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_h2$events,
        mod_consts.const_str_plain__setting_code_from_int,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__setting_code_from_int);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__setting_code_from_int, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = DICT_COPY(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_kw_only, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
tmp_called_value_1 = (PyObject *)&PyBaseObject_Type;
frame_frame_h2$events->m_frame.f_lineno = 33;
tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__LAZY_INIT, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_Any;
tmp_ass_subscribed_1 = module_var_accessor_h2$events$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__LAZY_INIT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_h2$events$$$class__1_Event_42 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_result = DICT_SET_ITEM(locals_h2$events$$$class__1_Event_42, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_93b0b81487cb8171828671b6f88b1f1b;
tmp_result = DICT_SET_ITEM(locals_h2$events$$$class__1_Event_42, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Event;
tmp_result = DICT_SET_ITEM(locals_h2$events$$$class__1_Event_42, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_42;
tmp_result = DICT_SET_ITEM(locals_h2$events$$$class__1_Event_42, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_h2$events$$$class__1_Event_42, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_Event;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_h2$events$$$class__1_Event_42;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 42;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_21 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_h2$events$$$class__1_Event_42);
locals_h2$events$$$class__1_Event_42 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__1_Event_42);
locals_h2$events$$$class__1_Event_42 = NULL;
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
exception_lineno = 42;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_h2$events$Event(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_RequestReceived;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 49;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
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


exception_lineno = 49;

    goto try_except_handler_6;
}
frame_frame_h2$events->m_frame.f_lineno = 49;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_28;
}
branch_end_1:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_4;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_args_element_value_1;
tmp_direct_call_arg1_2 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto try_except_handler_6;
}
tmp_direct_call_arg2_1 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto try_except_handler_6;
}
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_1};
    tmp_called_value_4 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_6;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_h2$events$$$class__2_RequestReceived_49 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_3b563ffff4946cb0841ff86fe2cbc0cd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
frame_frame_h2$events$$$class__2_RequestReceived_2 = MAKE_CLASS_FRAME(tstate, code_objects_ebbb378308bc911e0cd0f1a3f25c351e, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__2_RequestReceived_2);
assert(Py_REFCNT(frame_frame_h2$events$$$class__2_RequestReceived_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = const_str_plain_int;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain_stream_ended, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_stream_ended;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain_priority_updated, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_h2$events$$$class__2_RequestReceived_49, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_priority_updated;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__1___repr__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__2_RequestReceived_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__2_RequestReceived_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__2_RequestReceived_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__2_RequestReceived_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__2_RequestReceived_2);

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
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__2_RequestReceived_49, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_RequestReceived;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_h2$events$$$class__2_RequestReceived_49;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 49;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_30;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_1 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_h2$events$$$class__2_RequestReceived_49);
locals_h2$events$$$class__2_RequestReceived_49 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__2_RequestReceived_49);
locals_h2$events$$$class__2_RequestReceived_49 = NULL;
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
exception_lineno = 49;
goto try_except_handler_6;
outline_result_4:;
frame_frame_h2$events->m_frame.f_lineno = 48;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestReceived, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
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
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto try_except_handler_9;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

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
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_ResponseReceived;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 96;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_9;
}
frame_frame_h2$events->m_frame.f_lineno = 96;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 96;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_36;
}
branch_end_4:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_7;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_args_element_value_2;
tmp_direct_call_arg1_4 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto try_except_handler_9;
}
tmp_direct_call_arg2_2 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto try_except_handler_9;
}
Py_INCREF(tmp_direct_call_arg1_4);
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_2};
    tmp_called_value_7 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_h2$events$$$class__3_ResponseReceived_96 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_34eefa115e7f96408212d24e345849a4;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_ResponseReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_96;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
frame_frame_h2$events$$$class__3_ResponseReceived_3 = MAKE_CLASS_FRAME(tstate, code_objects_7e9c1eeea6ac6f553c9f69a0b5265a04, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__3_ResponseReceived_3);
assert(Py_REFCNT(frame_frame_h2$events$$$class__3_ResponseReceived_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = const_str_plain_int;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain_stream_ended, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_stream_ended;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain_priority_updated, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_h2$events$$$class__3_ResponseReceived_96, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_priority_updated;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__2___repr__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__3_ResponseReceived_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__3_ResponseReceived_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__3_ResponseReceived_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__3_ResponseReceived_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__3_ResponseReceived_3);

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
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__3_ResponseReceived_96, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_ResponseReceived;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_h2$events$$$class__3_ResponseReceived_96;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 96;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_args_element_value_2 = outline_2_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_h2$events$$$class__3_ResponseReceived_96);
locals_h2$events$$$class__3_ResponseReceived_96 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__3_ResponseReceived_96);
locals_h2$events$$$class__3_ResponseReceived_96 = NULL;
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
exception_lineno = 96;
goto try_except_handler_9;
outline_result_6:;
frame_frame_h2$events->m_frame.f_lineno = 95;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReceived, tmp_assign_source_37);
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
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto try_except_handler_12;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_TrailersReceived;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 139;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_12;
}
frame_frame_h2$events->m_frame.f_lineno = 139;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 139;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_44;
}
branch_end_7:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_10;
PyObject *tmp_direct_call_arg1_6;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_args_element_value_3;
tmp_direct_call_arg1_6 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto try_except_handler_12;
}
tmp_direct_call_arg2_3 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto try_except_handler_12;
}
Py_INCREF(tmp_direct_call_arg1_6);
Py_INCREF(tmp_direct_call_arg2_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6, tmp_direct_call_arg2_3};
    tmp_called_value_10 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_12;
}
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_h2$events$$$class__4_TrailersReceived_139 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_48a1942e8d98887381ab25532619b684;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_TrailersReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_139;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
frame_frame_h2$events$$$class__4_TrailersReceived_4 = MAKE_CLASS_FRAME(tstate, code_objects_8db8113937e1c27c14b970b6d41290d4, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__4_TrailersReceived_4);
assert(Py_REFCNT(frame_frame_h2$events$$$class__4_TrailersReceived_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = const_str_plain_int;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain_stream_ended, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511;
tmp_ass_subscribed_12 = PyObject_GetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_stream_ended;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain_priority_updated, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c;
tmp_ass_subscribed_13 = PyObject_GetItem(locals_h2$events$$$class__4_TrailersReceived_139, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_priority_updated;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__3___repr__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__4_TrailersReceived_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__4_TrailersReceived_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__4_TrailersReceived_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__4_TrailersReceived_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__4_TrailersReceived_4);

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
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__4_TrailersReceived_139, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_TrailersReceived;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_h2$events$$$class__4_TrailersReceived_139;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 139;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_args_element_value_3 = outline_3_var___class__;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_h2$events$$$class__4_TrailersReceived_139);
locals_h2$events$$$class__4_TrailersReceived_139 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__4_TrailersReceived_139);
locals_h2$events$$$class__4_TrailersReceived_139 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 139;
goto try_except_handler_12;
outline_result_8:;
frame_frame_h2$events->m_frame.f_lineno = 138;
tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_TrailersReceived, tmp_assign_source_45);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;

    goto try_except_handler_15;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

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
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
tmp_tuple_element_15 = mod_consts.const_str_plain__HeadersSent;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 183;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

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
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_7, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_15;
}
frame_frame_h2$events->m_frame.f_lineno = 183;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 183;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_52;
}
branch_end_10:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_h2$events$$$class__5__HeadersSent_183 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_a57df8818ff00cbeb4f3814eb11cab5a;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain__HeadersSent;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_183;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__5__HeadersSent_183, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
branch_no_12:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain__HeadersSent;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_h2$events$$$class__5__HeadersSent_183;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 183;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_53 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_h2$events$$$class__5__HeadersSent_183);
locals_h2$events$$$class__5__HeadersSent_183 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__5__HeadersSent_183);
locals_h2$events$$$class__5__HeadersSent_183 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 183;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__HeadersSent, tmp_assign_source_53);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_h2$events$_HeadersSent(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HeadersSent);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto try_except_handler_18;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

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
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
tmp_tuple_element_19 = mod_consts.const_str_plain__ResponseSent;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 193;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

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
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_8, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_18;
}
frame_frame_h2$events->m_frame.f_lineno = 193;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 193;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_60;
}
branch_end_13:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_h2$events$$$class__6__ResponseSent_193 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_e41af19fbf1bcfd908fb93cce89f82cf;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain__ResponseSent;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_193;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__6__ResponseSent_193, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
branch_no_15:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain__ResponseSent;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_h2$events$$$class__6__ResponseSent_193;
PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 193;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto try_except_handler_20;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_61 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_h2$events$$$class__6__ResponseSent_193);
locals_h2$events$$$class__6__ResponseSent_193 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__6__ResponseSent_193);
locals_h2$events$$$class__6__ResponseSent_193 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 193;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__ResponseSent, tmp_assign_source_61);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_22;
tmp_tuple_element_22 = module_var_accessor_h2$events$_HeadersSent(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HeadersSent);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto try_except_handler_21;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_22);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

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
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
tmp_tuple_element_23 = mod_consts.const_str_plain__RequestSent;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 204;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

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
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_9, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_21;
}
frame_frame_h2$events->m_frame.f_lineno = 204;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_68;
}
branch_end_16:;
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_h2$events$$$class__7__RequestSent_204 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_ac51bd91748b030515c094d34a5b9e88;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain__RequestSent;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_204;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__7__RequestSent_204, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
branch_no_18:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_plain__RequestSent;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_h2$events$$$class__7__RequestSent_204;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 204;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_23;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_69 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_h2$events$$$class__7__RequestSent_204);
locals_h2$events$$$class__7__RequestSent_204 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__7__RequestSent_204);
locals_h2$events$$$class__7__RequestSent_204 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 204;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__RequestSent, tmp_assign_source_69);
}
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
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
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_71;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_h2$events$_HeadersSent(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HeadersSent);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;

    goto try_except_handler_24;
}
tmp_assign_source_71 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_72 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_74;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

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
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
tmp_tuple_element_27 = mod_consts.const_str_plain__TrailersSent;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 215;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_75;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

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
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_10, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_24;
}
frame_frame_h2$events->m_frame.f_lineno = 215;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 215;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_76;
}
branch_end_19:;
{
PyObject *tmp_assign_source_77;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_h2$events$$$class__8__TrailersSent_215 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_1cf10b3946a32f92444dd0e117e43234;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain__TrailersSent;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_215;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__8__TrailersSent_215, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
branch_no_21:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_plain__TrailersSent;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_h2$events$$$class__8__TrailersSent_215;
PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 215;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto try_except_handler_26;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_77 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_h2$events$$$class__8__TrailersSent_215);
locals_h2$events$$$class__8__TrailersSent_215 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__8__TrailersSent_215);
locals_h2$events$$$class__8__TrailersSent_215 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 215;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__TrailersSent, tmp_assign_source_77);
}
goto try_end_10;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
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
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_79;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_h2$events$_HeadersSent(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HeadersSent);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;

    goto try_except_handler_27;
}
tmp_assign_source_79 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_80 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_43 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_82 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_82;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
tmp_tuple_element_31 = mod_consts.const_str_plain__PushedRequestSent;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 228;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_83;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

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
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_11, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_27;
}
frame_frame_h2$events->m_frame.f_lineno = 228;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 228;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_84;
}
branch_end_22:;
{
PyObject *tmp_assign_source_85;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_h2$events$$$class__9__PushedRequestSent_228 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_digest_7bb4af565f5f176ec276d283b8fe366a;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain__PushedRequestSent;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_228;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__9__PushedRequestSent_228, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
branch_no_24:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_plain__PushedRequestSent;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_h2$events$$$class__9__PushedRequestSent_228;
PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 228;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto try_except_handler_29;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_86;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_85 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_85);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_h2$events$$$class__9__PushedRequestSent_228);
locals_h2$events$$$class__9__PushedRequestSent_228 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__9__PushedRequestSent_228);
locals_h2$events$$$class__9__PushedRequestSent_228 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 228;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__PushedRequestSent, tmp_assign_source_85);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
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
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_87;
PyObject *tmp_tuple_element_34;
tmp_tuple_element_34 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto try_except_handler_30;
}
tmp_assign_source_87 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_34);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_88 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_49 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_90 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_90;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

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
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
tmp_tuple_element_35 = mod_consts.const_str_plain_InformationalResponseReceived;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 239;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_91;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_52 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

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
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_53;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_12, tmp_default_value_9);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_36);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_30;
}
frame_frame_h2$events->m_frame.f_lineno = 239;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_92;
}
branch_end_25:;
{
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_23;
PyObject *tmp_direct_call_arg1_13;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_args_element_value_4;
tmp_direct_call_arg1_13 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto try_except_handler_30;
}
tmp_direct_call_arg2_4 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;

    goto try_except_handler_30;
}
Py_INCREF(tmp_direct_call_arg1_13);
Py_INCREF(tmp_direct_call_arg2_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13, tmp_direct_call_arg2_4};
    tmp_called_value_23 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_30;
}
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_h2$events$$$class__10_InformationalResponseReceived_239 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_digest_b0843f6caafda56208fba50759484418;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_InformationalResponseReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_239;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
frame_frame_h2$events$$$class__10_InformationalResponseReceived_5 = MAKE_CLASS_FRAME(tstate, code_objects_7a0235cb0dd9a7543e3fa11efade42e2, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__10_InformationalResponseReceived_5);
assert(Py_REFCNT(frame_frame_h2$events$$$class__10_InformationalResponseReceived_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = const_str_plain_int;
tmp_ass_subscribed_14 = PyObject_GetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_7d7f2cc97116bb64113181be2afd32f0;
tmp_ass_subscribed_15 = PyObject_GetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain_priority_updated, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_digest_a14a126185061f57b5bbbc9e0665ea5c;
tmp_ass_subscribed_16 = PyObject_GetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_priority_updated;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__4___repr__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__10_InformationalResponseReceived_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__10_InformationalResponseReceived_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__10_InformationalResponseReceived_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__10_InformationalResponseReceived_5,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__10_InformationalResponseReceived_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_32;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__10_InformationalResponseReceived_239, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
branch_no_27:;
{
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_37 = mod_consts.const_str_plain_InformationalResponseReceived;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
tmp_tuple_element_37 = locals_h2$events$$$class__10_InformationalResponseReceived_239;
PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 239;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_32;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_94;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_args_element_value_4 = outline_9_var___class__;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_h2$events$$$class__10_InformationalResponseReceived_239);
locals_h2$events$$$class__10_InformationalResponseReceived_239 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__10_InformationalResponseReceived_239);
locals_h2$events$$$class__10_InformationalResponseReceived_239 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 239;
goto try_except_handler_30;
outline_result_20:;
frame_frame_h2$events->m_frame.f_lineno = 238;
tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;

    goto try_except_handler_30;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_InformationalResponseReceived, tmp_assign_source_93);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_95;
PyObject *tmp_tuple_element_38;
tmp_tuple_element_38 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_assign_source_95 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_38);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_95;
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_96 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
tmp_assign_source_97 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_97;
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_55 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_98 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_98;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_99;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_tuple_element_39 = mod_consts.const_str_plain_DataReceived;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 282;
tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_99;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_58 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_40 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_13, tmp_default_value_10);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_40);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_33;
}
frame_frame_h2$events->m_frame.f_lineno = 282;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 282;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_100;
}
branch_end_28:;
{
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_26;
PyObject *tmp_direct_call_arg1_15;
PyObject *tmp_direct_call_arg2_5;
PyObject *tmp_args_element_value_5;
tmp_direct_call_arg1_15 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto try_except_handler_33;
}
tmp_direct_call_arg2_5 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto try_except_handler_33;
}
Py_INCREF(tmp_direct_call_arg1_15);
Py_INCREF(tmp_direct_call_arg2_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15, tmp_direct_call_arg2_5};
    tmp_called_value_26 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto try_except_handler_33;
}
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_h2$events$$$class__11_DataReceived_282 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_digest_786af2494bb8a35510e964f47d5100e1;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_DataReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_282;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
frame_frame_h2$events$$$class__11_DataReceived_6 = MAKE_CLASS_FRAME(tstate, code_objects_9605845a8fc5bd4b065e15f8e29b8ea2, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__11_DataReceived_6);
assert(Py_REFCNT(frame_frame_h2$events$$$class__11_DataReceived_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = const_str_plain_int;
tmp_ass_subscribed_17 = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 292;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subscribed_17);
Py_DECREF(tmp_ass_subscribed_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = const_str_plain_bytes;
tmp_ass_subscribed_18 = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
CHECK_OBJECT(tmp_ass_subscribed_18);
Py_DECREF(tmp_ass_subscribed_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain_flow_controlled_length, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = const_str_plain_int;
tmp_ass_subscribed_19 = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_flow_controlled_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
CHECK_OBJECT(tmp_ass_subscribed_19);
Py_DECREF(tmp_ass_subscribed_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain_stream_ended, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = mod_consts.const_str_digest_ab3da3b31c0842eb230e0fd334382511;
tmp_ass_subscribed_20 = PyObject_GetItem(locals_h2$events$$$class__11_DataReceived_282, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_stream_ended;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
CHECK_OBJECT(tmp_ass_subscribed_20);
Py_DECREF(tmp_ass_subscribed_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__5___repr__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__11_DataReceived_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__11_DataReceived_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__11_DataReceived_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__11_DataReceived_6,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__11_DataReceived_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_35;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__11_DataReceived_282, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
branch_no_30:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_27;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_27 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_41 = mod_consts.const_str_plain_DataReceived;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
tmp_tuple_element_41 = locals_h2$events$$$class__11_DataReceived_282;
PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 282;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_35;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_102;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_args_element_value_5 = outline_10_var___class__;
Py_INCREF(tmp_args_element_value_5);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_h2$events$$$class__11_DataReceived_282);
locals_h2$events$$$class__11_DataReceived_282 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__11_DataReceived_282);
locals_h2$events$$$class__11_DataReceived_282 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 282;
goto try_except_handler_33;
outline_result_22:;
frame_frame_h2$events->m_frame.f_lineno = 281;
tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto try_except_handler_33;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_DataReceived, tmp_assign_source_101);
}
goto try_end_13;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_103;
PyObject *tmp_tuple_element_42;
tmp_tuple_element_42 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_assign_source_103 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_42);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_104 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
tmp_assign_source_105 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_106 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_106;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_107;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_tuple_element_43 = mod_consts.const_str_plain_WindowUpdated;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 328;
tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_107;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_44;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_14, tmp_default_value_11);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_44);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_36;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_36;
}
frame_frame_h2$events->m_frame.f_lineno = 328;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 328;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_36;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_108;
}
branch_end_31:;
{
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_29;
PyObject *tmp_direct_call_arg1_17;
PyObject *tmp_direct_call_arg2_6;
PyObject *tmp_args_element_value_6;
tmp_direct_call_arg1_17 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;

    goto try_except_handler_36;
}
tmp_direct_call_arg2_6 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;

    goto try_except_handler_36;
}
Py_INCREF(tmp_direct_call_arg1_17);
Py_INCREF(tmp_direct_call_arg2_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17, tmp_direct_call_arg2_6};
    tmp_called_value_29 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_36;
}
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_h2$events$$$class__12_WindowUpdated_328 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_digest_28ace78883545299f20e1dcae5289ae4;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_plain_WindowUpdated;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_int_pos_328;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
frame_frame_h2$events$$$class__12_WindowUpdated_7 = MAKE_CLASS_FRAME(tstate, code_objects_c1e9cca6ebef656fb8f461d3726d9e0f, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__12_WindowUpdated_7);
assert(Py_REFCNT(frame_frame_h2$events$$$class__12_WindowUpdated_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = const_str_plain_int;
tmp_ass_subscribed_21 = PyObject_GetItem(locals_h2$events$$$class__12_WindowUpdated_328, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
CHECK_OBJECT(tmp_ass_subscribed_21);
Py_DECREF(tmp_ass_subscribed_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain_delta, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = const_str_plain_int;
tmp_ass_subscribed_22 = PyObject_GetItem(locals_h2$events$$$class__12_WindowUpdated_328, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_delta;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
CHECK_OBJECT(tmp_ass_subscribed_22);
Py_DECREF(tmp_ass_subscribed_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__6___repr__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__12_WindowUpdated_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__12_WindowUpdated_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__12_WindowUpdated_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__12_WindowUpdated_7,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__12_WindowUpdated_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_38;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__12_WindowUpdated_328, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
branch_no_33:;
{
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_45 = mod_consts.const_str_plain_WindowUpdated;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
tmp_tuple_element_45 = locals_h2$events$$$class__12_WindowUpdated_328;
PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 328;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto try_except_handler_38;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_110;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_args_element_value_6 = outline_11_var___class__;
Py_INCREF(tmp_args_element_value_6);
goto try_return_handler_38;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
Py_DECREF(locals_h2$events$$$class__12_WindowUpdated_328);
locals_h2$events$$$class__12_WindowUpdated_328 = NULL;
goto try_return_handler_37;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__12_WindowUpdated_328);
locals_h2$events$$$class__12_WindowUpdated_328 = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_37;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 328;
goto try_except_handler_36;
outline_result_24:;
frame_frame_h2$events->m_frame.f_lineno = 327;
tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto try_except_handler_36;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_WindowUpdated, tmp_assign_source_109);
}
goto try_end_14;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}
{
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_111;
PyObject *tmp_tuple_element_46;
tmp_tuple_element_46 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_assign_source_111 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_111, 0, tmp_tuple_element_46);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_112 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_112;
}
{
PyObject *tmp_assign_source_113;
tmp_assign_source_113 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_113;
}
{
PyObject *tmp_assign_source_114;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_67 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_114 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_114;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_condition_result_46 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_tuple_element_47 = mod_consts.const_str_plain_RemoteSettingsChanged;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 352;
tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_115;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_70 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_47 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_48;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_15, tmp_default_value_12);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_48);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_39;
}
frame_frame_h2$events->m_frame.f_lineno = 352;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 352;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_39;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_116;
}
branch_end_34:;
{
PyObject *tmp_assign_source_117;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_h2$events$$$class__13_RemoteSettingsChanged_352 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_digest_a2c6112240f5b5fc1539d9ad7d34804b;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_plain_RemoteSettingsChanged;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_int_pos_352;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8 = MAKE_CLASS_FRAME(tstate, code_objects_d1f47593d780fa62b3719c6b2fb82cb4, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8);
assert(Py_REFCNT(frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8) == 2);

// Framed code:
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__7___init__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_8;
tmp_called_value_32 = PyObject_GetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, const_str_plain_classmethod);

if (tmp_called_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_32 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_067b206942708260a435ca3a69d422de);

tmp_args_element_value_7 = MAKE_FUNCTION_h2$events$$$function__8_from_settings(tstate, tmp_annotations_8);

frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8->m_frame.f_lineno = 379;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain_from_settings, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__9___repr__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__13_RemoteSettingsChanged_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_41;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_changed_settings_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__13_RemoteSettingsChanged_352, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
branch_no_36:;
{
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_33;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_33 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_49 = mod_consts.const_str_plain_RemoteSettingsChanged;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
tmp_tuple_element_49 = locals_h2$events$$$class__13_RemoteSettingsChanged_352;
PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 352;
tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto try_except_handler_41;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_118;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_117 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_117);
goto try_return_handler_41;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
Py_DECREF(locals_h2$events$$$class__13_RemoteSettingsChanged_352);
locals_h2$events$$$class__13_RemoteSettingsChanged_352 = NULL;
goto try_return_handler_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__13_RemoteSettingsChanged_352);
locals_h2$events$$$class__13_RemoteSettingsChanged_352 = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto try_except_handler_40;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_40:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 352;
goto try_except_handler_39;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_RemoteSettingsChanged, tmp_assign_source_117);
}
goto try_end_15;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
Py_DECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
Py_DECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
Py_DECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
Py_DECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
tmp_outline_return_value_13 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_13);
goto outline_result_25;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_25:;
CHECK_OBJECT(tmp_outline_return_value_13);
Py_DECREF(tmp_outline_return_value_13);
}
{
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_119;
PyObject *tmp_tuple_element_50;
tmp_tuple_element_50 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_assign_source_119 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_119, 0, tmp_tuple_element_50);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_direct_call_arg1_19;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_19 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_19);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_19};
    tmp_assign_source_120 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_120;
}
{
PyObject *tmp_assign_source_121;
tmp_assign_source_121 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_121;
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_73 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_122 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_122;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_condition_result_50 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_123;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_51;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_tuple_element_51 = mod_consts.const_str_plain_PingReceived;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_51 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 407;
tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_123;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_76 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_52;
PyObject *tmp_expression_value_77;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_52 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_16, tmp_default_value_13);
if (tmp_tuple_element_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_78;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_tuple_element_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_52);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_42;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_42;
}
frame_frame_h2$events->m_frame.f_lineno = 407;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 407;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_42;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_124;
tmp_assign_source_124 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_124;
}
branch_end_37:;
{
PyObject *tmp_assign_source_125;
PyObject *tmp_called_value_35;
PyObject *tmp_direct_call_arg1_20;
PyObject *tmp_direct_call_arg2_7;
PyObject *tmp_args_element_value_8;
tmp_direct_call_arg1_20 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;

    goto try_except_handler_42;
}
tmp_direct_call_arg2_7 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;

    goto try_except_handler_42;
}
Py_INCREF(tmp_direct_call_arg1_20);
Py_INCREF(tmp_direct_call_arg2_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_20, tmp_direct_call_arg2_7};
    tmp_called_value_35 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;

    goto try_except_handler_42;
}
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_h2$events$$$class__14_PingReceived_407 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_digest_51823a7615f3dd310df20fc66a96f431;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_plain_PingReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_int_pos_407;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
frame_frame_h2$events$$$class__14_PingReceived_9 = MAKE_CLASS_FRAME(tstate, code_objects_b4531cd2288f812f675c464140b834fa, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__14_PingReceived_9);
assert(Py_REFCNT(frame_frame_h2$events$$$class__14_PingReceived_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = const_str_plain_bytes;
tmp_ass_subscribed_23 = PyObject_GetItem(locals_h2$events$$$class__14_PingReceived_407, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_ping_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
CHECK_OBJECT(tmp_ass_subscribed_23);
Py_DECREF(tmp_ass_subscribed_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__10___repr__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__14_PingReceived_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__14_PingReceived_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__14_PingReceived_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__14_PingReceived_9,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__14_PingReceived_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_44;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__14_PingReceived_407, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
branch_no_39:;
{
PyObject *tmp_assign_source_126;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_53;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_36 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_53 = mod_consts.const_str_plain_PingReceived;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_53 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
tmp_tuple_element_53 = locals_h2$events$$$class__14_PingReceived_407;
PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 407;
tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;

    goto try_except_handler_44;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_126;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_args_element_value_8 = outline_13_var___class__;
Py_INCREF(tmp_args_element_value_8);
goto try_return_handler_44;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
Py_DECREF(locals_h2$events$$$class__14_PingReceived_407);
locals_h2$events$$$class__14_PingReceived_407 = NULL;
goto try_return_handler_43;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__14_PingReceived_407);
locals_h2$events$$$class__14_PingReceived_407 = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto try_except_handler_43;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 407;
goto try_except_handler_42;
outline_result_28:;
frame_frame_h2$events->m_frame.f_lineno = 406;
tmp_assign_source_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;

    goto try_except_handler_42;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_PingReceived, tmp_assign_source_125);
}
goto try_end_16;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
Py_DECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
Py_DECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
Py_DECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
Py_DECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_27;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_27:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_127;
PyObject *tmp_tuple_element_54;
tmp_tuple_element_54 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_assign_source_127 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_127, 0, tmp_tuple_element_54);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_127;
}
{
PyObject *tmp_assign_source_128;
PyObject *tmp_direct_call_arg1_21;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_21 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_21);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_21};
    tmp_assign_source_128 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_128;
}
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_129;
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_79 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_130 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_130;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_condition_result_54 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_54 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_assign_source_131;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_tuple_element_55 = mod_consts.const_str_plain_PingAckReceived;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_55 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 424;
tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_131;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_55 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_55 != false) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_56;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_56 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_17, tmp_default_value_14);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_56);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_45;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_45;
}
frame_frame_h2$events->m_frame.f_lineno = 424;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 424;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_45;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_132;
tmp_assign_source_132 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_132;
}
branch_end_40:;
{
PyObject *tmp_assign_source_133;
PyObject *tmp_called_value_38;
PyObject *tmp_direct_call_arg1_22;
PyObject *tmp_direct_call_arg2_8;
PyObject *tmp_args_element_value_9;
tmp_direct_call_arg1_22 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;

    goto try_except_handler_45;
}
tmp_direct_call_arg2_8 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;

    goto try_except_handler_45;
}
Py_INCREF(tmp_direct_call_arg1_22);
Py_INCREF(tmp_direct_call_arg2_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22, tmp_direct_call_arg2_8};
    tmp_called_value_38 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;

    goto try_except_handler_45;
}
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_h2$events$$$class__15_PingAckReceived_424 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_digest_f1cefe6b70da5533b20e4529991a3221;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_plain_PingAckReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_int_pos_424;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
frame_frame_h2$events$$$class__15_PingAckReceived_10 = MAKE_CLASS_FRAME(tstate, code_objects_5caebc52412309a5d1453c1f22497a30, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__15_PingAckReceived_10);
assert(Py_REFCNT(frame_frame_h2$events$$$class__15_PingAckReceived_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_24;
PyObject *tmp_ass_subscribed_24;
PyObject *tmp_ass_subscript_24;
tmp_ass_subvalue_24 = const_str_plain_bytes;
tmp_ass_subscribed_24 = PyObject_GetItem(locals_h2$events$$$class__15_PingAckReceived_424, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_24 = mod_consts.const_str_plain_ping_data;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
CHECK_OBJECT(tmp_ass_subscribed_24);
Py_DECREF(tmp_ass_subscribed_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__11___repr__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__15_PingAckReceived_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__15_PingAckReceived_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__15_PingAckReceived_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__15_PingAckReceived_10,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__15_PingAckReceived_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_47;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__15_PingAckReceived_424, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
branch_no_42:;
{
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_39;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_57;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_39 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_57 = mod_consts.const_str_plain_PingAckReceived;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_57 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
tmp_tuple_element_57 = locals_h2$events$$$class__15_PingAckReceived_424;
PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 424;
tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;

    goto try_except_handler_47;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_134;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_args_element_value_9 = outline_14_var___class__;
Py_INCREF(tmp_args_element_value_9);
goto try_return_handler_47;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
Py_DECREF(locals_h2$events$$$class__15_PingAckReceived_424);
locals_h2$events$$$class__15_PingAckReceived_424 = NULL;
goto try_return_handler_46;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__15_PingAckReceived_424);
locals_h2$events$$$class__15_PingAckReceived_424 = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto try_except_handler_46;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 424;
goto try_except_handler_45;
outline_result_30:;
frame_frame_h2$events->m_frame.f_lineno = 423;
tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;

    goto try_except_handler_45;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_PingAckReceived, tmp_assign_source_133);
}
goto try_end_17;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
Py_DECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
Py_DECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
Py_DECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
Py_DECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_29;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_29:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}
{
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_135;
PyObject *tmp_tuple_element_58;
tmp_tuple_element_58 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_assign_source_135 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_135, 0, tmp_tuple_element_58);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_direct_call_arg1_23;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_23 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_136 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_136;
}
{
PyObject *tmp_assign_source_137;
tmp_assign_source_137 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_137;
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_85 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_138 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_138;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_86 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_condition_result_58 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_58 != false) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
{
PyObject *tmp_assign_source_139;
PyObject *tmp_called_value_40;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_59;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_tuple_element_59 = mod_consts.const_str_plain_StreamEnded;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_59 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 444;
tmp_assign_source_139 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_139;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_88 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
assert(!(tmp_res == -1));
tmp_condition_result_59 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_59 != false) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
PyObject *tmp_raise_type_15;
PyObject *tmp_make_exception_arg_15;
PyObject *tmp_mod_expr_left_15;
PyObject *tmp_mod_expr_right_15;
PyObject *tmp_tuple_element_60;
PyObject *tmp_expression_value_89;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_60 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_18, tmp_default_value_15);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_90;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_60);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_48;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_48;
}
frame_frame_h2$events->m_frame.f_lineno = 444;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 444;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_48;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_140;
}
branch_end_43:;
{
PyObject *tmp_assign_source_141;
PyObject *tmp_called_value_41;
PyObject *tmp_direct_call_arg1_24;
PyObject *tmp_direct_call_arg2_9;
PyObject *tmp_args_element_value_10;
tmp_direct_call_arg1_24 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;

    goto try_except_handler_48;
}
tmp_direct_call_arg2_9 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;

    goto try_except_handler_48;
}
Py_INCREF(tmp_direct_call_arg1_24);
Py_INCREF(tmp_direct_call_arg2_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24, tmp_direct_call_arg2_9};
    tmp_called_value_41 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_48;
}
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_h2$events$$$class__16_StreamEnded_444 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_str_digest_523afa7f541d3d28501ac226f73e73f7;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamEnded;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
tmp_dictset_value = mod_consts.const_int_pos_444;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
frame_frame_h2$events$$$class__16_StreamEnded_11 = MAKE_CLASS_FRAME(tstate, code_objects_12a585cc99676e9fe6806bff98ed987c, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__16_StreamEnded_11);
assert(Py_REFCNT(frame_frame_h2$events$$$class__16_StreamEnded_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_25;
PyObject *tmp_ass_subscribed_25;
PyObject *tmp_ass_subscript_25;
tmp_ass_subvalue_25 = const_str_plain_int;
tmp_ass_subscribed_25 = PyObject_GetItem(locals_h2$events$$$class__16_StreamEnded_444, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 451;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_25 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
CHECK_OBJECT(tmp_ass_subscribed_25);
Py_DECREF(tmp_ass_subscribed_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__12___repr__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__16_StreamEnded_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__16_StreamEnded_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__16_StreamEnded_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__16_StreamEnded_11,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__16_StreamEnded_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_50;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__16_StreamEnded_444, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
branch_no_45:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_42;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_42 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_61 = mod_consts.const_str_plain_StreamEnded;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
tmp_tuple_element_61 = locals_h2$events$$$class__16_StreamEnded_444;
PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 444;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;

    goto try_except_handler_50;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_142;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_args_element_value_10 = outline_15_var___class__;
Py_INCREF(tmp_args_element_value_10);
goto try_return_handler_50;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
Py_DECREF(locals_h2$events$$$class__16_StreamEnded_444);
locals_h2$events$$$class__16_StreamEnded_444 = NULL;
goto try_return_handler_49;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__16_StreamEnded_444);
locals_h2$events$$$class__16_StreamEnded_444 = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto try_except_handler_49;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 444;
goto try_except_handler_48;
outline_result_32:;
frame_frame_h2$events->m_frame.f_lineno = 443;
tmp_assign_source_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;

    goto try_except_handler_48;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamEnded, tmp_assign_source_141);
}
goto try_end_18;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
Py_DECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
Py_DECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
Py_DECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_31;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_31:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_outline_return_value_17;
// Tried code:
{
PyObject *tmp_assign_source_143;
PyObject *tmp_tuple_element_62;
tmp_tuple_element_62 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_assign_source_143 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_143, 0, tmp_tuple_element_62);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_143;
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_direct_call_arg1_25;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_25 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_25);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_25};
    tmp_assign_source_144 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_144;
}
{
PyObject *tmp_assign_source_145;
tmp_assign_source_145 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_145;
}
{
PyObject *tmp_assign_source_146;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_91;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_91 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_146 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_146;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_92;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_condition_result_62 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_62 != false) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
{
PyObject *tmp_assign_source_147;
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_63;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_tuple_element_63 = mod_consts.const_str_plain_StreamReset;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_63 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 459;
tmp_assign_source_147 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_147;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_94 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
assert(!(tmp_res == -1));
tmp_condition_result_63 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_63 != false) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_raise_type_16;
PyObject *tmp_make_exception_arg_16;
PyObject *tmp_mod_expr_left_16;
PyObject *tmp_mod_expr_right_16;
PyObject *tmp_tuple_element_64;
PyObject *tmp_expression_value_95;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_64 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_19, tmp_default_value_16);
if (tmp_tuple_element_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_96;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_tuple_element_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_64);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_51;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_51;
}
frame_frame_h2$events->m_frame.f_lineno = 459;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 459;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_51;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_148;
}
branch_end_46:;
{
PyObject *tmp_assign_source_149;
PyObject *tmp_called_value_44;
PyObject *tmp_direct_call_arg1_26;
PyObject *tmp_direct_call_arg2_10;
PyObject *tmp_args_element_value_11;
tmp_direct_call_arg1_26 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;

    goto try_except_handler_51;
}
tmp_direct_call_arg2_10 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;

    goto try_except_handler_51;
}
Py_INCREF(tmp_direct_call_arg1_26);
Py_INCREF(tmp_direct_call_arg2_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_26, tmp_direct_call_arg2_10};
    tmp_called_value_44 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;

    goto try_except_handler_51;
}
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_h2$events$$$class__17_StreamReset_459 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_str_digest_652d12b7e4c292d77c44861c7925faf5;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamReset;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
tmp_dictset_value = mod_consts.const_int_pos_459;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
frame_frame_h2$events$$$class__17_StreamReset_12 = MAKE_CLASS_FRAME(tstate, code_objects_9b35ddbd93cc8dd0690bbb884b5bdbc4, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__17_StreamReset_12);
assert(Py_REFCNT(frame_frame_h2$events$$$class__17_StreamReset_12) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_26;
PyObject *tmp_ass_subscribed_26;
PyObject *tmp_ass_subscript_26;
tmp_ass_subvalue_26 = const_str_plain_int;
tmp_ass_subscribed_26 = PyObject_GetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 470;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_26 = mod_consts.const_str_plain_stream_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
CHECK_OBJECT(tmp_ass_subscribed_26);
Py_DECREF(tmp_ass_subscribed_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
tmp_dictset_value = PyObject_GetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain__LAZY_INIT);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_h2$events$_LAZY_INIT(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LAZY_INIT);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain_error_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
{
PyObject *tmp_ass_subvalue_27;
PyObject *tmp_ass_subscribed_27;
PyObject *tmp_ass_subscript_27;
tmp_ass_subvalue_27 = mod_consts.const_str_digest_f7cc717a0dc4fc92a34b10939905ab4d;
tmp_ass_subscribed_27 = PyObject_GetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 475;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_27 = mod_consts.const_str_plain_error_code;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
CHECK_OBJECT(tmp_ass_subscribed_27);
Py_DECREF(tmp_ass_subscribed_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
tmp_dictset_value = Py_True;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain_remote_reset, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
{
PyObject *tmp_ass_subvalue_28;
PyObject *tmp_ass_subscribed_28;
PyObject *tmp_ass_subscript_28;
tmp_ass_subvalue_28 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_28 = PyObject_GetItem(locals_h2$events$$$class__17_StreamReset_459, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 480;
type_description_2 = "o";
    goto frame_exception_exit_12;
}

if (tmp_ass_subscribed_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_ass_subscript_28 = mod_consts.const_str_plain_remote_reset;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
CHECK_OBJECT(tmp_ass_subscribed_28);
Py_DECREF(tmp_ass_subscribed_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__13___repr__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__17_StreamReset_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__17_StreamReset_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__17_StreamReset_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__17_StreamReset_12,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__17_StreamReset_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_53;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__17_StreamReset_459, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
branch_no_48:;
{
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_45;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_65;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_45 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_65 = mod_consts.const_str_plain_StreamReset;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_65 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
tmp_tuple_element_65 = locals_h2$events$$$class__17_StreamReset_459;
PyTuple_SET_ITEM0(tmp_args_value_33, 2, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 459;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;

    goto try_except_handler_53;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_150;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_args_element_value_11 = outline_16_var___class__;
Py_INCREF(tmp_args_element_value_11);
goto try_return_handler_53;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_53:;
Py_DECREF(locals_h2$events$$$class__17_StreamReset_459);
locals_h2$events$$$class__17_StreamReset_459 = NULL;
goto try_return_handler_52;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__17_StreamReset_459);
locals_h2$events$$$class__17_StreamReset_459 = NULL;
// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto try_except_handler_52;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_52:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 459;
goto try_except_handler_51;
outline_result_34:;
frame_frame_h2$events->m_frame.f_lineno = 458;
tmp_assign_source_149 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;

    goto try_except_handler_51;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamReset, tmp_assign_source_149);
}
goto try_end_19;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
Py_DECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
Py_DECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
Py_DECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
Py_DECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
tmp_outline_return_value_17 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_17);
goto outline_result_33;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_33:;
CHECK_OBJECT(tmp_outline_return_value_17);
Py_DECREF(tmp_outline_return_value_17);
}
{
PyObject *tmp_outline_return_value_18;
// Tried code:
{
PyObject *tmp_assign_source_151;
PyObject *tmp_tuple_element_66;
tmp_tuple_element_66 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_assign_source_151 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_151, 0, tmp_tuple_element_66);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_151;
}
{
PyObject *tmp_assign_source_152;
PyObject *tmp_direct_call_arg1_27;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_27 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_27);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_27};
    tmp_assign_source_152 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_152;
}
{
PyObject *tmp_assign_source_153;
tmp_assign_source_153 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_153;
}
{
PyObject *tmp_assign_source_154;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_154 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_154 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_154;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_condition_result_66 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_66 != false) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
{
PyObject *tmp_assign_source_155;
PyObject *tmp_called_value_46;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_67;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_tuple_element_67 = mod_consts.const_str_plain_PushedStreamReceived;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_67 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 489;
tmp_assign_source_155 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_155;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
assert(!(tmp_res == -1));
tmp_condition_result_67 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_67 != false) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_17;
PyObject *tmp_mod_expr_left_17;
PyObject *tmp_mod_expr_right_17;
PyObject *tmp_tuple_element_68;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_68 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_20, tmp_default_value_17);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_68);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_54;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_54;
}
frame_frame_h2$events->m_frame.f_lineno = 489;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 489;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_54;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_156;
}
branch_end_49:;
{
PyObject *tmp_assign_source_157;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_h2$events$$$class__18_PushedStreamReceived_489 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_str_digest_cb9b5042932f06c5386f33bc4d6cee86;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_str_plain_PushedStreamReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
tmp_dictset_value = mod_consts.const_int_pos_489;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
frame_frame_h2$events$$$class__18_PushedStreamReceived_13 = MAKE_CLASS_FRAME(tstate, code_objects_14224cfcdca4503b6541f1c0f57fa4c6, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__18_PushedStreamReceived_13);
assert(Py_REFCNT(frame_frame_h2$events$$$class__18_PushedStreamReceived_13) == 2);

// Framed code:
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__14___init__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__15___repr__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__18_PushedStreamReceived_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__18_PushedStreamReceived_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__18_PushedStreamReceived_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__18_PushedStreamReceived_13,
    type_description_2,
    outline_17_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__18_PushedStreamReceived_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_56;
skip_nested_handling_12:;
tmp_dictset_value = mod_consts.const_tuple_0eb899d202176d56444adc3fc7ffd4f1_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__18_PushedStreamReceived_489, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
branch_no_51:;
{
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_47;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_69;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_47 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_69 = mod_consts.const_str_plain_PushedStreamReceived;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_69 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
tmp_tuple_element_69 = locals_h2$events$$$class__18_PushedStreamReceived_489;
PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 489;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto try_except_handler_56;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_158;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_157 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_157);
goto try_return_handler_56;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_56:;
Py_DECREF(locals_h2$events$$$class__18_PushedStreamReceived_489);
locals_h2$events$$$class__18_PushedStreamReceived_489 = NULL;
goto try_return_handler_55;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__18_PushedStreamReceived_489);
locals_h2$events$$$class__18_PushedStreamReceived_489 = NULL;
// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto try_except_handler_55;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_55:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 489;
goto try_except_handler_54;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_PushedStreamReceived, tmp_assign_source_157);
}
goto try_end_20;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
Py_DECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
Py_DECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
Py_DECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
Py_DECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
tmp_outline_return_value_18 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_18);
goto outline_result_35;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_35:;
CHECK_OBJECT(tmp_outline_return_value_18);
Py_DECREF(tmp_outline_return_value_18);
}
{
PyObject *tmp_outline_return_value_19;
// Tried code:
{
PyObject *tmp_assign_source_159;
PyObject *tmp_tuple_element_70;
tmp_tuple_element_70 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_assign_source_159 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_159, 0, tmp_tuple_element_70);
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_159;
}
{
PyObject *tmp_assign_source_160;
PyObject *tmp_direct_call_arg1_28;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_28 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_28);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_28};
    tmp_assign_source_160 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_160;
}
{
PyObject *tmp_assign_source_161;
tmp_assign_source_161 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_161;
}
{
PyObject *tmp_assign_source_162;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_103 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_162 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_162;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_104;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_condition_result_70 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_70 != false) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
{
PyObject *tmp_assign_source_163;
PyObject *tmp_called_value_48;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_71;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_tuple_element_71 = mod_consts.const_str_plain_SettingsAcknowledged;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_71 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 513;
tmp_assign_source_163 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_163;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_106 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_condition_result_71 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_18;
PyObject *tmp_mod_expr_left_18;
PyObject *tmp_mod_expr_right_18;
PyObject *tmp_tuple_element_72;
PyObject *tmp_expression_value_107;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_72 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_21, tmp_default_value_18);
if (tmp_tuple_element_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_108;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_tuple_element_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_72);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_57;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_57;
}
frame_frame_h2$events->m_frame.f_lineno = 513;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 513;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_57;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_164;
}
branch_end_52:;
{
PyObject *tmp_assign_source_165;
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_h2$events$$$class__19_SettingsAcknowledged_513 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
tmp_dictset_value = mod_consts.const_str_digest_705527f9e9f68196ab57155f8414df25;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
tmp_dictset_value = mod_consts.const_str_plain_SettingsAcknowledged;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
tmp_dictset_value = mod_consts.const_int_pos_513;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
frame_frame_h2$events$$$class__19_SettingsAcknowledged_14 = MAKE_CLASS_FRAME(tstate, code_objects_789f2b72de3a50414ada6bf008857e38, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__19_SettingsAcknowledged_14);
assert(Py_REFCNT(frame_frame_h2$events$$$class__19_SettingsAcknowledged_14) == 2);

// Framed code:
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__16___init__(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__17___repr__(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__19_SettingsAcknowledged_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__19_SettingsAcknowledged_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__19_SettingsAcknowledged_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__19_SettingsAcknowledged_14,
    type_description_2,
    outline_18_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__19_SettingsAcknowledged_14);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_59;
skip_nested_handling_13:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_changed_settings_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_19__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__19_SettingsAcknowledged_513, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
branch_no_54:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_49;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_73;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_49 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_73 = mod_consts.const_str_plain_SettingsAcknowledged;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_73 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_73);
tmp_tuple_element_73 = locals_h2$events$$$class__19_SettingsAcknowledged_513;
PyTuple_SET_ITEM0(tmp_args_value_37, 2, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 513;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto try_except_handler_59;
}
assert(outline_18_var___class__ == NULL);
outline_18_var___class__ = tmp_assign_source_166;
}
CHECK_OBJECT(outline_18_var___class__);
tmp_assign_source_165 = outline_18_var___class__;
Py_INCREF(tmp_assign_source_165);
goto try_return_handler_59;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_59:;
Py_DECREF(locals_h2$events$$$class__19_SettingsAcknowledged_513);
locals_h2$events$$$class__19_SettingsAcknowledged_513 = NULL;
goto try_return_handler_58;
// Exception handler code:
try_except_handler_59:;
exception_keeper_lineno_57 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_57 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__19_SettingsAcknowledged_513);
locals_h2$events$$$class__19_SettingsAcknowledged_513 = NULL;
// Re-raise.
exception_state = exception_keeper_name_57;
exception_lineno = exception_keeper_lineno_57;

goto try_except_handler_58;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_58:;
CHECK_OBJECT(outline_18_var___class__);
CHECK_OBJECT(outline_18_var___class__);
Py_DECREF(outline_18_var___class__);
outline_18_var___class__ = NULL;
goto outline_result_38;
// Exception handler code:
try_except_handler_58:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_58;
exception_lineno = exception_keeper_lineno_58;

goto outline_exception_19;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_19:;
exception_lineno = 513;
goto try_except_handler_57;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_SettingsAcknowledged, tmp_assign_source_165);
}
goto try_end_21;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_59 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_59 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_59;
exception_lineno = exception_keeper_lineno_59;

goto frame_exception_exit_1;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
Py_DECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
Py_DECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
Py_DECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
Py_DECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
tmp_outline_return_value_19 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_19);
goto outline_result_37;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_37:;
CHECK_OBJECT(tmp_outline_return_value_19);
Py_DECREF(tmp_outline_return_value_19);
}
{
PyObject *tmp_outline_return_value_20;
// Tried code:
{
PyObject *tmp_assign_source_167;
PyObject *tmp_tuple_element_74;
tmp_tuple_element_74 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_assign_source_167 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_167, 0, tmp_tuple_element_74);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_167;
}
{
PyObject *tmp_assign_source_168;
PyObject *tmp_direct_call_arg1_29;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_29 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_29);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_29};
    tmp_assign_source_168 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_168 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_168;
}
{
PyObject *tmp_assign_source_169;
tmp_assign_source_169 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_169;
}
{
PyObject *tmp_assign_source_170;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_73;
int tmp_truth_name_19;
PyObject *tmp_type_arg_37;
PyObject *tmp_expression_value_109;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_109 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
if (tmp_type_arg_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_170 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_170 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_170;
}
{
bool tmp_condition_result_74;
PyObject *tmp_expression_value_110;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_110 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_condition_result_74 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_74 != false) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
{
PyObject *tmp_assign_source_171;
PyObject *tmp_called_value_50;
PyObject *tmp_expression_value_111;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_75;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_111 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_tuple_element_75 = mod_consts.const_str_plain_PriorityUpdated;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_75 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 532;
tmp_assign_source_171 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_called_value_50);
Py_DECREF(tmp_called_value_50);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_171;
}
{
bool tmp_condition_result_75;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_112;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_112 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
assert(!(tmp_res == -1));
tmp_condition_result_75 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_75 != false) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_19;
PyObject *tmp_mod_expr_left_19;
PyObject *tmp_mod_expr_right_19;
PyObject *tmp_tuple_element_76;
PyObject *tmp_expression_value_113;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_113 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_76 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_22, tmp_default_value_19);
if (tmp_tuple_element_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_114;
PyObject *tmp_type_arg_38;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_76);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_38 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
assert(!(tmp_expression_value_114 == NULL));
tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_tuple_element_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_76);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_60;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_60;
}
frame_frame_h2$events->m_frame.f_lineno = 532;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 532;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_60;
}
branch_no_56:;
goto branch_end_55;
branch_no_55:;
{
PyObject *tmp_assign_source_172;
tmp_assign_source_172 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_172;
}
branch_end_55:;
{
PyObject *tmp_assign_source_173;
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_h2$events$$$class__20_PriorityUpdated_532 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
tmp_dictset_value = mod_consts.const_str_digest_eab17eb3ec928097b6d3100d227ff88c;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
tmp_dictset_value = mod_consts.const_str_plain_PriorityUpdated;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
tmp_dictset_value = mod_consts.const_int_pos_532;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
frame_frame_h2$events$$$class__20_PriorityUpdated_15 = MAKE_CLASS_FRAME(tstate, code_objects_5b0fca5028656c316f63db2ca951a5df, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__20_PriorityUpdated_15);
assert(Py_REFCNT(frame_frame_h2$events$$$class__20_PriorityUpdated_15) == 2);

// Framed code:
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__18___init__(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__19___repr__(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__20_PriorityUpdated_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__20_PriorityUpdated_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__20_PriorityUpdated_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__20_PriorityUpdated_15,
    type_description_2,
    outline_19_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__20_PriorityUpdated_15);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_62;
skip_nested_handling_14:;
tmp_dictset_value = mod_consts.const_tuple_58473301b6228bc6959137917674927c_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
{
nuitka_bool tmp_condition_result_76;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_19 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_19 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_20__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__20_PriorityUpdated_532, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
branch_no_57:;
{
PyObject *tmp_assign_source_174;
PyObject *tmp_called_value_51;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_77;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_51 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_77 = mod_consts.const_str_plain_PriorityUpdated;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_77 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_77);
tmp_tuple_element_77 = locals_h2$events$$$class__20_PriorityUpdated_532;
PyTuple_SET_ITEM0(tmp_args_value_39, 2, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 532;
tmp_assign_source_174 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_62;
}
assert(outline_19_var___class__ == NULL);
outline_19_var___class__ = tmp_assign_source_174;
}
CHECK_OBJECT(outline_19_var___class__);
tmp_assign_source_173 = outline_19_var___class__;
Py_INCREF(tmp_assign_source_173);
goto try_return_handler_62;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_62:;
Py_DECREF(locals_h2$events$$$class__20_PriorityUpdated_532);
locals_h2$events$$$class__20_PriorityUpdated_532 = NULL;
goto try_return_handler_61;
// Exception handler code:
try_except_handler_62:;
exception_keeper_lineno_60 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_60 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__20_PriorityUpdated_532);
locals_h2$events$$$class__20_PriorityUpdated_532 = NULL;
// Re-raise.
exception_state = exception_keeper_name_60;
exception_lineno = exception_keeper_lineno_60;

goto try_except_handler_61;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_61:;
CHECK_OBJECT(outline_19_var___class__);
CHECK_OBJECT(outline_19_var___class__);
Py_DECREF(outline_19_var___class__);
outline_19_var___class__ = NULL;
goto outline_result_40;
// Exception handler code:
try_except_handler_61:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_61;
exception_lineno = exception_keeper_lineno_61;

goto outline_exception_20;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_20:;
exception_lineno = 532;
goto try_except_handler_60;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_PriorityUpdated, tmp_assign_source_173);
}
goto try_end_22;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_62 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_62 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_62;
exception_lineno = exception_keeper_lineno_62;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
Py_DECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
Py_DECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
Py_DECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
Py_DECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
tmp_outline_return_value_20 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_20);
goto outline_result_39;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_39:;
CHECK_OBJECT(tmp_outline_return_value_20);
Py_DECREF(tmp_outline_return_value_20);
}
{
PyObject *tmp_outline_return_value_21;
// Tried code:
{
PyObject *tmp_assign_source_175;
PyObject *tmp_tuple_element_78;
tmp_tuple_element_78 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_assign_source_175 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_175, 0, tmp_tuple_element_78);
assert(tmp_class_container$class_creation_21__bases_orig == NULL);
tmp_class_container$class_creation_21__bases_orig = tmp_assign_source_175;
}
{
PyObject *tmp_assign_source_176;
PyObject *tmp_direct_call_arg1_30;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_direct_call_arg1_30 = tmp_class_container$class_creation_21__bases_orig;
Py_INCREF(tmp_direct_call_arg1_30);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_30};
    tmp_assign_source_176 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_176 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__bases == NULL);
tmp_class_container$class_creation_21__bases = tmp_assign_source_176;
}
{
PyObject *tmp_assign_source_177;
tmp_assign_source_177 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__class_decl_dict == NULL);
tmp_class_container$class_creation_21__class_decl_dict = tmp_assign_source_177;
}
{
PyObject *tmp_assign_source_178;
PyObject *tmp_metaclass_value_20;
nuitka_bool tmp_condition_result_77;
int tmp_truth_name_20;
PyObject *tmp_type_arg_39;
PyObject *tmp_expression_value_115;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_container$class_creation_21__bases);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_20;
} else {
    goto condexpr_false_20;
}
condexpr_true_20:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_expression_value_115 = tmp_class_container$class_creation_21__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
if (tmp_type_arg_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
CHECK_OBJECT(tmp_type_arg_39);
Py_DECREF(tmp_type_arg_39);
if (tmp_metaclass_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
goto condexpr_end_20;
condexpr_false_20:;
tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_20);
condexpr_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_21__bases;
tmp_assign_source_178 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
CHECK_OBJECT(tmp_metaclass_value_20);
Py_DECREF(tmp_metaclass_value_20);
if (tmp_assign_source_178 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__metaclass == NULL);
tmp_class_container$class_creation_21__metaclass = tmp_assign_source_178;
}
{
bool tmp_condition_result_78;
PyObject *tmp_expression_value_116;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_21__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_condition_result_78 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_78 != false) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
{
PyObject *tmp_assign_source_179;
PyObject *tmp_called_value_52;
PyObject *tmp_expression_value_117;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_79;
PyObject *tmp_kwargs_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_117 = tmp_class_container$class_creation_21__metaclass;
tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_tuple_element_79 = mod_consts.const_str_plain_ConnectionTerminated;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_79 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_79);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 566;
tmp_assign_source_179 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_called_value_52);
Py_DECREF(tmp_called_value_52);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_179;
}
{
bool tmp_condition_result_79;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_118;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_expression_value_118 = tmp_class_container$class_creation_21__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
assert(!(tmp_res == -1));
tmp_condition_result_79 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_79 != false) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_raise_type_20;
PyObject *tmp_make_exception_arg_20;
PyObject *tmp_mod_expr_left_20;
PyObject *tmp_mod_expr_right_20;
PyObject *tmp_tuple_element_80;
PyObject *tmp_expression_value_119;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_119 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_80 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_23, tmp_default_value_20);
if (tmp_tuple_element_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_120;
PyObject *tmp_type_arg_40;
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_80);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_type_arg_40 = tmp_class_container$class_creation_21__prepared;
tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
assert(!(tmp_expression_value_120 == NULL));
tmp_tuple_element_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_tuple_element_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_80);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_20);
goto try_except_handler_63;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
CHECK_OBJECT(tmp_mod_expr_right_20);
Py_DECREF(tmp_mod_expr_right_20);
if (tmp_make_exception_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_63;
}
frame_frame_h2$events->m_frame.f_lineno = 566;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 566;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_63;
}
branch_no_59:;
goto branch_end_58;
branch_no_58:;
{
PyObject *tmp_assign_source_180;
tmp_assign_source_180 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_180;
}
branch_end_58:;
{
PyObject *tmp_assign_source_181;
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_h2$events$$$class__21_ConnectionTerminated_566 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
tmp_dictset_value = mod_consts.const_str_digest_008efb5275cd3450e81b25fb171352ea;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionTerminated;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
tmp_dictset_value = mod_consts.const_int_pos_566;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
frame_frame_h2$events$$$class__21_ConnectionTerminated_16 = MAKE_CLASS_FRAME(tstate, code_objects_3436398e35d748d7760de3ce53e5dac9, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__21_ConnectionTerminated_16);
assert(Py_REFCNT(frame_frame_h2$events$$$class__21_ConnectionTerminated_16) == 2);

// Framed code:
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__20___init__(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__21___repr__(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__21_ConnectionTerminated_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__21_ConnectionTerminated_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__21_ConnectionTerminated_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__21_ConnectionTerminated_16,
    type_description_2,
    outline_20_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__21_ConnectionTerminated_16);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_65;
skip_nested_handling_15:;
tmp_dictset_value = mod_consts.const_tuple_09f7e29dfc03dca69635f82feb6de62e_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_cmp_expr_left_20 = tmp_class_container$class_creation_21__bases;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_cmp_expr_right_20 = tmp_class_container$class_creation_21__bases_orig;
tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
    goto branch_yes_60;
} else {
    goto branch_no_60;
}
}
branch_yes_60:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_21__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__21_ConnectionTerminated_566, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
branch_no_60:;
{
PyObject *tmp_assign_source_182;
PyObject *tmp_called_value_53;
PyObject *tmp_args_value_41;
PyObject *tmp_tuple_element_81;
PyObject *tmp_kwargs_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_called_value_53 = tmp_class_container$class_creation_21__metaclass;
tmp_tuple_element_81 = mod_consts.const_str_plain_ConnectionTerminated;
tmp_args_value_41 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_81 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_81);
tmp_tuple_element_81 = locals_h2$events$$$class__21_ConnectionTerminated_566;
PyTuple_SET_ITEM0(tmp_args_value_41, 2, tmp_tuple_element_81);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_41 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 566;
tmp_assign_source_182 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_41, tmp_kwargs_value_41);
CHECK_OBJECT(tmp_args_value_41);
Py_DECREF(tmp_args_value_41);
if (tmp_assign_source_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;

    goto try_except_handler_65;
}
assert(outline_20_var___class__ == NULL);
outline_20_var___class__ = tmp_assign_source_182;
}
CHECK_OBJECT(outline_20_var___class__);
tmp_assign_source_181 = outline_20_var___class__;
Py_INCREF(tmp_assign_source_181);
goto try_return_handler_65;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_65:;
Py_DECREF(locals_h2$events$$$class__21_ConnectionTerminated_566);
locals_h2$events$$$class__21_ConnectionTerminated_566 = NULL;
goto try_return_handler_64;
// Exception handler code:
try_except_handler_65:;
exception_keeper_lineno_63 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_63 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__21_ConnectionTerminated_566);
locals_h2$events$$$class__21_ConnectionTerminated_566 = NULL;
// Re-raise.
exception_state = exception_keeper_name_63;
exception_lineno = exception_keeper_lineno_63;

goto try_except_handler_64;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_64:;
CHECK_OBJECT(outline_20_var___class__);
CHECK_OBJECT(outline_20_var___class__);
Py_DECREF(outline_20_var___class__);
outline_20_var___class__ = NULL;
goto outline_result_42;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_64;
exception_lineno = exception_keeper_lineno_64;

goto outline_exception_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_21:;
exception_lineno = 566;
goto try_except_handler_63;
outline_result_42:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionTerminated, tmp_assign_source_181);
}
goto try_end_23;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_65 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_65 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_65;
exception_lineno = exception_keeper_lineno_65;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
Py_DECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
Py_DECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
Py_DECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
tmp_outline_return_value_21 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_21);
goto outline_result_41;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_41:;
CHECK_OBJECT(tmp_outline_return_value_21);
Py_DECREF(tmp_outline_return_value_21);
}
{
PyObject *tmp_outline_return_value_22;
// Tried code:
{
PyObject *tmp_assign_source_183;
PyObject *tmp_tuple_element_82;
tmp_tuple_element_82 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_assign_source_183 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_183, 0, tmp_tuple_element_82);
assert(tmp_class_container$class_creation_22__bases_orig == NULL);
tmp_class_container$class_creation_22__bases_orig = tmp_assign_source_183;
}
{
PyObject *tmp_assign_source_184;
PyObject *tmp_direct_call_arg1_31;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_direct_call_arg1_31 = tmp_class_container$class_creation_22__bases_orig;
Py_INCREF(tmp_direct_call_arg1_31);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_31};
    tmp_assign_source_184 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_184 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__bases == NULL);
tmp_class_container$class_creation_22__bases = tmp_assign_source_184;
}
{
PyObject *tmp_assign_source_185;
tmp_assign_source_185 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_185;
}
{
PyObject *tmp_assign_source_186;
PyObject *tmp_metaclass_value_21;
nuitka_bool tmp_condition_result_81;
int tmp_truth_name_21;
PyObject *tmp_type_arg_41;
PyObject *tmp_expression_value_121;
PyObject *tmp_subscript_value_21;
PyObject *tmp_bases_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_container$class_creation_22__bases);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_21;
} else {
    goto condexpr_false_21;
}
condexpr_true_21:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_expression_value_121 = tmp_class_container$class_creation_22__bases;
tmp_subscript_value_21 = const_int_0;
tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
if (tmp_type_arg_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
CHECK_OBJECT(tmp_type_arg_41);
Py_DECREF(tmp_type_arg_41);
if (tmp_metaclass_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
goto condexpr_end_21;
condexpr_false_21:;
tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_21);
condexpr_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_21 = tmp_class_container$class_creation_22__bases;
tmp_assign_source_186 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
CHECK_OBJECT(tmp_metaclass_value_21);
Py_DECREF(tmp_metaclass_value_21);
if (tmp_assign_source_186 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__metaclass == NULL);
tmp_class_container$class_creation_22__metaclass = tmp_assign_source_186;
}
{
bool tmp_condition_result_82;
PyObject *tmp_expression_value_122;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_22__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_condition_result_82 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_82 != false) {
    goto branch_yes_61;
} else {
    goto branch_no_61;
}
}
branch_yes_61:;
{
PyObject *tmp_assign_source_187;
PyObject *tmp_called_value_54;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_42;
PyObject *tmp_tuple_element_83;
PyObject *tmp_kwargs_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_22__metaclass;
tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_tuple_element_83 = mod_consts.const_str_plain_AlternativeServiceAvailable;
tmp_args_value_42 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_83 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_42 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 600;
tmp_assign_source_187 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_42, tmp_kwargs_value_42);
CHECK_OBJECT(tmp_called_value_54);
Py_DECREF(tmp_called_value_54);
CHECK_OBJECT(tmp_args_value_42);
Py_DECREF(tmp_args_value_42);
if (tmp_assign_source_187 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_187;
}
{
bool tmp_condition_result_83;
PyObject *tmp_operand_value_21;
PyObject *tmp_expression_value_124;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_expression_value_124 = tmp_class_container$class_creation_22__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
assert(!(tmp_res == -1));
tmp_condition_result_83 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_83 != false) {
    goto branch_yes_62;
} else {
    goto branch_no_62;
}
}
branch_yes_62:;
{
PyObject *tmp_raise_type_21;
PyObject *tmp_make_exception_arg_21;
PyObject *tmp_mod_expr_left_21;
PyObject *tmp_mod_expr_right_21;
PyObject *tmp_tuple_element_84;
PyObject *tmp_expression_value_125;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_21;
tmp_mod_expr_left_21 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_21 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_84 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_24, tmp_default_value_21);
if (tmp_tuple_element_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_126;
PyObject *tmp_type_arg_42;
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_type_arg_42 = tmp_class_container$class_creation_22__prepared;
tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_tuple_element_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_84);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_mod_expr_right_21);
goto try_except_handler_66;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_make_exception_arg_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
CHECK_OBJECT(tmp_mod_expr_right_21);
Py_DECREF(tmp_mod_expr_right_21);
if (tmp_make_exception_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_66;
}
frame_frame_h2$events->m_frame.f_lineno = 600;
tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_21);
CHECK_OBJECT(tmp_make_exception_arg_21);
Py_DECREF(tmp_make_exception_arg_21);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 600;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_66;
}
branch_no_62:;
goto branch_end_61;
branch_no_61:;
{
PyObject *tmp_assign_source_188;
tmp_assign_source_188 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_188;
}
branch_end_61:;
{
PyObject *tmp_assign_source_189;
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_h2$events$$$class__22_AlternativeServiceAvailable_600 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
tmp_dictset_value = mod_consts.const_str_digest_cc575cee702ff7a6b4881958670a6426;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
tmp_dictset_value = mod_consts.const_str_plain_AlternativeServiceAvailable;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
tmp_dictset_value = mod_consts.const_int_pos_600;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17 = MAKE_CLASS_FRAME(tstate, code_objects_a1b053b205970777f3adec545b3bccf2, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17);
assert(Py_REFCNT(frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17) == 2);

// Framed code:
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__22___init__(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__23___repr__(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_17:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17,
    type_description_2,
    outline_21_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__22_AlternativeServiceAvailable_17);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_16;
frame_no_exception_16:;
goto skip_nested_handling_16;
nested_frame_exit_16:;

goto try_except_handler_68;
skip_nested_handling_16:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_origin_str_plain_field_value_tuple;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
{
nuitka_bool tmp_condition_result_84;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_cmp_expr_left_21 = tmp_class_container$class_creation_22__bases;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_cmp_expr_right_21 = tmp_class_container$class_creation_22__bases_orig;
tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
    goto branch_yes_63;
} else {
    goto branch_no_63;
}
}
branch_yes_63:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_22__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__22_AlternativeServiceAvailable_600, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
branch_no_63:;
{
PyObject *tmp_assign_source_190;
PyObject *tmp_called_value_55;
PyObject *tmp_args_value_43;
PyObject *tmp_tuple_element_85;
PyObject *tmp_kwargs_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_called_value_55 = tmp_class_container$class_creation_22__metaclass;
tmp_tuple_element_85 = mod_consts.const_str_plain_AlternativeServiceAvailable;
tmp_args_value_43 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_85);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_85 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_85);
tmp_tuple_element_85 = locals_h2$events$$$class__22_AlternativeServiceAvailable_600;
PyTuple_SET_ITEM0(tmp_args_value_43, 2, tmp_tuple_element_85);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_43 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 600;
tmp_assign_source_190 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_43, tmp_kwargs_value_43);
CHECK_OBJECT(tmp_args_value_43);
Py_DECREF(tmp_args_value_43);
if (tmp_assign_source_190 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;

    goto try_except_handler_68;
}
assert(outline_21_var___class__ == NULL);
outline_21_var___class__ = tmp_assign_source_190;
}
CHECK_OBJECT(outline_21_var___class__);
tmp_assign_source_189 = outline_21_var___class__;
Py_INCREF(tmp_assign_source_189);
goto try_return_handler_68;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_68:;
Py_DECREF(locals_h2$events$$$class__22_AlternativeServiceAvailable_600);
locals_h2$events$$$class__22_AlternativeServiceAvailable_600 = NULL;
goto try_return_handler_67;
// Exception handler code:
try_except_handler_68:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__22_AlternativeServiceAvailable_600);
locals_h2$events$$$class__22_AlternativeServiceAvailable_600 = NULL;
// Re-raise.
exception_state = exception_keeper_name_66;
exception_lineno = exception_keeper_lineno_66;

goto try_except_handler_67;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_67:;
CHECK_OBJECT(outline_21_var___class__);
CHECK_OBJECT(outline_21_var___class__);
Py_DECREF(outline_21_var___class__);
outline_21_var___class__ = NULL;
goto outline_result_44;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_67;
exception_lineno = exception_keeper_lineno_67;

goto outline_exception_22;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_22:;
exception_lineno = 600;
goto try_except_handler_66;
outline_result_44:;
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_AlternativeServiceAvailable, tmp_assign_source_189);
}
goto try_end_24;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_68 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_68 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_68;
exception_lineno = exception_keeper_lineno_68;

goto frame_exception_exit_1;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
Py_DECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
Py_DECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
Py_DECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
tmp_outline_return_value_22 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_22);
goto outline_result_43;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_43:;
CHECK_OBJECT(tmp_outline_return_value_22);
Py_DECREF(tmp_outline_return_value_22);
}
{
PyObject *tmp_outline_return_value_23;
// Tried code:
{
PyObject *tmp_assign_source_191;
PyObject *tmp_tuple_element_86;
tmp_tuple_element_86 = module_var_accessor_h2$events$Event(tstate);
if (unlikely(tmp_tuple_element_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_tuple_element_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_assign_source_191 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_191, 0, tmp_tuple_element_86);
assert(tmp_class_container$class_creation_23__bases_orig == NULL);
tmp_class_container$class_creation_23__bases_orig = tmp_assign_source_191;
}
{
PyObject *tmp_assign_source_192;
PyObject *tmp_direct_call_arg1_32;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_direct_call_arg1_32 = tmp_class_container$class_creation_23__bases_orig;
Py_INCREF(tmp_direct_call_arg1_32);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_32};
    tmp_assign_source_192 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_192 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__bases == NULL);
tmp_class_container$class_creation_23__bases = tmp_assign_source_192;
}
{
PyObject *tmp_assign_source_193;
tmp_assign_source_193 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__class_decl_dict == NULL);
tmp_class_container$class_creation_23__class_decl_dict = tmp_assign_source_193;
}
{
PyObject *tmp_assign_source_194;
PyObject *tmp_metaclass_value_22;
nuitka_bool tmp_condition_result_85;
int tmp_truth_name_22;
PyObject *tmp_type_arg_43;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_22;
PyObject *tmp_bases_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_container$class_creation_23__bases);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_22;
} else {
    goto condexpr_false_22;
}
condexpr_true_22:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_expression_value_127 = tmp_class_container$class_creation_23__bases;
tmp_subscript_value_22 = const_int_0;
tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
if (tmp_type_arg_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
CHECK_OBJECT(tmp_type_arg_43);
Py_DECREF(tmp_type_arg_43);
if (tmp_metaclass_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
goto condexpr_end_22;
condexpr_false_22:;
tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_22);
condexpr_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_23__bases;
tmp_assign_source_194 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
CHECK_OBJECT(tmp_metaclass_value_22);
Py_DECREF(tmp_metaclass_value_22);
if (tmp_assign_source_194 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__metaclass == NULL);
tmp_class_container$class_creation_23__metaclass = tmp_assign_source_194;
}
{
bool tmp_condition_result_86;
PyObject *tmp_expression_value_128;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_128 = tmp_class_container$class_creation_23__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_condition_result_86 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_86 != false) {
    goto branch_yes_64;
} else {
    goto branch_no_64;
}
}
branch_yes_64:;
{
PyObject *tmp_assign_source_195;
PyObject *tmp_called_value_56;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_value_44;
PyObject *tmp_tuple_element_87;
PyObject *tmp_kwargs_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_23__metaclass;
tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_tuple_element_87 = mod_consts.const_str_plain_UnknownFrameReceived;
tmp_args_value_44 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_87 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_44 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 646;
tmp_assign_source_195 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_44, tmp_kwargs_value_44);
CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_value_44);
Py_DECREF(tmp_args_value_44);
if (tmp_assign_source_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_195;
}
{
bool tmp_condition_result_87;
PyObject *tmp_operand_value_22;
PyObject *tmp_expression_value_130;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_expression_value_130 = tmp_class_container$class_creation_23__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
assert(!(tmp_res == -1));
tmp_condition_result_87 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_87 != false) {
    goto branch_yes_65;
} else {
    goto branch_no_65;
}
}
branch_yes_65:;
{
PyObject *tmp_raise_type_22;
PyObject *tmp_make_exception_arg_22;
PyObject *tmp_mod_expr_left_22;
PyObject *tmp_mod_expr_right_22;
PyObject *tmp_tuple_element_88;
PyObject *tmp_expression_value_131;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_22;
tmp_mod_expr_left_22 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_22 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_88 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_25, tmp_default_value_22);
if (tmp_tuple_element_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_132;
PyObject *tmp_type_arg_44;
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_88);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_type_arg_44 = tmp_class_container$class_creation_23__prepared;
tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_tuple_element_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_88);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_22);
goto try_except_handler_69;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
CHECK_OBJECT(tmp_mod_expr_right_22);
Py_DECREF(tmp_mod_expr_right_22);
if (tmp_make_exception_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_69;
}
frame_frame_h2$events->m_frame.f_lineno = 646;
tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_22);
CHECK_OBJECT(tmp_make_exception_arg_22);
Py_DECREF(tmp_make_exception_arg_22);
assert(!(tmp_raise_type_22 == NULL));
exception_state.exception_value = tmp_raise_type_22;
exception_lineno = 646;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_69;
}
branch_no_65:;
goto branch_end_64;
branch_no_64:;
{
PyObject *tmp_assign_source_196;
tmp_assign_source_196 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_196;
}
branch_end_64:;
{
PyObject *tmp_assign_source_197;
PyObject *tmp_called_value_57;
PyObject *tmp_direct_call_arg1_33;
PyObject *tmp_direct_call_arg2_11;
PyObject *tmp_args_element_value_12;
tmp_direct_call_arg1_33 = module_var_accessor_h2$events$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 645;

    goto try_except_handler_69;
}
tmp_direct_call_arg2_11 = module_var_accessor_h2$events$kw_only(tstate);
if (unlikely(tmp_direct_call_arg2_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kw_only);
}

if (tmp_direct_call_arg2_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 645;

    goto try_except_handler_69;
}
Py_INCREF(tmp_direct_call_arg1_33);
Py_INCREF(tmp_direct_call_arg2_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_33, tmp_direct_call_arg2_11};
    tmp_called_value_57 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;

    goto try_except_handler_69;
}
{
PyObject *tmp_set_locals_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_set_locals_23 = tmp_class_container$class_creation_23__prepared;
locals_h2$events$$$class__23_UnknownFrameReceived_646 = tmp_set_locals_23;
Py_INCREF(tmp_set_locals_23);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_60d39b746eebe83fae494903472878fd;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
tmp_dictset_value = mod_consts.const_str_digest_05ad07a345dd067c738ee95e89944dd8;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
tmp_dictset_value = mod_consts.const_str_plain_UnknownFrameReceived;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
tmp_dictset_value = mod_consts.const_int_pos_646;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
frame_frame_h2$events$$$class__23_UnknownFrameReceived_18 = MAKE_CLASS_FRAME(tstate, code_objects_50caca969e2e4d5485e83aa61b3550a2, module_h2$events, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h2$events$$$class__23_UnknownFrameReceived_18);
assert(Py_REFCNT(frame_frame_h2$events$$$class__23_UnknownFrameReceived_18) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_29;
PyObject *tmp_ass_subscribed_29;
PyObject *tmp_ass_subscript_29;
tmp_ass_subvalue_29 = mod_consts.const_str_plain_Frame;
tmp_ass_subscribed_29 = PyObject_GetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_29 = mod_consts.const_str_plain_frame;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
CHECK_OBJECT(tmp_ass_subscribed_29);
Py_DECREF(tmp_ass_subscribed_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_h2$events$$$function__24___repr__(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_17;
frame_exception_exit_18:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events$$$class__23_UnknownFrameReceived_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events$$$class__23_UnknownFrameReceived_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events$$$class__23_UnknownFrameReceived_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_h2$events$$$class__23_UnknownFrameReceived_18,
    type_description_2,
    outline_22_var___class__
);



assertFrameObject(frame_frame_h2$events$$$class__23_UnknownFrameReceived_18);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_17;
frame_no_exception_17:;
goto skip_nested_handling_17;
nested_frame_exit_17:;

goto try_except_handler_71;
skip_nested_handling_17:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_cmp_expr_left_22 = tmp_class_container$class_creation_23__bases;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_cmp_expr_right_22 = tmp_class_container$class_creation_23__bases_orig;
tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_23__bases_orig;
tmp_res = PyObject_SetItem(locals_h2$events$$$class__23_UnknownFrameReceived_646, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
branch_no_66:;
{
PyObject *tmp_assign_source_198;
PyObject *tmp_called_value_58;
PyObject *tmp_args_value_45;
PyObject *tmp_tuple_element_89;
PyObject *tmp_kwargs_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_called_value_58 = tmp_class_container$class_creation_23__metaclass;
tmp_tuple_element_89 = mod_consts.const_str_plain_UnknownFrameReceived;
tmp_args_value_45 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_89 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_89);
tmp_tuple_element_89 = locals_h2$events$$$class__23_UnknownFrameReceived_646;
PyTuple_SET_ITEM0(tmp_args_value_45, 2, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_45 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_h2$events->m_frame.f_lineno = 646;
tmp_assign_source_198 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_45, tmp_kwargs_value_45);
CHECK_OBJECT(tmp_args_value_45);
Py_DECREF(tmp_args_value_45);
if (tmp_assign_source_198 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;

    goto try_except_handler_71;
}
assert(outline_22_var___class__ == NULL);
outline_22_var___class__ = tmp_assign_source_198;
}
CHECK_OBJECT(outline_22_var___class__);
tmp_args_element_value_12 = outline_22_var___class__;
Py_INCREF(tmp_args_element_value_12);
goto try_return_handler_71;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_71:;
Py_DECREF(locals_h2$events$$$class__23_UnknownFrameReceived_646);
locals_h2$events$$$class__23_UnknownFrameReceived_646 = NULL;
goto try_return_handler_70;
// Exception handler code:
try_except_handler_71:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_h2$events$$$class__23_UnknownFrameReceived_646);
locals_h2$events$$$class__23_UnknownFrameReceived_646 = NULL;
// Re-raise.
exception_state = exception_keeper_name_69;
exception_lineno = exception_keeper_lineno_69;

goto try_except_handler_70;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_70:;
CHECK_OBJECT(outline_22_var___class__);
CHECK_OBJECT(outline_22_var___class__);
Py_DECREF(outline_22_var___class__);
outline_22_var___class__ = NULL;
goto outline_result_46;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_70;
exception_lineno = exception_keeper_lineno_70;

goto outline_exception_23;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_23:;
exception_lineno = 646;
goto try_except_handler_69;
outline_result_46:;
frame_frame_h2$events->m_frame.f_lineno = 645;
tmp_assign_source_197 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_57);
Py_DECREF(tmp_called_value_57);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_197 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;

    goto try_except_handler_69;
}
UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain_UnknownFrameReceived, tmp_assign_source_197);
}
goto try_end_25;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_71 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_71 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_71;
exception_lineno = exception_keeper_lineno_71;

goto frame_exception_exit_1;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
Py_DECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
Py_DECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
Py_DECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
Py_DECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
tmp_outline_return_value_23 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_23);
goto outline_result_45;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_45:;
CHECK_OBJECT(tmp_outline_return_value_23);
Py_DECREF(tmp_outline_return_value_23);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h2$events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h2$events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h2$events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h2$events);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_18:;
{
PyObject *tmp_assign_source_199;
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_419a42b1a25198e70b80fefdc3816fec);

tmp_assign_source_199 = MAKE_FUNCTION_h2$events$$$function__25__bytes_representation(tstate, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_h2$events, (Nuitka_StringObject *)mod_consts.const_str_plain__bytes_representation, tmp_assign_source_199);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h2$events", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h2.events" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h2$events);
    return module_h2$events;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h2$events, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h2$events", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

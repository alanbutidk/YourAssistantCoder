/* Generated code for Python module 'requests$cookies'
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



/* The "module_requests$cookies" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$cookies;
PyDictObject *moduledict_requests$cookies;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__r;
PyObject *const_str_plain__new_headers;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_url;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_netloc;
PyObject *const_str_plain_get_host;
PyObject *const_str_plain_headers;
PyObject *const_tuple_str_plain_Host_tuple;
PyObject *const_str_plain_to_native_string;
PyObject *const_str_plain_Host;
PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
PyObject *const_str_plain_urlunparse;
PyObject *const_str_plain_params;
PyObject *const_str_plain_query;
PyObject *const_str_plain_fragment;
PyObject *const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
PyObject *const_str_digest_fd94370718eabfe17e896a713946f08f;
PyObject *const_str_plain_is_unverifiable;
PyObject *const_str_plain_get_origin_req_host;
PyObject *const_str_plain__headers;
PyObject *const_str_digest_f2f221b0207cd1d787c3e7965c72fbff;
PyObject *const_str_plain_getheaders;
PyObject *const_str_plain__original_response;
PyObject *const_str_plain_MockRequest;
PyObject *const_str_plain_MockResponse;
PyObject *const_str_plain_msg;
PyObject *const_str_plain_extract_cookies;
PyObject *const_str_digest_c143aa7a475302a8dcfd213f32ce331d;
PyObject *const_str_plain_add_cookie_header;
PyObject *const_str_plain_get_new_headers;
PyObject *const_tuple_str_plain_Cookie_tuple;
PyObject *const_str_digest_910dd7d30955ceb16de01d6ef96d3e95;
PyObject *const_str_plain_domain;
PyObject *const_str_plain_clearables;
PyObject *const_str_plain_cookiejar;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd;
PyObject *const_str_plain__find_no_duplicates;
PyObject *const_str_digest_741e4a7055b20857d935a0f7ed1c4abe;
PyObject *const_str_plain_remove_cookie_by_name;
PyObject *const_tuple_str_plain_domain_str_plain_path_tuple;
PyObject *const_str_plain_Morsel;
PyObject *const_str_plain_morsel_to_cookie;
PyObject *const_str_plain_create_cookie;
PyObject *const_str_plain_set_cookie;
PyObject *const_str_digest_573342b2a8e1af18fbe63f15ee63f11b;
PyObject *const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6;
PyObject *const_str_plain_self;
PyObject *const_str_plain_iterkeys;
PyObject *const_str_digest_9559440875cf716ec7a8bef311cbaefe;
PyObject *const_str_digest_7fad1f4acdf828076344bcbd2f3093fc;
PyObject *const_str_digest_8282cde113cd2232a516d421ec587b65;
PyObject *const_str_plain_value;
PyObject *const_str_plain_itervalues;
PyObject *const_str_digest_0a2127aa931e582083c667383d216ebd;
PyObject *const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876;
PyObject *const_str_digest_94ebad60c38a4f103db32744a5bab84d;
PyObject *const_str_plain_iteritems;
PyObject *const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d;
PyObject *const_str_digest_b04a12651fd966784023636e22761d12;
PyObject *const_str_plain_domains;
PyObject *const_str_digest_5266e491bdb204b2a45e0a788e9bac94;
PyObject *const_str_plain_paths;
PyObject *const_str_digest_58821042b0e0d98cc3b40076b38affdd;
PyObject *const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba;
PyObject *const_str_plain_dictionary;
PyObject *const_str_digest_d3a4a40c67458b1207db4bc7ab20d310;
PyObject *const_str_plain___contains__;
PyObject *const_str_plain_CookieConflictError;
PyObject *const_str_digest_08b25300475453472c10345ee7168b50;
PyObject *const_str_plain_set;
PyObject *const_str_digest_bb11d917f97bb6215fd11706382927d9;
PyObject *const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_chr_34_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple;
PyObject *const_str_plain_cookielib;
PyObject *const_str_plain_CookieJar;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_update;
PyObject *const_str_digest_5c9dad01a3c84d4b998a25c6f245d693;
PyObject *const_str_digest_a51c3332eb43a2659e562411ddf039ee;
PyObject *const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyObject *const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyObject *const_str_digest_2aa7f18650b70bafed61b449ab43cbad;
PyObject *const_str_plain_toReturn;
PyObject *const_str_digest_c89c12ffe497212a663befb94354aee1;
PyObject *const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain__cookies_lock_tuple;
PyObject *const_str_digest_59021ee0ac4a578b9169d1a96b78e1da;
PyObject *const_str_plain__cookies_lock;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_RLock;
PyObject *const_str_plain_RequestsCookieJar;
PyObject *const_str_plain_set_policy;
PyObject *const_str_plain_get_policy;
PyObject *const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee;
PyObject *const_str_plain__policy;
PyObject *const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa;
PyObject *const_str_plain_new_jar;
PyObject *const_str_plain_version;
PyObject *const_str_plain_port;
PyObject *const_str_plain_secure;
PyObject *const_str_plain_expires;
PyObject *const_str_plain_discard;
PyObject *const_str_plain_comment;
PyObject *const_str_plain_comment_url;
PyObject *const_str_plain_rest;
PyObject *const_dict_a5e68083723d45b7dd5e500852a4245b;
PyObject *const_str_plain_rfc2109;
PyObject *const_str_digest_301265073c49281b942ec09db3deaafb;
PyObject *const_str_plain_port_specified;
PyObject *const_str_plain_domain_specified;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_domain_initial_dot;
PyObject *const_str_plain_path_specified;
PyObject *const_str_plain_Cookie;
PyObject *const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f;
PyObject *const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
PyObject *const_str_plain_time;
PyObject *const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5;
PyObject *const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5;
PyObject *const_str_plain_calendar;
PyObject *const_str_plain_timegm;
PyObject *const_str_plain_strptime;
PyObject *const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
PyObject *const_str_plain_key;
PyObject *const_str_plain_HttpOnly;
PyObject *const_str_plain_httponly;
PyObject *const_tuple_4b6687c362447cc51b6724fb278a295e_tuple;
PyObject *const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d;
PyObject *const_str_digest_85e0ea626320458ddd4363cffbfdc559;
PyObject *const_str_digest_80fe00ea301d02293abaf9dea17cddac;
PyObject *const_str_plain_cookiejar_from_dict;
PyObject *const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple;
PyObject *const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b;
PyObject *const_str_digest_cac90769ee627c252065660cb8b178e8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain__internal_utils;
PyObject *const_tuple_str_plain_to_native_string_tuple;
PyObject *const_str_plain_compat;
PyObject *const_tuple_7473a5567049a7bdb6fe088da4a22f3f_tuple;
PyObject *const_str_plain_MutableMapping;
PyObject *const_str_plain_dummy_threading;
PyObject *const_str_digest_12188133309ffc390643b7a732954d08;
PyObject *const_str_digest_3af1e50b5bae7081cd680ab7677ec546;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_23;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_445933e6a124a5d41f1f32e33f377bc9;
PyObject *const_str_plain_get_type;
PyObject *const_str_digest_28c35b2d382d530cb9f8e567735ee113;
PyObject *const_str_digest_e43e9402062b1dc16610d92a6e06da93;
PyObject *const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0;
PyObject *const_str_plain_get_full_url;
PyObject *const_str_digest_b30191bdb52236874918a4b5c3c5db8b;
PyObject *const_str_digest_58322b83779ad7d89ba5c63e2fe2855c;
PyObject *const_str_plain_has_header;
PyObject *const_str_digest_2a2d5b06d38da952ad812a68992fbb10;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_get_header;
PyObject *const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6;
PyObject *const_str_plain_add_header;
PyObject *const_str_digest_b19ae27d1753e06c28990a42518b1f44;
PyObject *const_str_plain_add_unredirected_header;
PyObject *const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69;
PyObject *const_str_digest_44db063164c966fa5386728c86c1a06f;
PyObject *const_str_plain_unverifiable;
PyObject *const_str_digest_edb2a15c85f24da38984c0b5356f21c0;
PyObject *const_str_plain_origin_req_host;
PyObject *const_str_digest_1ffe275872914b64c240c8cb178005ea;
PyObject *const_str_plain_host;
PyObject *const_str_digest_59f19da226d4479328efe53726a2e397;
PyObject *const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_9fe804301723bc424e67537337fb4581;
PyObject *const_int_pos_103;
PyObject *const_str_digest_ea904bab707be16235fbd17c19767f9f;
PyObject *const_str_plain_info;
PyObject *const_str_digest_0d84ffc2aed365c467af25f17254de9e;
PyObject *const_str_digest_2041229f0580a80f49d71dc1aca7539f;
PyObject *const_tuple_str_plain__headers_tuple;
PyObject *const_str_plain_extract_cookies_to_jar;
PyObject *const_str_plain_get_cookie_header;
PyObject *const_tuple_none_none_tuple;
PyObject *const_tuple_type_RuntimeError_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
PyObject *const_int_pos_170;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_bd70455b3ff03a7986678c37b248a150;
PyObject *const_int_pos_176;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0;
PyObject *const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a;
PyObject *const_str_digest_572b1e9f5dc0656103cb358a7cbea16a;
PyObject *const_str_plain_values;
PyObject *const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7;
PyObject *const_str_plain_items;
PyObject *const_str_digest_ad2094029011821e111452c0603108d0;
PyObject *const_str_plain_list_domains;
PyObject *const_str_digest_4f8d8ada6928f5a67aefe24138a8c253;
PyObject *const_str_plain_list_paths;
PyObject *const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3;
PyObject *const_str_plain_multiple_domains;
PyObject *const_str_digest_2fb13ce01af8e322e1090db877e250bd;
PyObject *const_str_plain_get_dict;
PyObject *const_str_digest_aba783cd55ce183297e8f8d9ff1dc698;
PyObject *const_str_digest_5427312272820286dba5b26f263d4c79;
PyObject *const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3;
PyObject *const_str_plain___setitem__;
PyObject *const_str_digest_0d043b9a6c2c506833bb59840ef22ffd;
PyObject *const_str_plain___delitem__;
PyObject *const_str_digest_fb0e88f14b774d1e98d525584951eabc;
PyObject *const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6;
PyObject *const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e;
PyObject *const_str_plain__find;
PyObject *const_str_digest_9bc80f2115d22815a80849e3086128b4;
PyObject *const_str_digest_b270aaa39204bf1a293395efb6982c3e;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_2fd659d0d93422f0a9d09e643f3b5831;
PyObject *const_str_plain___setstate__;
PyObject *const_str_digest_0cf04dad003066735b1fdc1881f334a1;
PyObject *const_str_digest_ccf021f29934e59f3e942390d0f913c3;
PyObject *const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5;
PyObject *const_str_plain__copy_cookie_jar;
PyObject *const_tuple_none_true_tuple;
PyObject *const_str_plain_merge_cookies;
PyObject *const_str_digest_019c0800875ec82d0b2ac07098d3dade;
PyObject *const_str_digest_c9dd2760a1399f089d616717f6e41ae2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
PyObject *const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple;
PyObject *const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple;
PyObject *const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
PyObject *const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple;
PyObject *const_tuple_str_plain_self_str_plain_new_cj_tuple;
PyObject *const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple;
PyObject *const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple;
PyObject *const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple;
PyObject *const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple;
PyObject *const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cookie_tuple;
PyObject *const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple;
PyObject *const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple;
PyObject *const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple;
PyObject *const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple;
PyObject *const_tuple_ca917a44106411b262150e155c627a6c_tuple;
PyObject *const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple;
PyObject *const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple;
PyObject *const_tuple_0a21cfa0564c2ba78573baca86543185_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[268];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.cookies"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__r);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__new_headers);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_host);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Host_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Host);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_fragment);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_unverifiable);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin_req_host);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__headers);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_getheaders);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__original_response);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockRequest);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockResponse);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_cookie_header);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_new_headers);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_clearables);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__find_no_duplicates);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_cookie_by_name);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_morsel_to_cookie);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_cookie);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_cookie);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterkeys);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_itervalues);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_iteritems);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_b04a12651fd966784023636e22761d12);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_domains);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_paths);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_dictionary);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflictError);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_08b25300475453472c10345ee7168b50);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_34_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_toReturn);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cookies_lock_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__cookies_lock);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLock);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsCookieJar);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_policy);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_policy);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__policy);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_jar);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_secure);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_expires);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_discard);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment_url);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_rest);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfc2109);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_port_specified);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain_specified);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_domain_initial_dot);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_path_specified);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cookie);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_calendar);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_timegm);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_strptime);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOnly);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_httponly);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar_from_dict);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_7473a5567049a7bdb6fe088da4a22f3f_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_dummy_threading);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_12188133309ffc390643b7a732954d08);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_3af1e50b5bae7081cd680ab7677ec546);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_23);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_type);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_full_url);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_header);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_header);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_header);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_unredirected_header);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_unverifiable);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin_req_host);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__headers_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cookie_header);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_int_pos_170);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_176);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_domains);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_list_paths);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_domains);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_dict);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain__find);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain__copy_cookie_jar);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge_cookies);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple);
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
void checkModuleConstants_requests$cookies(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__r));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__r);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__new_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__new_headers);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_host);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Host_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Host_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_native_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_native_string);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Host);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlunparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlunparse);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_params);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_fragment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fragment);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_unverifiable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_unverifiable);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin_req_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin_req_host);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__headers);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_getheaders));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getheaders);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__original_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__original_response);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockRequest);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockResponse);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msg);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_cookies);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_cookie_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_cookie_header);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_new_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_new_headers);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cookie_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Cookie_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_clearables));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clearables);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookiejar);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__find_no_duplicates));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__find_no_duplicates);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_cookie_by_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove_cookie_by_name);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Morsel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Morsel);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_morsel_to_cookie));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_morsel_to_cookie);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_cookie));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_cookie);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_cookie));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_cookie);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterkeys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterkeys);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_itervalues));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itervalues);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_iteritems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iteritems);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_b04a12651fd966784023636e22761d12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b04a12651fd966784023636e22761d12);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_domains));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domains);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paths);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_dictionary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dictionary);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieConflictError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieConflictError);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_08b25300475453472c10345ee7168b50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08b25300475453472c10345ee7168b50);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_34_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookielib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookielib);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieJar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieJar);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_toReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toReturn);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cookies_lock_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cookies_lock_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__cookies_lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cookies_lock);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RLock);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsCookieJar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestsCookieJar);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_policy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_policy);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_policy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_policy);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__policy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__policy);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_jar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_jar);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_secure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secure);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_expires));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expires);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_discard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discard);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comment);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comment_url);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_rest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rest);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfc2109));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfc2109);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_port_specified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port_specified);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain_specified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain_specified);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_domain_initial_dot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_domain_initial_dot);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_path_specified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_path_specified);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cookie));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Cookie);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_calendar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calendar);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_timegm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timegm);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_strptime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strptime);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOnly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HttpOnly);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_httponly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httponly);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookiejar_from_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookiejar_from_dict);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__internal_utils);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_native_string_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_to_native_string_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compat);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_7473a5567049a7bdb6fe088da4a22f3f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7473a5567049a7bdb6fe088da4a22f3f_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutableMapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutableMapping);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_dummy_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dummy_threading);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_12188133309ffc390643b7a732954d08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12188133309ffc390643b7a732954d08);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_3af1e50b5bae7081cd680ab7677ec546));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3af1e50b5bae7081cd680ab7677ec546);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_23));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_23);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_type);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_full_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_full_url);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_header);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_header);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_header);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_unredirected_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_unredirected_header);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_unverifiable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unverifiable);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin_req_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin_req_host);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_103));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_103);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__headers_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_cookies_to_jar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_cookies_to_jar);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cookie_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cookie_header);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_RuntimeError_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_int_pos_170));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_170);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_176));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_176);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad2094029011821e111452c0603108d0);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_domains));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list_domains);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_list_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list_paths);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_domains));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiple_domains);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_dict);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setitem__);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain___delitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___delitem__);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain__find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__find);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain__copy_cookie_jar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__copy_cookie_jar);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_true_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge_cookies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_merge_cookies);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple);
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
static PyObject *module_var_accessor_requests$cookies$CookieConflictError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieConflictError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieConflictError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CookieConflictError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CookieConflictError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MockRequest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockRequest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockRequest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockRequest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockRequest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MockResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MockResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MockResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$Morsel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Morsel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Morsel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Morsel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Morsel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$MutableMapping(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableMapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableMapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MutableMapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MutableMapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$RequestsCookieJar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsCookieJar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsCookieJar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsCookieJar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsCookieJar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$calendar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calendar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calendar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_calendar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_calendar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$cookiejar_from_dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookiejar_from_dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookiejar_from_dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookiejar_from_dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookiejar_from_dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$cookielib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookielib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookielib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cookielib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cookielib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$create_cookie(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cookie);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cookie, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_cookie);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_cookie, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$morsel_to_cookie(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_morsel_to_cookie);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_morsel_to_cookie, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_morsel_to_cookie);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_morsel_to_cookie, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$remove_cookie_by_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_cookie_by_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_cookie_by_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_remove_cookie_by_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_remove_cookie_by_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$to_native_string(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_native_string);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_native_string, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$urlparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse);
    }

    return result;
}

static PyObject *module_var_accessor_requests$cookies$urlunparse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$cookies->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$cookies->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$cookies->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlunparse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlunparse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlunparse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlunparse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_904d57890f41edcd47d49cfb00edcee6;
static PyCodeObject *code_objects_46f654f4ab04eb275e76e526cb20d233;
static PyCodeObject *code_objects_ec405243650a05d50665d2c2d3a99d9b;
static PyCodeObject *code_objects_9f123359c724c683cff359330be00e4c;
static PyCodeObject *code_objects_f91efd7fc34791f07df1f35a755dd0be;
static PyCodeObject *code_objects_a6c780fb386fca0a5eb79d400df125a6;
static PyCodeObject *code_objects_7fb0fe3b6d7f365b58958833f7ed26b4;
static PyCodeObject *code_objects_6e6500bb31bcc673e62e6285c0a183cb;
static PyCodeObject *code_objects_109e2f492bdbea0ed80a7c5646a2c81f;
static PyCodeObject *code_objects_fee3121c94a5a92abcd5b8295e5427d4;
static PyCodeObject *code_objects_042f323e178604ffa86969dc65144d81;
static PyCodeObject *code_objects_76c3030b0ad5059b8500d283139623a2;
static PyCodeObject *code_objects_7d08a3c37451e66f505d302b3235cc8b;
static PyCodeObject *code_objects_37ee6793dc7ee34fc8365d46c5d9559d;
static PyCodeObject *code_objects_e73375744af41271e23df827d171b175;
static PyCodeObject *code_objects_d7a8d57b46cf565edce57d547411cf53;
static PyCodeObject *code_objects_d18e174b7a780506b8ee55ed18289be0;
static PyCodeObject *code_objects_0b03d6db17a8857603cc5b993d6956d1;
static PyCodeObject *code_objects_2a6733571b8aaf8692b353f6a96c3adb;
static PyCodeObject *code_objects_f1f71945c3d93dc4f338cbc37d0661eb;
static PyCodeObject *code_objects_de5e2694bc1a3d2bbfbe2f9cc834ae59;
static PyCodeObject *code_objects_ce2ec7732e42d07ba6e88f6809903f88;
static PyCodeObject *code_objects_0fb19cb6e9b4862b4e89bc94d77db4bc;
static PyCodeObject *code_objects_3b14ba7f9063ededee9fcf9ade576125;
static PyCodeObject *code_objects_879002f6244449927024fd8ab5e53c67;
static PyCodeObject *code_objects_6fb81760f735f49a9610e01908d24d4c;
static PyCodeObject *code_objects_905e3dc09bc6704be6b804120dcf6ce9;
static PyCodeObject *code_objects_602fcbd7ef2cc7d0b87c07d64f748bf6;
static PyCodeObject *code_objects_b412ffeffdf0591d29478d19dcf910a9;
static PyCodeObject *code_objects_0e1e968c4940caf6c83643437d55193d;
static PyCodeObject *code_objects_3ff72a93f42ef99528c63689ba22316d;
static PyCodeObject *code_objects_785245362bf3b38e867a9ebec5c23767;
static PyCodeObject *code_objects_851d19bcedad6f9ae4f756feb529b9f8;
static PyCodeObject *code_objects_263eede74df0186306500d93ce4c1f7c;
static PyCodeObject *code_objects_1feb286d594709bcad0fa4b364b3ffd6;
static PyCodeObject *code_objects_6e3a99beab26ab1543241c50d189cb5d;
static PyCodeObject *code_objects_a34b999f556af77408114bf185f05ff4;
static PyCodeObject *code_objects_8f733a87c6c92aa1264cc0a6b7be2f53;
static PyCodeObject *code_objects_e0abdd1b2090d0446101a7579960c48e;
static PyCodeObject *code_objects_d58f0255a457acc9948e252eb5e26121;
static PyCodeObject *code_objects_a18735f41c7d684b865d757a42bfe3f7;
static PyCodeObject *code_objects_5d386340ca8a232df338de9aaa75b414;
static PyCodeObject *code_objects_fb20d0f89af9da65ed1e29e6b5c13127;
static PyCodeObject *code_objects_467e1e121a96432868871881bb888a60;
static PyCodeObject *code_objects_a71ba8d32c352728cfc9b44b6ef73617;
static PyCodeObject *code_objects_23d95f2a152b8b1c87d6c49cd575f351;
static PyCodeObject *code_objects_5bfc3b9ee9af36b3fe25bcfc44ed0958;
static PyCodeObject *code_objects_bf426b43bbb972a579b559c6ab4b1cce;
static PyCodeObject *code_objects_91789820b49f7886c7bdef31621f39bf;
static PyCodeObject *code_objects_b1b3b44606ac006abef86676f05e0b7f;
static PyCodeObject *code_objects_4f84a78641219b3e653ebdbdd26ff628;
static PyCodeObject *code_objects_07aab536cf57cb3621cb1752e9d0223b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_019c0800875ec82d0b2ac07098d3dade); CHECK_OBJECT(module_filename_obj);
code_objects_904d57890f41edcd47d49cfb00edcee6 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2, mod_consts.const_str_digest_c9dd2760a1399f089d616717f6e41ae2, NULL, NULL, 0, 0, 0);
code_objects_46f654f4ab04eb275e76e526cb20d233 = MAKE_CODE_OBJECT(module_filename_obj, 23, 0, mod_consts.const_str_plain_MockRequest, mod_consts.const_str_plain_MockRequest, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ec405243650a05d50665d2c2d3a99d9b = MAKE_CODE_OBJECT(module_filename_obj, 176, 0, mod_consts.const_str_plain_RequestsCookieJar, mod_consts.const_str_plain_RequestsCookieJar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9f123359c724c683cff359330be00e4c = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___contains__, mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_f91efd7fc34791f07df1f35a755dd0be = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___delitem__, mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_a6c780fb386fca0a5eb79d400df125a6 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_7fb0fe3b6d7f365b58958833f7ed26b4 = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 1, 0, 0);
code_objects_6e6500bb31bcc673e62e6285c0a183cb = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_109e2f492bdbea0ed80a7c5646a2c81f = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple, NULL, 2, 0, 0);
code_objects_fee3121c94a5a92abcd5b8295e5427d4 = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setitem__, mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_042f323e178604ffa86969dc65144d81 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 2, 0, 0);
code_objects_76c3030b0ad5059b8500d283139623a2 = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__copy_cookie_jar, mod_consts.const_str_plain__copy_cookie_jar, mod_consts.const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_7d08a3c37451e66f505d302b3235cc8b = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__find, mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4, mod_consts.const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, NULL, 4, 0, 0);
code_objects_37ee6793dc7ee34fc8365d46c5d9559d = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__find_no_duplicates, mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e, mod_consts.const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, NULL, 4, 0, 0);
code_objects_e73375744af41271e23df827d171b175 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_header, mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, NULL, 3, 0, 0);
code_objects_d7a8d57b46cf565edce57d547411cf53 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_unredirected_header, mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_d18e174b7a780506b8ee55ed18289be0 = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_str_plain_cookiejar_from_dict, mod_consts.const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, NULL, 3, 0, 0);
code_objects_0b03d6db17a8857603cc5b993d6956d1 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3, mod_consts.const_tuple_str_plain_self_str_plain_new_cj_tuple, NULL, 1, 0, 0);
code_objects_2a6733571b8aaf8692b353f6a96c3adb = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_create_cookie, mod_consts.const_str_plain_create_cookie, mod_consts.const_tuple_466c807c093a59ee5ddd5b3bebea8415_tuple, NULL, 2, 0, 0);
code_objects_f1f71945c3d93dc4f338cbc37d0661eb = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_extract_cookies_to_jar, mod_consts.const_str_plain_extract_cookies_to_jar, mod_consts.const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, NULL, 3, 0, 0);
code_objects_de5e2694bc1a3d2bbfbe2f9cc834ae59 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_get, mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0, mod_consts.const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, NULL, 5, 0, 0);
code_objects_ce2ec7732e42d07ba6e88f6809903f88 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cookie_header, mod_consts.const_str_plain_get_cookie_header, mod_consts.const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, NULL, 2, 0, 0);
code_objects_0fb19cb6e9b4862b4e89bc94d77db4bc = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_dict, mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698, mod_consts.const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, NULL, 3, 0, 0);
code_objects_3b14ba7f9063ededee9fcf9ade576125 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_full_url, mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b, mod_consts.const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, NULL, 1, 0, 0);
code_objects_879002f6244449927024fd8ab5e53c67 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_header, mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, NULL, 3, 0, 0);
code_objects_6fb81760f735f49a9610e01908d24d4c = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_host, mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_905e3dc09bc6704be6b804120dcf6ce9 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_new_headers, mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_602fcbd7ef2cc7d0b87c07d64f748bf6 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_origin_req_host, mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b412ffeffdf0591d29478d19dcf910a9 = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_policy, mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0e1e968c4940caf6c83643437d55193d = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_type, mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3ff72a93f42ef99528c63689ba22316d = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getheaders, mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_785245362bf3b38e867a9ebec5c23767 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has_header, mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_851d19bcedad6f9ae4f756feb529b9f8 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_host, mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_263eede74df0186306500d93ce4c1f7c = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_info, mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1feb286d594709bcad0fa4b364b3ffd6 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_unverifiable, mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6e3a99beab26ab1543241c50d189cb5d = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_items, mod_consts.const_str_digest_ad2094029011821e111452c0603108d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a34b999f556af77408114bf185f05ff4 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_iteritems, mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_8f733a87c6c92aa1264cc0a6b7be2f53 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_iterkeys, mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_e0abdd1b2090d0446101a7579960c48e = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_itervalues, mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd, mod_consts.const_tuple_str_plain_self_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_d58f0255a457acc9948e252eb5e26121 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_keys, mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a18735f41c7d684b865d757a42bfe3f7 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_list_domains, mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_5d386340ca8a232df338de9aaa75b414 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_list_paths, mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3, mod_consts.const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_fb20d0f89af9da65ed1e29e6b5c13127 = MAKE_CODE_OBJECT(module_filename_obj, 542, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_merge_cookies, mod_consts.const_str_plain_merge_cookies, mod_consts.const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, NULL, 2, 0, 0);
code_objects_467e1e121a96432868871881bb888a60 = MAKE_CODE_OBJECT(module_filename_obj, 492, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_morsel_to_cookie, mod_consts.const_str_plain_morsel_to_cookie, mod_consts.const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, NULL, 1, 0, 0);
code_objects_a71ba8d32c352728cfc9b44b6ef73617 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_multiple_domains, mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd, mod_consts.const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, NULL, 1, 0, 0);
code_objects_23d95f2a152b8b1c87d6c49cd575f351 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_origin_req_host, mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5bfc3b9ee9af36b3fe25bcfc44ed0958 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_remove_cookie_by_name, mod_consts.const_str_plain_remove_cookie_by_name, mod_consts.const_tuple_ca917a44106411b262150e155c627a6c_tuple, NULL, 4, 0, 0);
code_objects_bf426b43bbb972a579b559c6ab4b1cce = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_set, mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a, mod_consts.const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, NULL, 3, 0, 0);
code_objects_91789820b49f7886c7bdef31621f39bf = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_set_cookie, mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6, mod_consts.const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_b1b3b44606ac006abef86676f05e0b7f = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_unverifiable, mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4f84a78641219b3e653ebdbdd26ff628 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e, mod_consts.const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_07aab536cf57cb3621cb1752e9d0223b = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_values, mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__14_host(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__15___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__16_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__21_get(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__22_set(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__24_keys(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__26_values(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__28_items(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__2_get_type(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__33___contains__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__34___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__35___setitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__36___delitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__37_set_cookie(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__38_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__39__find(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__3_get_host(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__40__find_no_duplicates(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__41___getstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__42___setstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__43_copy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__44_get_policy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__45__copy_cookie_jar(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__46_create_cookie(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__47_morsel_to_cookie(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__48_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__49_merge_cookies(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__7_has_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__8_get_header(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function__9_add_header(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_requests$cookies$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6e6500bb31bcc673e62e6285c0a183cb, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__1___init__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__1___init__ = cache_frame_frame_requests$cookies$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__1___init__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_request);
tmp_assattr_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__r, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__new_headers, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
tmp_called_value_1 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__1___init__->m_frame.f_lineno = 38;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scheme);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_type, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__1___init__,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__1___init__ == cache_frame_frame_requests$cookies$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__1___init__);
    cache_frame_frame_requests$cookies$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__1___init__);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__2_get_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__2_get_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__2_get_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__2_get_type)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__2_get_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__2_get_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__2_get_type = MAKE_FUNCTION_FRAME(tstate, code_objects_0e1e968c4940caf6c83643437d55193d, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__2_get_type->m_type_description == NULL);
frame_frame_requests$cookies$$$function__2_get_type = cache_frame_frame_requests$cookies$$$function__2_get_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__2_get_type);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__2_get_type) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__2_get_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__2_get_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__2_get_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__2_get_type,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__2_get_type == cache_frame_frame_requests$cookies$$$function__2_get_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__2_get_type);
    cache_frame_frame_requests$cookies$$$function__2_get_type = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__2_get_type);

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


static PyObject *impl_requests$cookies$$$function__3_get_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__3_get_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__3_get_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__3_get_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__3_get_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__3_get_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__3_get_host = MAKE_FUNCTION_FRAME(tstate, code_objects_6fb81760f735f49a9610e01908d24d4c, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__3_get_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__3_get_host = cache_frame_frame_requests$cookies$$$function__3_get_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__3_get_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__3_get_host) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__3_get_host->m_frame.f_lineno = 44;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_netloc);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__3_get_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__3_get_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__3_get_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__3_get_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__3_get_host == cache_frame_frame_requests$cookies$$$function__3_get_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__3_get_host);
    cache_frame_frame_requests$cookies$$$function__3_get_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__3_get_host);

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


static PyObject *impl_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__4_get_origin_req_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = MAKE_FUNCTION_FRAME(tstate, code_objects_602fcbd7ef2cc7d0b87c07d64f748bf6, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__4_get_origin_req_host = cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__4_get_origin_req_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__4_get_origin_req_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_frame.f_lineno = 47;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__4_get_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__4_get_origin_req_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__4_get_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__4_get_origin_req_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__4_get_origin_req_host == cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host);
    cache_frame_frame_requests$cookies$$$function__4_get_origin_req_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__4_get_origin_req_host);

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


static PyObject *impl_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_host = NULL;
PyObject *var_parsed = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__5_get_full_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__5_get_full_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__5_get_full_url)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__5_get_full_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__5_get_full_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__5_get_full_url = MAKE_FUNCTION_FRAME(tstate, code_objects_3b14ba7f9063ededee9fcf9ade576125, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__5_get_full_url->m_type_description == NULL);
frame_frame_requests$cookies$$$function__5_get_full_url = cache_frame_frame_requests$cookies$$$function__5_get_full_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__5_get_full_url);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__5_get_full_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 52;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Host_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__r);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = module_var_accessor_requests$cookies$to_native_string(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_native_string);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__r);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_Host;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 55;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_host == NULL);
var_host = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
tmp_called_value_3 = module_var_accessor_requests$cookies$urlparse(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlparse);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__r);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_url);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 56;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_parsed == NULL);
var_parsed = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_11;
tmp_called_value_4 = module_var_accessor_requests$cookies$urlunparse(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlunparse);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parsed);
tmp_expression_value_11 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_scheme);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 6);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
CHECK_OBJECT(var_host);
tmp_list_element_1 = var_host;
PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_12 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_path);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_13 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_params);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_14 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_query);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_1);
CHECK_OBJECT(var_parsed);
tmp_expression_value_15 = var_parsed;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_fragment);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_requests$cookies$$$function__5_get_full_url->m_frame.f_lineno = 58;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__5_get_full_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__5_get_full_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__5_get_full_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__5_get_full_url,
    type_description_1,
    par_self,
    var_host,
    var_parsed
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__5_get_full_url == cache_frame_frame_requests$cookies$$$function__5_get_full_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__5_get_full_url);
    cache_frame_frame_requests$cookies$$$function__5_get_full_url = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__5_get_full_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_parsed);
var_parsed = NULL;
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


static PyObject *impl_requests$cookies$$$function__7_has_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__7_has_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__7_has_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__7_has_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__7_has_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__7_has_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__7_has_header = MAKE_FUNCTION_FRAME(tstate, code_objects_785245362bf3b38e867a9ebec5c23767, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__7_has_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__7_has_header = cache_frame_frame_requests$cookies$$$function__7_has_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__7_has_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__7_has_header) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__r);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__new_headers);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__7_has_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__7_has_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__7_has_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__7_has_header,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__7_has_header == cache_frame_frame_requests$cookies$$$function__7_has_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__7_has_header);
    cache_frame_frame_requests$cookies$$$function__7_has_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__7_has_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__8_get_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_default = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__8_get_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__8_get_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__8_get_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__8_get_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__8_get_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__8_get_header = MAKE_FUNCTION_FRAME(tstate, code_objects_879002f6244449927024fd8ab5e53c67, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__8_get_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__8_get_header = cache_frame_frame_requests$cookies$$$function__8_get_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__8_get_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__8_get_header) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__r);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__new_headers);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
CHECK_OBJECT(par_default);
tmp_args_element_value_4 = par_default;
frame_frame_requests$cookies$$$function__8_get_header->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__8_get_header->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__8_get_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__8_get_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__8_get_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__8_get_header,
    type_description_1,
    par_self,
    par_name,
    par_default
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__8_get_header == cache_frame_frame_requests$cookies$$$function__8_get_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__8_get_header);
    cache_frame_frame_requests$cookies$$$function__8_get_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__8_get_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__9_add_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_val = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__9_add_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__9_add_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__9_add_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__9_add_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__9_add_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__9_add_header = MAKE_FUNCTION_FRAME(tstate, code_objects_e73375744af41271e23df827d171b175, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__9_add_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__9_add_header = cache_frame_frame_requests$cookies$$$function__9_add_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__9_add_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__9_add_header) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
frame_frame_requests$cookies$$$function__9_add_header->m_frame.f_lineno = 80;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 80;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__9_add_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__9_add_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__9_add_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__9_add_header,
    type_description_1,
    par_self,
    par_key,
    par_val
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__9_add_header == cache_frame_frame_requests$cookies$$$function__9_add_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__9_add_header);
    cache_frame_frame_requests$cookies$$$function__9_add_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__9_add_header);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__10_add_unredirected_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = MAKE_FUNCTION_FRAME(tstate, code_objects_d7a8d57b46cf565edce57d547411cf53, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__10_add_unredirected_header = cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__10_add_unredirected_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__10_add_unredirected_header) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_value);
tmp_ass_subvalue_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new_headers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_ass_subscript_1 = par_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__10_add_unredirected_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__10_add_unredirected_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__10_add_unredirected_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__10_add_unredirected_header,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__10_add_unredirected_header == cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header);
    cache_frame_frame_requests$cookies$$$function__10_add_unredirected_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__10_add_unredirected_header);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__11_get_new_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__11_get_new_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__11_get_new_headers)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__11_get_new_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__11_get_new_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__11_get_new_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_905e3dc09bc6704be6b804120dcf6ce9, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__11_get_new_headers->m_type_description == NULL);
frame_frame_requests$cookies$$$function__11_get_new_headers = cache_frame_frame_requests$cookies$$$function__11_get_new_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__11_get_new_headers);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__11_get_new_headers) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new_headers);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__11_get_new_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__11_get_new_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__11_get_new_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__11_get_new_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__11_get_new_headers == cache_frame_frame_requests$cookies$$$function__11_get_new_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__11_get_new_headers);
    cache_frame_frame_requests$cookies$$$function__11_get_new_headers = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__11_get_new_headers);

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


static PyObject *impl_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__12_unverifiable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__12_unverifiable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__12_unverifiable)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__12_unverifiable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__12_unverifiable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__12_unverifiable = MAKE_FUNCTION_FRAME(tstate, code_objects_b1b3b44606ac006abef86676f05e0b7f, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__12_unverifiable->m_type_description == NULL);
frame_frame_requests$cookies$$$function__12_unverifiable = cache_frame_frame_requests$cookies$$$function__12_unverifiable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__12_unverifiable);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__12_unverifiable) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__12_unverifiable->m_frame.f_lineno = 92;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_unverifiable);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__12_unverifiable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__12_unverifiable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__12_unverifiable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__12_unverifiable,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__12_unverifiable == cache_frame_frame_requests$cookies$$$function__12_unverifiable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__12_unverifiable);
    cache_frame_frame_requests$cookies$$$function__12_unverifiable = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__12_unverifiable);

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


static PyObject *impl_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__13_origin_req_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__13_origin_req_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__13_origin_req_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__13_origin_req_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__13_origin_req_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__13_origin_req_host = MAKE_FUNCTION_FRAME(tstate, code_objects_23d95f2a152b8b1c87d6c49cd575f351, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__13_origin_req_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__13_origin_req_host = cache_frame_frame_requests$cookies$$$function__13_origin_req_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__13_origin_req_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__13_origin_req_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__13_origin_req_host->m_frame.f_lineno = 96;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_origin_req_host);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__13_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__13_origin_req_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__13_origin_req_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__13_origin_req_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__13_origin_req_host == cache_frame_frame_requests$cookies$$$function__13_origin_req_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__13_origin_req_host);
    cache_frame_frame_requests$cookies$$$function__13_origin_req_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__13_origin_req_host);

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


static PyObject *impl_requests$cookies$$$function__14_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__14_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__14_host = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__14_host)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__14_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__14_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__14_host = MAKE_FUNCTION_FRAME(tstate, code_objects_851d19bcedad6f9ae4f756feb529b9f8, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__14_host->m_type_description == NULL);
frame_frame_requests$cookies$$$function__14_host = cache_frame_frame_requests$cookies$$$function__14_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__14_host);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__14_host) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__14_host->m_frame.f_lineno = 100;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__14_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__14_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__14_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__14_host,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__14_host == cache_frame_frame_requests$cookies$$$function__14_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__14_host);
    cache_frame_frame_requests$cookies$$$function__14_host = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__14_host);

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


static PyObject *impl_requests$cookies$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_109e2f492bdbea0ed80a7c5646a2c81f, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__15___init__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__15___init__ = cache_frame_frame_requests$cookies$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__15___init__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_headers);
tmp_assattr_value_1 = par_headers;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__headers, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__15___init__,
    type_description_1,
    par_self,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__15___init__ == cache_frame_frame_requests$cookies$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__15___init__);
    cache_frame_frame_requests$cookies$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__15___init__);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__16_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__16_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__16_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__16_info)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__16_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__16_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__16_info = MAKE_FUNCTION_FRAME(tstate, code_objects_263eede74df0186306500d93ce4c1f7c, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__16_info->m_type_description == NULL);
frame_frame_requests$cookies$$$function__16_info = cache_frame_frame_requests$cookies$$$function__16_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__16_info);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__16_info) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__headers);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__16_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__16_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__16_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__16_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__16_info == cache_frame_frame_requests$cookies$$$function__16_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__16_info);
    cache_frame_frame_requests$cookies$$$function__16_info = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__16_info);

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


static PyObject *impl_requests$cookies$$$function__17_getheaders(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__17_getheaders;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__17_getheaders = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__17_getheaders)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__17_getheaders);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__17_getheaders == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__17_getheaders = MAKE_FUNCTION_FRAME(tstate, code_objects_3ff72a93f42ef99528c63689ba22316d, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__17_getheaders->m_type_description == NULL);
frame_frame_requests$cookies$$$function__17_getheaders = cache_frame_frame_requests$cookies$$$function__17_getheaders;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__17_getheaders);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__17_getheaders) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__headers);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__17_getheaders->m_frame.f_lineno = 121;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getheaders, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__17_getheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__17_getheaders->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__17_getheaders, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__17_getheaders,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__17_getheaders == cache_frame_frame_requests$cookies$$$function__17_getheaders) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__17_getheaders);
    cache_frame_frame_requests$cookies$$$function__17_getheaders = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__17_getheaders);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_response = python_pars[2];
PyObject *var_req = NULL;
PyObject *var_res = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = MAKE_FUNCTION_FRAME(tstate, code_objects_f1f71945c3d93dc4f338cbc37d0661eb, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_type_description == NULL);
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__original_response);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_response);
tmp_expression_value_2 = par_response;
tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__original_response);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$MockRequest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockRequest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 134;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_req == NULL);
var_req = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = module_var_accessor_requests$cookies$MockResponse(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockResponse);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response);
tmp_expression_value_4 = par_response;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__original_response);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_msg);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 136;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_res == NULL);
var_res = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_jar);
tmp_called_instance_1 = par_jar;
CHECK_OBJECT(var_res);
tmp_args_element_value_3 = var_res;
CHECK_OBJECT(var_req);
tmp_args_element_value_4 = var_req;
frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_extract_cookies,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar,
    type_description_1,
    par_jar,
    par_request,
    par_response,
    var_req,
    var_res
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar == cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);
    cache_frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__18_extract_cookies_to_jar);

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
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_res);
var_res = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_res);
var_res = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_r = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__19_get_cookie_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__19_get_cookie_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = MAKE_FUNCTION_FRAME(tstate, code_objects_ce2ec7732e42d07ba6e88f6809903f88, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header->m_type_description == NULL);
frame_frame_requests$cookies$$$function__19_get_cookie_header = cache_frame_frame_requests$cookies$$$function__19_get_cookie_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__19_get_cookie_header);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__19_get_cookie_header) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$MockRequest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MockRequest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 146;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_r == NULL);
var_r = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_jar);
tmp_called_instance_1 = par_jar;
CHECK_OBJECT(var_r);
tmp_args_element_value_2 = var_r;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 147;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_cookie_header, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_r);
tmp_called_instance_2 = var_r;
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 148;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_new_headers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame.f_lineno = 148;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Cookie_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__19_get_cookie_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__19_get_cookie_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__19_get_cookie_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__19_get_cookie_header,
    type_description_1,
    par_jar,
    par_request,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__19_get_cookie_header == cache_frame_frame_requests$cookies$$$function__19_get_cookie_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__19_get_cookie_header);
    cache_frame_frame_requests$cookies$$$function__19_get_cookie_header = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__19_get_cookie_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_r);
CHECK_OBJECT(var_r);
Py_DECREF(var_r);
var_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_r);
var_r = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookiejar = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_clearables = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__20_remove_cookie_by_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_clearables == NULL);
var_clearables = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = MAKE_FUNCTION_FRAME(tstate, code_objects_5bfc3b9ee9af36b3fe25bcfc44ed0958, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_type_description == NULL);
frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookiejar);
tmp_iter_arg_1 = par_cookiejar;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 157;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_3 = par_domain;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_start_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_5 = par_path;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_start_1;
branch_no_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
if (var_clearables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clearables);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_clearables;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_domain);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_item_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cookie);
tmp_expression_value_5 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_path);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_cookie);
tmp_expression_value_6 = var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooo";
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
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
if (var_clearables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clearables);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = var_clearables;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 166;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_domain;
    par_domain = tmp_assign_source_11;
    Py_INCREF(par_domain);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = par_path;
    par_path = tmp_assign_source_12;
    Py_INCREF(par_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = par_name;
    par_name = tmp_assign_source_13;
    Py_INCREF(par_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}

tmp_expression_value_7 = par_cookiejar;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_clear);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_domain);
tmp_args_element_value_1 = par_domain;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
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

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__20_remove_cookie_by_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__20_remove_cookie_by_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__20_remove_cookie_by_name,
    type_description_1,
    par_cookiejar,
    par_name,
    par_domain,
    par_path,
    var_clearables,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__20_remove_cookie_by_name == cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);
    cache_frame_frame_requests$cookies$$$function__20_remove_cookie_by_name = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__20_remove_cookie_by_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_name);
par_name = NULL;
Py_XDECREF(par_domain);
par_domain = NULL;
Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_clearables);
var_clearables = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_name);
par_name = NULL;
Py_XDECREF(par_domain);
par_domain = NULL;
Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_clearables);
var_clearables = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookiejar);
Py_DECREF(par_cookiejar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookiejar);
Py_DECREF(par_cookiejar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__21_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_default = python_pars[2];
PyObject *par_domain = python_pars[3];
PyObject *par_path = python_pars[4];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__21_get;
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
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__21_get = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__21_get)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__21_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__21_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__21_get = MAKE_FUNCTION_FRAME(tstate, code_objects_de5e2694bc1a3d2bbfbe2f9cc834ae59, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__21_get->m_type_description == NULL);
frame_frame_requests$cookies$$$function__21_get = cache_frame_frame_requests$cookies$$$function__21_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__21_get);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__21_get) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_domain);
tmp_args_element_value_2 = par_domain;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_requests$cookies$$$function__21_get->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__find_no_duplicates,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__21_get, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__21_get, exception_keeper_lineno_1);
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
CHECK_OBJECT(par_default);
tmp_return_value = par_default;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 201;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__21_get->m_frame)) {
        frame_frame_requests$cookies$$$function__21_get->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__21_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__21_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__21_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__21_get,
    type_description_1,
    par_self,
    par_name,
    par_default,
    par_domain,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__21_get == cache_frame_frame_requests$cookies$$$function__21_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__21_get);
    cache_frame_frame_requests$cookies$$$function__21_get = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__21_get);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__22_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_kwargs = python_pars[3];
PyObject *var_c = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__22_set;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__22_set = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__22_set)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__22_set);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__22_set == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__22_set = MAKE_FUNCTION_FRAME(tstate, code_objects_bf426b43bbb972a579b559c6ab4b1cce, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__22_set->m_type_description == NULL);
frame_frame_requests$cookies$$$function__22_set = cache_frame_frame_requests$cookies$$$function__22_set;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__22_set);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__22_set) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_called_value_1 = module_var_accessor_requests$cookies$remove_cookie_by_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remove_cookie_by_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_name);
tmp_kw_call_arg_value_1_1 = par_name;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_domain;
tmp_kw_call_dict_value_0_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    tmp_kw_call_dict_value_0_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_kw_call_dict_value_0_1);
}
assert(!(tmp_kw_call_dict_value_0_1 == NULL));
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_2 = par_kwargs;
tmp_key_value_2 = const_str_plain_path;
tmp_kw_call_dict_value_1_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    tmp_kw_call_dict_value_1_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_kw_call_dict_value_1_1);
}
assert(!(tmp_kw_call_dict_value_1_1 == NULL));
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 213;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_domain_str_plain_path_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_isinstance_cls_1 = module_var_accessor_requests$cookies$Morsel(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Morsel);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_requests$cookies$morsel_to_cookie(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_morsel_to_cookie);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 219;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_direct_call_arg1_1 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_tuple_element_1 = par_name;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_2;
}
branch_end_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_c);
tmp_args_element_value_2 = var_c;
frame_frame_requests$cookies$$$function__22_set->m_frame.f_lineno = 222;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_cookie, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__22_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__22_set->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__22_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__22_set,
    type_description_1,
    par_self,
    par_name,
    par_value,
    par_kwargs,
    var_c
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__22_set == cache_frame_frame_requests$cookies$$$function__22_set) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__22_set);
    cache_frame_frame_requests$cookies$$$function__22_set = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__22_set);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_c);
tmp_return_value = var_c;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_c);
var_c = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_c);
var_c = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(tstate, tmp_closure_1);

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
struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals *generator_heap = (struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8f733a87c6c92aa1264cc0a6b7be2f53, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 231;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 232;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 232;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_context,
        module_requests$cookies,
        mod_consts.const_str_plain_iterkeys,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        code_objects_8f733a87c6c92aa1264cc0a6b7be2f53,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__23_iterkeys$$$genobj__1_iterkeys_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__24_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__24_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__24_keys = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__24_keys)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__24_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__24_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__24_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_d58f0255a457acc9948e252eb5e26121, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__24_keys->m_type_description == NULL);
frame_frame_requests$cookies$$$function__24_keys = cache_frame_frame_requests$cookies$$$function__24_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__24_keys);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__24_keys) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iterkeys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__24_keys->m_frame.f_lineno = 240;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__24_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__24_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__24_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__24_keys,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__24_keys == cache_frame_frame_requests$cookies$$$function__24_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__24_keys);
    cache_frame_frame_requests$cookies$$$function__24_keys = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__24_keys);

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


static PyObject *impl_requests$cookies$$$function__25_itervalues(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(tstate, tmp_closure_1);

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
struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals *generator_heap = (struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e0abdd1b2090d0446101a7579960c48e, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 248;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_context,
        module_requests$cookies,
        mod_consts.const_str_plain_itervalues,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        code_objects_e0abdd1b2090d0446101a7579960c48e,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__25_itervalues$$$genobj__1_itervalues_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__26_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__26_values;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__26_values = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__26_values)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__26_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__26_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__26_values = MAKE_FUNCTION_FRAME(tstate, code_objects_07aab536cf57cb3621cb1752e9d0223b, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__26_values->m_type_description == NULL);
frame_frame_requests$cookies$$$function__26_values = cache_frame_frame_requests$cookies$$$function__26_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__26_values);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__26_values) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_itervalues);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__26_values->m_frame.f_lineno = 257;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__26_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__26_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__26_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__26_values,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__26_values == cache_frame_frame_requests$cookies$$$function__26_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__26_values);
    cache_frame_frame_requests$cookies$$$function__26_values = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__26_values);

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


static PyObject *impl_requests$cookies$$$function__27_iteritems(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(tstate, tmp_closure_1);

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
struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals {
PyObject *var_cookie;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals *generator_heap = (struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_cookie = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a34b999f556af77408114bf185f05ff4, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 265;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_cookie;
    generator_heap->var_cookie = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_2 = generator_heap->var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_cookie);
tmp_expression_value_3 = generator_heap->var_cookie;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "co";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "co";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[0],
    generator_heap->var_cookie
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

Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_cookie);
generator_heap->var_cookie = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_context,
        module_requests$cookies,
        mod_consts.const_str_plain_iteritems,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        code_objects_a34b999f556af77408114bf185f05ff4,
        closure,
        1,
#if 1
        sizeof(struct requests$cookies$$$function__27_iteritems$$$genobj__1_iteritems_locals)
#else
        0
#endif
    );
}


static PyObject *impl_requests$cookies$$$function__28_items(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__28_items;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__28_items = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__28_items)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__28_items);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__28_items == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__28_items = MAKE_FUNCTION_FRAME(tstate, code_objects_6e3a99beab26ab1543241c50d189cb5d, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__28_items->m_type_description == NULL);
frame_frame_requests$cookies$$$function__28_items = cache_frame_frame_requests$cookies$$$function__28_items;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__28_items);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__28_items) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iteritems);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__28_items->m_frame.f_lineno = 275;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__28_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__28_items->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__28_items, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__28_items,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__28_items == cache_frame_frame_requests$cookies$$$function__28_items) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__28_items);
    cache_frame_frame_requests$cookies$$$function__28_items = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__28_items);

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


static PyObject *impl_requests$cookies$$$function__29_list_domains(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_domains = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__29_list_domains;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__29_list_domains = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_domains == NULL);
var_domains = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__29_list_domains)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__29_list_domains);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__29_list_domains == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__29_list_domains = MAKE_FUNCTION_FRAME(tstate, code_objects_a18735f41c7d684b865d757a42bfe3f7, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__29_list_domains->m_type_description == NULL);
frame_frame_requests$cookies$$$function__29_list_domains = cache_frame_frame_requests$cookies$$$function__29_list_domains;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__29_list_domains);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__29_list_domains) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
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
exception_lineno = 280;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_domains == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_domains;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_2;
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_domains;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
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
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_domains;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__29_list_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__29_list_domains->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__29_list_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__29_list_domains,
    type_description_1,
    par_self,
    var_domains,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__29_list_domains == cache_frame_frame_requests$cookies$$$function__29_list_domains) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__29_list_domains);
    cache_frame_frame_requests$cookies$$$function__29_list_domains = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__29_list_domains);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__30_list_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_paths = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__30_list_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__30_list_paths = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_paths == NULL);
var_paths = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__30_list_paths)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__30_list_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__30_list_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__30_list_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_5d386340ca8a232df338de9aaa75b414, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__30_list_paths->m_type_description == NULL);
frame_frame_requests$cookies$$$function__30_list_paths = cache_frame_frame_requests$cookies$$$function__30_list_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__30_list_paths);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__30_list_paths) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
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
exception_lineno = 288;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_paths == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = var_paths;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_2;
if (var_paths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_paths;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
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
if (var_paths == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_paths;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__30_list_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__30_list_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__30_list_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__30_list_paths,
    type_description_1,
    par_self,
    var_paths,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__30_list_paths == cache_frame_frame_requests$cookies$$$function__30_list_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__30_list_paths);
    cache_frame_frame_requests$cookies$$$function__30_list_paths = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__30_list_paths);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_paths);
var_paths = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_paths);
var_paths = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_domains = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__31_multiple_domains;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__31_multiple_domains = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_domains == NULL);
var_domains = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__31_multiple_domains)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__31_multiple_domains);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__31_multiple_domains == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__31_multiple_domains = MAKE_FUNCTION_FRAME(tstate, code_objects_a71ba8d32c352728cfc9b44b6ef73617, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__31_multiple_domains->m_type_description == NULL);
frame_frame_requests$cookies$$$function__31_multiple_domains = cache_frame_frame_requests$cookies$$$function__31_multiple_domains;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__31_multiple_domains);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__31_multiple_domains) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
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
exception_lineno = 300;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (var_domains == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = var_domains;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_3;
if (var_domains == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_domains);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_domains;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_domain);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__31_multiple_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__31_multiple_domains->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__31_multiple_domains, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__31_multiple_domains,
    type_description_1,
    par_self,
    var_domains,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__31_multiple_domains == cache_frame_frame_requests$cookies$$$function__31_multiple_domains) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__31_multiple_domains);
    cache_frame_frame_requests$cookies$$$function__31_multiple_domains = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__31_multiple_domains);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_domains);
var_domains = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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


static PyObject *impl_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_domain = python_pars[1];
PyObject *par_path = python_pars[2];
PyObject *var_dictionary = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__32_get_dict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__32_get_dict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_dictionary == NULL);
var_dictionary = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__32_get_dict)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__32_get_dict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__32_get_dict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__32_get_dict = MAKE_FUNCTION_FRAME(tstate, code_objects_0fb19cb6e9b4862b4e89bc94d77db4bc, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__32_get_dict->m_type_description == NULL);
frame_frame_requests$cookies$$$function__32_get_dict = cache_frame_frame_requests$cookies$$$function__32_get_dict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__32_get_dict);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__32_get_dict) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooo";
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
type_description_1 = "ooooo";
exception_lineno = 314;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_1 = par_domain;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_2 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_3 = par_path;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_4 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_dictionary == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictionary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_dictionary;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 318;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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


exception_lineno = 318;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooo";
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
if (var_dictionary == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dictionary);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_dictionary;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__32_get_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__32_get_dict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__32_get_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__32_get_dict,
    type_description_1,
    par_self,
    par_domain,
    par_path,
    var_dictionary,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__32_get_dict == cache_frame_frame_requests$cookies$$$function__32_get_dict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__32_get_dict);
    cache_frame_frame_requests$cookies$$$function__32_get_dict = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__32_get_dict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_dictionary);
var_dictionary = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dictionary);
var_dictionary = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__33___contains__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__33___contains__;
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
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__33___contains__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__33___contains__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__33___contains__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__33___contains__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__33___contains__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9f123359c724c683cff359330be00e4c, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__33___contains__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__33___contains__ = cache_frame_frame_requests$cookies$$$function__33___contains__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__33___contains__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__33___contains__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 323;
type_description_1 = "ooc";
    goto try_except_handler_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooc";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__33___contains__->m_frame.f_lineno = 323;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___contains__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__33___contains__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__33___contains__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_requests$cookies$CookieConflictError(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieConflictError);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 322;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__33___contains__->m_frame)) {
        frame_frame_requests$cookies$$$function__33___contains__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__33___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__33___contains__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__33___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__33___contains__,
    type_description_1,
    par_self,
    par_name,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__33___contains__ == cache_frame_frame_requests$cookies$$$function__33___contains__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__33___contains__);
    cache_frame_frame_requests$cookies$$$function__33___contains__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__33___contains__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__34___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__34___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__34___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__34___getitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__34___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__34___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__34___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a6c780fb386fca0a5eb79d400df125a6, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__34___getitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__34___getitem__ = cache_frame_frame_requests$cookies$$$function__34___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__34___getitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__34___getitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_requests$cookies$$$function__34___getitem__->m_frame.f_lineno = 334;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__find_no_duplicates, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__34___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__34___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__34___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__34___getitem__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__34___getitem__ == cache_frame_frame_requests$cookies$$$function__34___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__34___getitem__);
    cache_frame_frame_requests$cookies$$$function__34___getitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__34___getitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__35___setitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__35___setitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__35___setitem__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__35___setitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__35___setitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__35___setitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__35___setitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fee3121c94a5a92abcd5b8295e5427d4, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__35___setitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__35___setitem__ = cache_frame_frame_requests$cookies$$$function__35___setitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__35___setitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__35___setitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_requests$cookies$$$function__35___setitem__->m_frame.f_lineno = 341;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_set,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__35___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__35___setitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__35___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__35___setitem__,
    type_description_1,
    par_self,
    par_name,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__35___setitem__ == cache_frame_frame_requests$cookies$$$function__35___setitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__35___setitem__);
    cache_frame_frame_requests$cookies$$$function__35___setitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__35___setitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__36___delitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__36___delitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__36___delitem__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__36___delitem__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__36___delitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__36___delitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__36___delitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f91efd7fc34791f07df1f35a755dd0be, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__36___delitem__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__36___delitem__ = cache_frame_frame_requests$cookies$$$function__36___delitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__36___delitem__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__36___delitem__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_requests$cookies$remove_cookie_by_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_remove_cookie_by_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_name);
tmp_args_element_value_2 = par_name;
frame_frame_requests$cookies$$$function__36___delitem__->m_frame.f_lineno = 347;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__36___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__36___delitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__36___delitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__36___delitem__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__36___delitem__ == cache_frame_frame_requests$cookies$$$function__36___delitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__36___delitem__);
    cache_frame_frame_requests$cookies$$$function__36___delitem__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__36___delitem__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__37_set_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cookie = python_pars[1];
PyObject *par_args = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__37_set_cookie;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__37_set_cookie = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__37_set_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__37_set_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__37_set_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__37_set_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_91789820b49f7886c7bdef31621f39bf, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__37_set_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__37_set_cookie = cache_frame_frame_requests$cookies$$$function__37_set_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__37_set_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__37_set_cookie) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_cookie);
tmp_expression_value_2 = par_cookie;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_cookie);
tmp_expression_value_4 = par_cookie;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__37_set_cookie->m_frame.f_lineno = 352;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_34_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 352;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_cookie);
tmp_expression_value_6 = par_cookie;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_endswith);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__37_set_cookie->m_frame.f_lineno = 353;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_34_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 353;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_cookie);
tmp_expression_value_8 = par_cookie;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_value);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__37_set_cookie->m_frame.f_lineno = 355;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookie);
tmp_assattr_target_1 = par_cookie;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_value, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_9 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_set_cookie);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookie);
tmp_tuple_element_1 = par_cookie;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__37_set_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__37_set_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__37_set_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__37_set_cookie,
    type_description_1,
    par_self,
    par_cookie,
    par_args,
    par_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__37_set_cookie == cache_frame_frame_requests$cookies$$$function__37_set_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__37_set_cookie);
    cache_frame_frame_requests$cookies$$$function__37_set_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__37_set_cookie);

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
CHECK_OBJECT(par_cookie);
Py_DECREF(par_cookie);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cookie);
Py_DECREF(par_cookie);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__38_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__38_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__38_update = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__38_update)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__38_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__38_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__38_update = MAKE_FUNCTION_FRAME(tstate, code_objects_4f84a78641219b3e653ebdbdd26ff628, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__38_update->m_type_description == NULL);
frame_frame_requests$cookies$$$function__38_update = cache_frame_frame_requests$cookies$$$function__38_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__38_update);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__38_update) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_expression_value_1 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooc";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_other);
tmp_iter_arg_1 = par_other;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooc";
exception_lineno = 361;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_3;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_expression_value_3 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cookie);
tmp_args_element_value_2 = var_cookie;
frame_frame_requests$cookies$$$function__38_update->m_frame.f_lineno = 362;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
frame_frame_requests$cookies$$$function__38_update->m_frame.f_lineno = 362;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooc";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_4 = BUILTIN_SUPER0(tstate, moduledict_requests$cookies, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_requests$cookies$$$function__38_update->m_frame.f_lineno = 364;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__38_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__38_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__38_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__38_update,
    type_description_1,
    par_self,
    par_other,
    var_cookie,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__38_update == cache_frame_frame_requests$cookies$$$function__38_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__38_update);
    cache_frame_frame_requests$cookies$$$function__38_update = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__38_update);

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
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__39__find(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__39__find;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__39__find = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__39__find)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__39__find);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__39__find == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__39__find = MAKE_FUNCTION_FRAME(tstate, code_objects_7d08a3c37451e66f505d302b3235cc8b, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__39__find->m_type_description == NULL);
frame_frame_requests$cookies$$$function__39__find = cache_frame_frame_requests$cookies$$$function__39__find;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__39__find);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__39__find) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 378;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_3;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_3 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_5 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_3:;
branch_no_2:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_operand_value_1 = par_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
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


exception_lineno = 384;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_domain);
tmp_operand_value_2 = par_domain;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_path);
tmp_operand_value_3 = par_path;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$cookies$$$function__39__find->m_frame.f_lineno = 384;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 384;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__39__find, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__39__find->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__39__find, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__39__find,
    type_description_1,
    par_self,
    par_name,
    par_domain,
    par_path,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__39__find == cache_frame_frame_requests$cookies$$$function__39__find) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__39__find);
    cache_frame_frame_requests$cookies$$$function__39__find = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__39__find);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cookie);
CHECK_OBJECT(var_cookie);
Py_DECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__40__find_no_duplicates(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_domain = python_pars[2];
PyObject *par_path = python_pars[3];
PyObject *var_toReturn = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__40__find_no_duplicates;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_toReturn == NULL);
Py_INCREF(tmp_assign_source_1);
var_toReturn = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates = MAKE_FUNCTION_FRAME(tstate, code_objects_37ee6793dc7ee34fc8365d46c5d9559d, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates->m_type_description == NULL);
frame_frame_requests$cookies$$$function__40__find_no_duplicates = cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__40__find_no_duplicates);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__40__find_no_duplicates) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 399;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_cookie);
tmp_expression_value_1 = var_cookie;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_name);
tmp_cmp_expr_right_1 = par_name;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_domain);
tmp_cmp_expr_left_2 = par_domain;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_2 = var_cookie;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_domain);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_domain);
tmp_cmp_expr_right_3 = par_domain;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_cmp_expr_left_4 = par_path;
tmp_cmp_expr_right_4 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_cookie);
tmp_expression_value_3 = var_cookie;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_path);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_5 = par_path;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 403;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = var_toReturn;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$CookieConflictError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CookieConflictError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_c89c12ffe497212a663befb94354aee1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_operand_value_1 = par_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_requests$cookies$$$function__40__find_no_duplicates->m_frame.f_lineno = 405;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 405;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_cookie);
tmp_expression_value_4 = var_cookie;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_toReturn;
    var_toReturn = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
branch_no_3:;
branch_no_2:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooooo";
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
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 411;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_toReturn);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
if (var_toReturn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_toReturn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_toReturn;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_a51c3332eb43a2659e562411ddf039ee;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_name);
tmp_operand_value_2 = par_name;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_0bc2ccefebc5d034d89ef2f3dff15f68;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_domain);
tmp_operand_value_3 = par_domain;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_ead58bf535d8bb1db2e1cb769a68561b;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
CHECK_OBJECT(par_path);
tmp_operand_value_4 = par_path;
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$cookies$$$function__40__find_no_duplicates->m_frame.f_lineno = 413;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 413;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__40__find_no_duplicates, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__40__find_no_duplicates->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__40__find_no_duplicates, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__40__find_no_duplicates,
    type_description_1,
    par_self,
    par_name,
    par_domain,
    par_path,
    var_toReturn,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__40__find_no_duplicates == cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates);
    cache_frame_frame_requests$cookies$$$function__40__find_no_duplicates = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__40__find_no_duplicates);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_toReturn);
var_toReturn = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_toReturn);
var_toReturn = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_domain);
Py_DECREF(par_domain);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__41___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_state = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__41___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__41___getstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__41___getstate__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__41___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__41___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__41___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7fb0fe3b6d7f365b58958833f7ed26b4, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__41___getstate__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__41___getstate__ = cache_frame_frame_requests$cookies$$$function__41___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__41___getstate__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__41___getstate__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__41___getstate__->m_frame.f_lineno = 417;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_state == NULL);
var_state = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_state);
tmp_expression_value_3 = var_state;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__41___getstate__->m_frame.f_lineno = 419;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__cookies_lock_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__41___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__41___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__41___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__41___getstate__,
    type_description_1,
    par_self,
    var_state
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__41___getstate__ == cache_frame_frame_requests$cookies$$$function__41___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__41___getstate__);
    cache_frame_frame_requests$cookies$$$function__41___getstate__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__41___getstate__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_state);
tmp_return_value = var_state;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state);
CHECK_OBJECT(var_state);
Py_DECREF(var_state);
var_state = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_state);
var_state = NULL;
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


static PyObject *impl_requests$cookies$$$function__42___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__42___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__42___setstate__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__42___setstate__)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__42___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__42___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__42___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_042f323e178604ffa86969dc65144d81, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__42___setstate__->m_type_description == NULL);
frame_frame_requests$cookies$$$function__42___setstate__ = cache_frame_frame_requests$cookies$$$function__42___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__42___setstate__);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__42___setstate__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_1 = par_state;
frame_frame_requests$cookies$$$function__42___setstate__->m_frame.f_lineno = 424;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain__cookies_lock;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_3);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_requests$cookies$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__42___setstate__->m_frame.f_lineno = 426;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_RLock);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cookies_lock, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__42___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__42___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__42___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__42___setstate__,
    type_description_1,
    par_self,
    par_state
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__42___setstate__ == cache_frame_frame_requests$cookies$$$function__42___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__42___setstate__);
    cache_frame_frame_requests$cookies$$$function__42___setstate__ = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__42___setstate__);

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
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__43_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_new_cj = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__43_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__43_copy = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__43_copy)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__43_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__43_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__43_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_0b03d6db17a8857603cc5b993d6956d1, module_requests$cookies, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__43_copy->m_type_description == NULL);
frame_frame_requests$cookies$$$function__43_copy = cache_frame_frame_requests$cookies$$$function__43_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__43_copy);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__43_copy) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$RequestsCookieJar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsCookieJar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__43_copy->m_frame.f_lineno = 430;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_new_cj == NULL);
var_new_cj = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_new_cj);
tmp_expression_value_1 = var_new_cj;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set_policy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_requests$cookies$$$function__43_copy->m_frame.f_lineno = 431;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_policy);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__43_copy->m_frame.f_lineno = 431;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_new_cj);
tmp_expression_value_2 = var_new_cj;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_requests$cookies$$$function__43_copy->m_frame.f_lineno = 432;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__43_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__43_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__43_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__43_copy,
    type_description_1,
    par_self,
    var_new_cj
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__43_copy == cache_frame_frame_requests$cookies$$$function__43_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__43_copy);
    cache_frame_frame_requests$cookies$$$function__43_copy = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__43_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_new_cj);
tmp_return_value = var_new_cj;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_cj);
CHECK_OBJECT(var_new_cj);
Py_DECREF(var_new_cj);
var_new_cj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_cj);
var_new_cj = NULL;
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


static PyObject *impl_requests$cookies$$$function__44_get_policy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__44_get_policy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__44_get_policy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__44_get_policy)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__44_get_policy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__44_get_policy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__44_get_policy = MAKE_FUNCTION_FRAME(tstate, code_objects_b412ffeffdf0591d29478d19dcf910a9, module_requests$cookies, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__44_get_policy->m_type_description == NULL);
frame_frame_requests$cookies$$$function__44_get_policy = cache_frame_frame_requests$cookies$$$function__44_get_policy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__44_get_policy);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__44_get_policy) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__policy);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__44_get_policy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__44_get_policy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__44_get_policy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__44_get_policy,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__44_get_policy == cache_frame_frame_requests$cookies$$$function__44_get_policy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__44_get_policy);
    cache_frame_frame_requests$cookies$$$function__44_get_policy = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__44_get_policy);

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


static PyObject *impl_requests$cookies$$$function__45__copy_cookie_jar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_jar = python_pars[0];
PyObject *var_new_jar = NULL;
PyObject *var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__45__copy_cookie_jar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_jar);
tmp_cmp_expr_left_1 = par_jar;
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
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar = MAKE_FUNCTION_FRAME(tstate, code_objects_76c3030b0ad5059b8500d283139623a2, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_type_description == NULL);
frame_frame_requests$cookies$$$function__45__copy_cookie_jar = cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__45__copy_cookie_jar);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__45__copy_cookie_jar) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_jar);
tmp_expression_value_1 = par_jar;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_jar);
tmp_expression_value_2 = par_jar;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame.f_lineno = 446;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_jar);
tmp_args_element_value_1 = par_jar;
frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame.f_lineno = 448;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_new_jar == NULL);
var_new_jar = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_new_jar);
tmp_expression_value_4 = var_new_jar;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_clear);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame.f_lineno = 449;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_jar);
tmp_iter_arg_1 = par_jar;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
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
exception_lineno = 450;
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
    PyObject *old = var_cookie;
    var_cookie = tmp_assign_source_4;
    Py_INCREF(var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
if (var_new_jar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_jar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_new_jar;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = module_var_accessor_requests$cookies$copy(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_copy);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_cookie);
tmp_args_element_value_3 = var_cookie;
frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame.f_lineno = 451;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame.f_lineno = 451;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
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
if (var_new_jar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_jar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_new_jar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__45__copy_cookie_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__45__copy_cookie_jar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__45__copy_cookie_jar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__45__copy_cookie_jar,
    type_description_1,
    par_jar,
    var_new_jar,
    var_cookie
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__45__copy_cookie_jar == cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar);
    cache_frame_frame_requests$cookies$$$function__45__copy_cookie_jar = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__45__copy_cookie_jar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_new_jar);
var_new_jar = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_jar);
var_new_jar = NULL;
Py_XDECREF(var_cookie);
var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_jar);
Py_DECREF(par_jar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__46_create_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_result = NULL;
PyObject *var_badargs = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__46_create_cookie;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__46_create_cookie = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_version;
tmp_dict_value_1 = const_int_0;
tmp_assign_source_1 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_value;
CHECK_OBJECT(par_value);
tmp_dict_value_1 = par_value;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_port;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_domain;
tmp_dict_value_1 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_path;
tmp_dict_value_1 = const_str_slash;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_secure;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_expires;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_discard;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_comment;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_comment_url;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rest;
tmp_dict_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a5e68083723d45b7dd5e500852a4245b);
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rfc2109;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__46_create_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__46_create_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__46_create_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__46_create_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_2a6733571b8aaf8692b353f6a96c3adb, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__46_create_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__46_create_cookie = cache_frame_frame_requests$cookies$$$function__46_create_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__46_create_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__46_create_cookie) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_set_arg_2;
CHECK_OBJECT(par_kwargs);
tmp_set_arg_1 = par_kwargs;
tmp_sub_expr_left_1 = PySet_New(tmp_set_arg_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_set_arg_2 = var_result;
tmp_sub_expr_right_1 = PySet_New(tmp_set_arg_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 477;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_badargs == NULL);
var_badargs = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
CHECK_OBJECT(var_badargs);
tmp_condition_result_1 = CHECK_IF_TRUE(var_badargs) == 1;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_301265073c49281b942ec09db3deaafb;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_badargs);
tmp_list_arg_1 = var_badargs;
tmp_format_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
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


exception_lineno = 480;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$cookies$$$function__46_create_cookie->m_frame.f_lineno = 479;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 479;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_1 = var_result;
CHECK_OBJECT(par_kwargs);
tmp_iterable_value_1 = par_kwargs;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_1;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_2 = var_result;
tmp_key_value_1 = mod_consts.const_str_plain_port;
tmp_value_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_port_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_value_value_2;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_2;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_3 = var_result;
tmp_key_value_2 = mod_consts.const_str_plain_domain;
tmp_value_value_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_3, tmp_key_value_2);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_domain_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_key_value_3;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_4 = var_result;
tmp_key_value_3 = mod_consts.const_str_plain_domain;
tmp_expression_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_4, tmp_key_value_3);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__46_create_cookie->m_frame.f_lineno = 486;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_domain_initial_dot;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_value_value_3;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_4;
CHECK_OBJECT(var_result);
tmp_dict_arg_value_5 = var_result;
tmp_key_value_4 = const_str_plain_path;
tmp_value_value_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_5, tmp_key_value_4);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_result);
tmp_dictset_dict = var_result;
tmp_dictset_key = mod_consts.const_str_plain_path_specified;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_2 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Cookie);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_direct_call_arg2_1 = var_result;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__46_create_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__46_create_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__46_create_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__46_create_cookie,
    type_description_1,
    par_name,
    par_value,
    par_kwargs,
    var_result,
    var_badargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__46_create_cookie == cache_frame_frame_requests$cookies$$$function__46_create_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__46_create_cookie);
    cache_frame_frame_requests$cookies$$$function__46_create_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__46_create_cookie);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
CHECK_OBJECT(var_badargs);
CHECK_OBJECT(var_badargs);
Py_DECREF(var_badargs);
var_badargs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
Py_XDECREF(var_badargs);
var_badargs = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__47_morsel_to_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_morsel = python_pars[0];
PyObject *var_expires = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__47_morsel_to_cookie;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_expires == NULL);
Py_INCREF(tmp_assign_source_1);
var_expires = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie = MAKE_FUNCTION_FRAME(tstate, code_objects_467e1e121a96432868871881bb888a60, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_type_description == NULL);
frame_frame_requests$cookies$$$function__47_morsel_to_cookie = cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__47_morsel_to_cookie);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__47_morsel_to_cookie) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_morsel);
tmp_expression_value_1 = par_morsel;
tmp_subscript_value_1 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 496;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_int_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_called_instance_1 = module_var_accessor_requests$cookies$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = 498;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_2 = par_morsel;
tmp_subscript_value_2 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
{
    PyObject *old = var_expires;
    assert(old != NULL);
    var_expires = tmp_assign_source_2;
    Py_DECREF(old);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__47_morsel_to_cookie, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__47_morsel_to_cookie, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_1e373c75cf2fa61c2ac23767dead1bc5;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_morsel);
tmp_expression_value_3 = par_morsel;
tmp_subscript_value_3 = mod_consts.const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
tmp_format_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooN";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooN";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_9e6c0a5a62d64c0251a9c8fafdec52d5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = 500;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 500;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooN";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 497;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame)) {
        frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooN";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_morsel);
tmp_expression_value_4 = par_morsel;
tmp_subscript_value_4 = mod_consts.const_str_plain_expires;
tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_subscript_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_2);

exception_lineno = 501;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_2);
Py_DECREF(tmp_subscript_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_requests$cookies$calendar(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_calendar);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_timegm);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_requests$cookies$time(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_strptime);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_7 = par_morsel;
tmp_subscript_value_5 = mod_consts.const_str_plain_expires;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = 503;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = 503;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expires;
    assert(old != NULL);
    var_expires = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
branch_end_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_9;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_10;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_value_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_11;
PyObject *tmp_kw_call_value_11_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_12_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_12;
tmp_called_value_3 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 504;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_8 = par_morsel;
tmp_subscript_value_6 = mod_consts.const_str_plain_comment;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_9 = par_morsel;
tmp_subscript_value_7 = mod_consts.const_str_plain_comment;
tmp_value_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 506;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 506;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_kw_call_value_2_1 = Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_10 = par_morsel;
tmp_subscript_value_8 = mod_consts.const_str_plain_domain;
tmp_kw_call_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 508;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expires);
tmp_kw_call_value_4_1 = var_expires;
CHECK_OBJECT(par_morsel);
tmp_expression_value_11 = par_morsel;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_key);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 510;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_12 = par_morsel;
tmp_subscript_value_9 = const_str_plain_path;
tmp_kw_call_value_6_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_9);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 511;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_7_1 = Py_None;
tmp_dict_key_1 = mod_consts.const_str_plain_HttpOnly;
CHECK_OBJECT(par_morsel);
tmp_expression_value_13 = par_morsel;
tmp_subscript_value_10 = mod_consts.const_str_plain_httponly;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 513;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_value_8_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_kw_call_value_9_1 = Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_14 = par_morsel;
tmp_subscript_value_11 = mod_consts.const_str_plain_secure;
tmp_value_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_11);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 515;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 515;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_10_1 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(par_morsel);
tmp_expression_value_15 = par_morsel;
tmp_kw_call_value_11_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
if (tmp_kw_call_value_11_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 516;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_morsel);
tmp_expression_value_16 = par_morsel;
tmp_subscript_value_12 = mod_consts.const_str_plain_version;
tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_12);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_11_1);

exception_lineno = 517;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_11_1);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 517;
type_description_1 = "ooN";
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
tmp_or_right_value_1 = const_int_0;
Py_INCREF(tmp_or_right_value_1);
tmp_kw_call_value_12_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_kw_call_value_12_1 = tmp_or_left_value_1;
or_end_1:;
frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame.f_lineno = 504;
{
    PyObject *kw_values[13] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_4b6687c362447cc51b6724fb278a295e_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
CHECK_OBJECT(tmp_kw_call_value_11_1);
Py_DECREF(tmp_kw_call_value_11_1);
CHECK_OBJECT(tmp_kw_call_value_12_1);
Py_DECREF(tmp_kw_call_value_12_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__47_morsel_to_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__47_morsel_to_cookie->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__47_morsel_to_cookie, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__47_morsel_to_cookie,
    type_description_1,
    par_morsel,
    var_expires,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__47_morsel_to_cookie == cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie);
    cache_frame_frame_requests$cookies$$$function__47_morsel_to_cookie = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__47_morsel_to_cookie);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_expires);
CHECK_OBJECT(var_expires);
Py_DECREF(var_expires);
var_expires = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_expires);
var_expires = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_morsel);
Py_DECREF(par_morsel);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_morsel);
Py_DECREF(par_morsel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__48_cookiejar_from_dict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookie_dict = python_pars[0];
PyObject *par_cookiejar = python_pars[1];
PyObject *par_overwrite = python_pars[2];
PyObject *var_names_from_jar = NULL;
PyObject *var_name = NULL;
PyObject *outline_0_var_cookie = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__48_cookiejar_from_dict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict = MAKE_FUNCTION_FRAME(tstate, code_objects_d18e174b7a780506b8ee55ed18289be0, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict->m_type_description == NULL);
frame_frame_requests$cookies$$$function__48_cookiejar_from_dict = cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__48_cookiejar_from_dict);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__48_cookiejar_from_dict) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_cookiejar);
tmp_cmp_expr_left_1 = par_cookiejar;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$RequestsCookieJar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsCookieJar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 531;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_requests$cookies$$$function__48_cookiejar_from_dict->m_frame.f_lineno = 531;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cookiejar;
    assert(old != NULL);
    par_cookiejar = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_cookie_dict);
tmp_cmp_expr_left_2 = par_cookie_dict;
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
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookiejar);
tmp_iter_arg_1 = par_cookiejar;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 534;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_cookie;
    outline_0_var_cookie = tmp_assign_source_6;
    Py_INCREF(outline_0_var_cookie);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_cookie);
tmp_expression_value_1 = outline_0_var_cookie;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_cookie);
outline_0_var_cookie = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_cookie);
outline_0_var_cookie = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 534;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_names_from_jar == NULL);
var_names_from_jar = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_cookie_dict);
tmp_iter_arg_2 = par_cookie_dict;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 535;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_9;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_overwrite);
tmp_truth_name_1 = CHECK_IF_TRUE(par_overwrite);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_3 = var_name;
CHECK_OBJECT(var_names_from_jar);
tmp_cmp_expr_right_3 = var_names_from_jar;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}

tmp_expression_value_2 = par_cookiejar;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_cookie);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = module_var_accessor_requests$cookies$create_cookie(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_cookie);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_2 = var_name;
CHECK_OBJECT(par_cookie_dict);
tmp_expression_value_3 = par_cookie_dict;
CHECK_OBJECT(var_name);
tmp_subscript_value_1 = var_name;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_requests$cookies$$$function__48_cookiejar_from_dict->m_frame.f_lineno = 537;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_requests$cookies$$$function__48_cookiejar_from_dict->m_frame.f_lineno = 537;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_2:;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 539;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_cookiejar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__48_cookiejar_from_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__48_cookiejar_from_dict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__48_cookiejar_from_dict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__48_cookiejar_from_dict,
    type_description_1,
    par_cookie_dict,
    par_cookiejar,
    par_overwrite,
    var_names_from_jar,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__48_cookiejar_from_dict == cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict);
    cache_frame_frame_requests$cookies$$$function__48_cookiejar_from_dict = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__48_cookiejar_from_dict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_names_from_jar);
var_names_from_jar = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_names_from_jar);
var_names_from_jar = NULL;
Py_XDECREF(var_name);
var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookie_dict);
Py_DECREF(par_cookie_dict);
CHECK_OBJECT(par_overwrite);
Py_DECREF(par_overwrite);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookie_dict);
Py_DECREF(par_cookie_dict);
CHECK_OBJECT(par_overwrite);
Py_DECREF(par_overwrite);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function__49_merge_cookies(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cookiejar = python_pars[0];
PyObject *par_cookies = python_pars[1];
PyObject *var_cookie_in_jar = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$function__49_merge_cookies;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_requests$cookies$$$function__49_merge_cookies = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$cookies$$$function__49_merge_cookies)) {
    Py_XDECREF(cache_frame_frame_requests$cookies$$$function__49_merge_cookies);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$cookies$$$function__49_merge_cookies == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$cookies$$$function__49_merge_cookies = MAKE_FUNCTION_FRAME(tstate, code_objects_fb20d0f89af9da65ed1e29e6b5c13127, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$cookies$$$function__49_merge_cookies->m_type_description == NULL);
frame_frame_requests$cookies$$$function__49_merge_cookies = cache_frame_frame_requests$cookies$$$function__49_merge_cookies;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$function__49_merge_cookies);
assert(Py_REFCNT(frame_frame_requests$cookies$$$function__49_merge_cookies) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cookiejar);
tmp_isinstance_inst_1 = par_cookiejar;
tmp_expression_value_1 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_80fe00ea301d02293abaf9dea17cddac;
frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame.f_lineno = 550;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 550;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_cookies);
tmp_isinstance_inst_2 = par_cookies;
tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_requests$cookies$cookiejar_from_dict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar_from_dict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cookies);
tmp_kw_call_arg_value_0_1 = par_cookies;
CHECK_OBJECT(par_cookiejar);
tmp_kw_call_dict_value_0_1 = par_cookiejar;
tmp_kw_call_dict_value_1_1 = Py_False;
frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame.f_lineno = 553;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_cookiejar_str_plain_overwrite_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cookiejar;
    assert(old != NULL);
    par_cookiejar = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cookies);
tmp_isinstance_inst_3 = par_cookies;
tmp_expression_value_2 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CookieJar);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_cookiejar);
tmp_expression_value_3 = par_cookiejar;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_cookies);
tmp_args_element_value_1 = par_cookies;
frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame.f_lineno = 556;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__49_merge_cookies, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__49_merge_cookies, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cookies);
tmp_iter_arg_1 = par_cookies;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
exception_lineno = 558;
        goto try_except_handler_4;
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
    PyObject *old = var_cookie_in_jar;
    var_cookie_in_jar = tmp_assign_source_4;
    Py_INCREF(var_cookie_in_jar);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 559;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_called_instance_1 = par_cookiejar;
CHECK_OBJECT(var_cookie_in_jar);
tmp_args_element_value_2 = var_cookie_in_jar;
frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame.f_lineno = 559;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_cookie, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 555;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame)) {
        frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_4:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_3:;
branch_end_2:;
if (par_cookiejar == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookiejar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 561;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_cookiejar;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$function__49_merge_cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$function__49_merge_cookies->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$function__49_merge_cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$function__49_merge_cookies,
    type_description_1,
    par_cookiejar,
    par_cookies,
    var_cookie_in_jar
);


// Release cached frame if used for exception.
if (frame_frame_requests$cookies$$$function__49_merge_cookies == cache_frame_frame_requests$cookies$$$function__49_merge_cookies) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$cookies$$$function__49_merge_cookies);
    cache_frame_frame_requests$cookies$$$function__49_merge_cookies = NULL;
}

assertFrameObject(frame_frame_requests$cookies$$$function__49_merge_cookies);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_cookie_in_jar);
var_cookie_in_jar = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cookiejar);
par_cookiejar = NULL;
Py_XDECREF(var_cookie_in_jar);
var_cookie_in_jar = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__10_add_unredirected_header,
        mod_consts.const_str_plain_add_unredirected_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69,
#endif
        code_objects_d7a8d57b46cf565edce57d547411cf53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__11_get_new_headers,
        mod_consts.const_str_plain_get_new_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44db063164c966fa5386728c86c1a06f,
#endif
        code_objects_905e3dc09bc6704be6b804120dcf6ce9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__12_unverifiable,
        mod_consts.const_str_plain_unverifiable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edb2a15c85f24da38984c0b5356f21c0,
#endif
        code_objects_b1b3b44606ac006abef86676f05e0b7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__13_origin_req_host,
        mod_consts.const_str_plain_origin_req_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ffe275872914b64c240c8cb178005ea,
#endif
        code_objects_23d95f2a152b8b1c87d6c49cd575f351,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__14_host(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__14_host,
        mod_consts.const_str_plain_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59f19da226d4479328efe53726a2e397,
#endif
        code_objects_851d19bcedad6f9ae4f756feb529b9f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__15___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea904bab707be16235fbd17c19767f9f,
#endif
        code_objects_109e2f492bdbea0ed80a7c5646a2c81f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_f2f221b0207cd1d787c3e7965c72fbff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__16_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__16_info,
        mod_consts.const_str_plain_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d84ffc2aed365c467af25f17254de9e,
#endif
        code_objects_263eede74df0186306500d93ce4c1f7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__17_getheaders,
        mod_consts.const_str_plain_getheaders,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2041229f0580a80f49d71dc1aca7539f,
#endif
        code_objects_3ff72a93f42ef99528c63689ba22316d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__18_extract_cookies_to_jar,
        mod_consts.const_str_plain_extract_cookies_to_jar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f1f71945c3d93dc4f338cbc37d0661eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_c143aa7a475302a8dcfd213f32ce331d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__19_get_cookie_header,
        mod_consts.const_str_plain_get_cookie_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ce2ec7732e42d07ba6e88f6809903f88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_910dd7d30955ceb16de01d6ef96d3e95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_445933e6a124a5d41f1f32e33f377bc9,
#endif
        code_objects_6e6500bb31bcc673e62e6285c0a183cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__20_remove_cookie_by_name,
        mod_consts.const_str_plain_remove_cookie_by_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5bfc3b9ee9af36b3fe25bcfc44ed0958,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__21_get(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__21_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0,
#endif
        code_objects_de5e2694bc1a3d2bbfbe2f9cc834ae59,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_741e4a7055b20857d935a0f7ed1c4abe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__22_set(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__22_set,
        mod_consts.const_str_plain_set,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a,
#endif
        code_objects_bf426b43bbb972a579b559c6ab4b1cce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_573342b2a8e1af18fbe63f15ee63f11b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__23_iterkeys,
        mod_consts.const_str_plain_iterkeys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        code_objects_8f733a87c6c92aa1264cc0a6b7be2f53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__24_keys(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__24_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_572b1e9f5dc0656103cb358a7cbea16a,
#endif
        code_objects_d58f0255a457acc9948e252eb5e26121,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_7fad1f4acdf828076344bcbd2f3093fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__25_itervalues,
        mod_consts.const_str_plain_itervalues,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        code_objects_e0abdd1b2090d0446101a7579960c48e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_8282cde113cd2232a516d421ec587b65,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__26_values(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__26_values,
        mod_consts.const_str_plain_values,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7,
#endif
        code_objects_07aab536cf57cb3621cb1752e9d0223b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__27_iteritems,
        mod_consts.const_str_plain_iteritems,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        code_objects_a34b999f556af77408114bf185f05ff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_94ebad60c38a4f103db32744a5bab84d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__28_items(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__28_items,
        mod_consts.const_str_plain_items,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad2094029011821e111452c0603108d0,
#endif
        code_objects_6e3a99beab26ab1543241c50d189cb5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_b04a12651fd966784023636e22761d12,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__29_list_domains,
        mod_consts.const_str_plain_list_domains,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f8d8ada6928f5a67aefe24138a8c253,
#endif
        code_objects_a18735f41c7d684b865d757a42bfe3f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_5266e491bdb204b2a45e0a788e9bac94,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__2_get_type(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__2_get_type,
        mod_consts.const_str_plain_get_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28c35b2d382d530cb9f8e567735ee113,
#endif
        code_objects_0e1e968c4940caf6c83643437d55193d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__30_list_paths,
        mod_consts.const_str_plain_list_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3,
#endif
        code_objects_5d386340ca8a232df338de9aaa75b414,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_58821042b0e0d98cc3b40076b38affdd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__31_multiple_domains,
        mod_consts.const_str_plain_multiple_domains,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fb13ce01af8e322e1090db877e250bd,
#endif
        code_objects_a71ba8d32c352728cfc9b44b6ef73617,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__32_get_dict,
        mod_consts.const_str_plain_get_dict,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aba783cd55ce183297e8f8d9ff1dc698,
#endif
        code_objects_0fb19cb6e9b4862b4e89bc94d77db4bc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_d3a4a40c67458b1207db4bc7ab20d310,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__33___contains__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__33___contains__,
        mod_consts.const_str_plain___contains__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5427312272820286dba5b26f263d4c79,
#endif
        code_objects_9f123359c724c683cff359330be00e4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__34___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__34___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3,
#endif
        code_objects_a6c780fb386fca0a5eb79d400df125a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_08b25300475453472c10345ee7168b50,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__35___setitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__35___setitem__,
        mod_consts.const_str_plain___setitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d043b9a6c2c506833bb59840ef22ffd,
#endif
        code_objects_fee3121c94a5a92abcd5b8295e5427d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_bb11d917f97bb6215fd11706382927d9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__36___delitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__36___delitem__,
        mod_consts.const_str_plain___delitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb0e88f14b774d1e98d525584951eabc,
#endif
        code_objects_f91efd7fc34791f07df1f35a755dd0be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_48b8b73ffa9bea4802eb5f096ed8b355,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__37_set_cookie(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__37_set_cookie,
        mod_consts.const_str_plain_set_cookie,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6,
#endif
        code_objects_91789820b49f7886c7bdef31621f39bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__38_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__38_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e,
#endif
        code_objects_4f84a78641219b3e653ebdbdd26ff628,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_5c9dad01a3c84d4b998a25c6f245d693,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__39__find(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__39__find,
        mod_consts.const_str_plain__find,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bc80f2115d22815a80849e3086128b4,
#endif
        code_objects_7d08a3c37451e66f505d302b3235cc8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_2aa7f18650b70bafed61b449ab43cbad,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__3_get_host(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__3_get_host,
        mod_consts.const_str_plain_get_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e43e9402062b1dc16610d92a6e06da93,
#endif
        code_objects_6fb81760f735f49a9610e01908d24d4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__40__find_no_duplicates(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__40__find_no_duplicates,
        mod_consts.const_str_plain__find_no_duplicates,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b270aaa39204bf1a293395efb6982c3e,
#endif
        code_objects_37ee6793dc7ee34fc8365d46c5d9559d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__41___getstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__41___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fd659d0d93422f0a9d09e643f3b5831,
#endif
        code_objects_7fb0fe3b6d7f365b58958833f7ed26b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__42___setstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__42___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0cf04dad003066735b1fdc1881f334a1,
#endif
        code_objects_042f323e178604ffa86969dc65144d81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__43_copy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__43_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ccf021f29934e59f3e942390d0f913c3,
#endif
        code_objects_0b03d6db17a8857603cc5b993d6956d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__44_get_policy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__44_get_policy,
        mod_consts.const_str_plain_get_policy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5,
#endif
        code_objects_b412ffeffdf0591d29478d19dcf910a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__45__copy_cookie_jar(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__45__copy_cookie_jar,
        mod_consts.const_str_plain__copy_cookie_jar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_76c3030b0ad5059b8500d283139623a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__46_create_cookie(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__46_create_cookie,
        mod_consts.const_str_plain_create_cookie,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a6733571b8aaf8692b353f6a96c3adb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__47_morsel_to_cookie(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__47_morsel_to_cookie,
        mod_consts.const_str_plain_morsel_to_cookie,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_467e1e121a96432868871881bb888a60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__48_cookiejar_from_dict(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__48_cookiejar_from_dict,
        mod_consts.const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d18e174b7a780506b8ee55ed18289be0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_85e0ea626320458ddd4363cffbfdc559,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__49_merge_cookies(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__49_merge_cookies,
        mod_consts.const_str_plain_merge_cookies,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fb20d0f89af9da65ed1e29e6b5c13127,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__4_get_origin_req_host,
        mod_consts.const_str_plain_get_origin_req_host,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0,
#endif
        code_objects_602fcbd7ef2cc7d0b87c07d64f748bf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__5_get_full_url,
        mod_consts.const_str_plain_get_full_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b30191bdb52236874918a4b5c3c5db8b,
#endif
        code_objects_3b14ba7f9063ededee9fcf9ade576125,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_unverifiable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58322b83779ad7d89ba5c63e2fe2855c,
#endif
        code_objects_1feb286d594709bcad0fa4b364b3ffd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__7_has_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__7_has_header,
        mod_consts.const_str_plain_has_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a2d5b06d38da952ad812a68992fbb10,
#endif
        code_objects_785245362bf3b38e867a9ebec5c23767,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__8_get_header(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__8_get_header,
        mod_consts.const_str_plain_get_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6,
#endif
        code_objects_879002f6244449927024fd8ab5e53c67,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function__9_add_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function__9_add_header,
        mod_consts.const_str_plain_add_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b19ae27d1753e06c28990a42518b1f44,
#endif
        code_objects_e73375744af41271e23df827d171b175,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        mod_consts.const_str_digest_fd94370718eabfe17e896a713946f08f,
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

static function_impl_code const function_table_requests$cookies[] = {
impl_requests$cookies$$$function__1___init__,
impl_requests$cookies$$$function__2_get_type,
impl_requests$cookies$$$function__3_get_host,
impl_requests$cookies$$$function__4_get_origin_req_host,
impl_requests$cookies$$$function__5_get_full_url,
impl_requests$cookies$$$function__7_has_header,
impl_requests$cookies$$$function__8_get_header,
impl_requests$cookies$$$function__9_add_header,
impl_requests$cookies$$$function__10_add_unredirected_header,
impl_requests$cookies$$$function__11_get_new_headers,
impl_requests$cookies$$$function__12_unverifiable,
impl_requests$cookies$$$function__13_origin_req_host,
impl_requests$cookies$$$function__14_host,
impl_requests$cookies$$$function__15___init__,
impl_requests$cookies$$$function__16_info,
impl_requests$cookies$$$function__17_getheaders,
impl_requests$cookies$$$function__18_extract_cookies_to_jar,
impl_requests$cookies$$$function__19_get_cookie_header,
impl_requests$cookies$$$function__20_remove_cookie_by_name,
impl_requests$cookies$$$function__21_get,
impl_requests$cookies$$$function__22_set,
impl_requests$cookies$$$function__23_iterkeys,
impl_requests$cookies$$$function__24_keys,
impl_requests$cookies$$$function__25_itervalues,
impl_requests$cookies$$$function__26_values,
impl_requests$cookies$$$function__27_iteritems,
impl_requests$cookies$$$function__28_items,
impl_requests$cookies$$$function__29_list_domains,
impl_requests$cookies$$$function__30_list_paths,
impl_requests$cookies$$$function__31_multiple_domains,
impl_requests$cookies$$$function__32_get_dict,
impl_requests$cookies$$$function__33___contains__,
impl_requests$cookies$$$function__34___getitem__,
impl_requests$cookies$$$function__35___setitem__,
impl_requests$cookies$$$function__36___delitem__,
impl_requests$cookies$$$function__37_set_cookie,
impl_requests$cookies$$$function__38_update,
impl_requests$cookies$$$function__39__find,
impl_requests$cookies$$$function__40__find_no_duplicates,
impl_requests$cookies$$$function__41___getstate__,
impl_requests$cookies$$$function__42___setstate__,
impl_requests$cookies$$$function__43_copy,
impl_requests$cookies$$$function__44_get_policy,
impl_requests$cookies$$$function__45__copy_cookie_jar,
impl_requests$cookies$$$function__46_create_cookie,
impl_requests$cookies$$$function__47_morsel_to_cookie,
impl_requests$cookies$$$function__48_cookiejar_from_dict,
impl_requests$cookies$$$function__49_merge_cookies,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$cookies);
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
        module_requests$cookies,
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
        function_table_requests$cookies,
        sizeof(function_table_requests$cookies) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.cookies";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$cookies(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$cookies");

    // Store the module for future use.
    module_requests$cookies = module;

    moduledict_requests$cookies = MODULE_DICT(module_requests$cookies);

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
        PRINT_STRING("requests$cookies: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$cookies: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$cookies: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.cookies" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$cookies\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$cookies,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$cookies);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$cookies);
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

        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_requests$cookies$$$class__1_MockRequest_23 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$class__1_MockRequest_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_requests$cookies$$$class__2_MockResponse_103 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_requests$cookies$$$class__3_CookieConflictError_170 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_requests$cookies$$$class__4_RequestsCookieJar_176 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3;
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
tmp_assign_source_1 = mod_consts.const_str_digest_cac90769ee627c252065660cb8b178e8;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$cookies = MAKE_MODULE_FRAME(code_objects_904d57890f41edcd47d49cfb00edcee6, module_requests$cookies);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies);
assert(Py_REFCNT(frame_frame_requests$cookies) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_requests$cookies$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_requests$cookies$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_calendar;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 10;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_calendar, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 11;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_3 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 12;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__internal_utils;
tmp_globals_arg_value_4 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_to_native_string_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_requests$cookies->m_frame.f_lineno = 14;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_to_native_string,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_to_native_string);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_to_native_string, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_5 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_7473a5567049a7bdb6fe088da4a22f3f_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_requests$cookies->m_frame.f_lineno = 15;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_Morsel,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Morsel);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_Morsel, tmp_assign_source_9);
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
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_MutableMapping,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_MutableMapping);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MutableMapping, tmp_assign_source_10);
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
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_cookielib,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_cookielib);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookielib, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_urlparse);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlparse, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_requests$cookies,
        mod_consts.const_str_plain_urlunparse,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_urlunparse);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_urlunparse, tmp_assign_source_13);
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
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_6 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 18;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_14);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_dummy_threading;
tmp_globals_arg_value_7 = (PyObject *)moduledict_requests$cookies;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_requests$cookies->m_frame.f_lineno = 20;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_15);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 17;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_requests$cookies->m_frame)) {
        frame_frame_requests$cookies->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_requests$cookies$$$class__1_MockRequest_23 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_3af1e50b5bae7081cd680ab7677ec546;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MockRequest;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_23;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__2_get_type(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__3_get_host(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__4_get_origin_req_host(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_origin_req_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__5_get_full_url(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_full_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__6_is_unverifiable(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_is_unverifiable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__7_has_header(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_has_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__8_get_header(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__9_add_header(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_add_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__10_add_unredirected_header(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_add_unredirected_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__11_get_new_headers(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_get_new_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_requests$cookies$$$class__1_MockRequest_2 = MAKE_CLASS_FRAME(tstate, code_objects_46f654f4ab04eb275e76e526cb20d233, module_requests$cookies, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$class__1_MockRequest_2);
assert(Py_REFCNT(frame_frame_requests$cookies$$$class__1_MockRequest_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_1 = MAKE_FUNCTION_requests$cookies$$$function__12_unverifiable(tstate);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 90;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_unverifiable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_2 = MAKE_FUNCTION_requests$cookies$$$function__13_origin_req_host(tstate);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 94;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_origin_req_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_3 = MAKE_FUNCTION_requests$cookies$$$function__14_host(tstate);

frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame.f_lineno = 98;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain_host, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$class__1_MockRequest_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$class__1_MockRequest_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$class__1_MockRequest_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$class__1_MockRequest_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_requests$cookies$$$class__1_MockRequest_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__r_str_plain__new_headers_str_plain_type_tuple;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__1_MockRequest_23, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_MockRequest;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_requests$cookies$$$class__1_MockRequest_23;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 23;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_19;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_18 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_18);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_requests$cookies$$$class__1_MockRequest_23);
locals_requests$cookies$$$class__1_MockRequest_23 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__1_MockRequest_23);
locals_requests$cookies$$$class__1_MockRequest_23 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 23;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockRequest, tmp_assign_source_18);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_requests$cookies$$$class__2_MockResponse_103 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_9fe804301723bc424e67537337fb4581;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MockResponse;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__15___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__16_info(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, mod_consts.const_str_plain_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__17_getheaders(tstate);

tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, mod_consts.const_str_plain_getheaders, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain__headers_tuple;
tmp_result = DICT_SET_ITEM(locals_requests$cookies$$$class__2_MockResponse_103, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_MockResponse;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_requests$cookies$$$class__2_MockResponse_103;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 103;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_22 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_requests$cookies$$$class__2_MockResponse_103);
locals_requests$cookies$$$class__2_MockResponse_103 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__2_MockResponse_103);
locals_requests$cookies$$$class__2_MockResponse_103 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 103;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_MockResponse, tmp_assign_source_22);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_requests$cookies$$$function__18_extract_cookies_to_jar(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_cookies_to_jar, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_requests$cookies$$$function__19_get_cookie_header(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cookie_header, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_26 = MAKE_FUNCTION_requests$cookies$$$function__20_remove_cookie_by_name(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_cookie_by_name, tmp_assign_source_26);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_RuntimeError_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_CookieConflictError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 170;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_10;
}
frame_frame_requests$cookies->m_frame.f_lineno = 170;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 170;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_31;
}
branch_end_2:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_requests$cookies$$$class__3_CookieConflictError_170 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_CookieConflictError;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_170;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_dictset_value = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__3_CookieConflictError_170, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
branch_no_4:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_CookieConflictError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_requests$cookies$$$class__3_CookieConflictError_170;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 170;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_32 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_requests$cookies$$$class__3_CookieConflictError_170);
locals_requests$cookies$$$class__3_CookieConflictError_170 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__3_CookieConflictError_170);
locals_requests$cookies$$$class__3_CookieConflictError_170 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 170;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieConflictError, tmp_assign_source_32);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_requests$cookies$cookielib(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cookielib);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CookieJar);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_requests$cookies$MutableMapping(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MutableMapping);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assign_source_34, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_34);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_RequestsCookieJar;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 176;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_13;
}
frame_frame_requests$cookies->m_frame.f_lineno = 176;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_39;
}
branch_end_5:;
{
PyObject *tmp_assign_source_40;
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_requests$cookies$$$class__4_RequestsCookieJar_176 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_12188133309ffc390643b7a732954d08;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_bd70455b3ff03a7986678c37b248a150;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestsCookieJar;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_176;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3 = MAKE_CLASS_FRAME(tstate, code_objects_ec405243650a05d50665d2c2d3a99d9b, module_requests$cookies, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);
assert(Py_REFCNT(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__21_get(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__22_set(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_set, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__23_iterkeys(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_iterkeys, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__24_keys(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, const_str_plain_keys, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__25_itervalues(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_itervalues, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__26_values(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_values, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__27_iteritems(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_iteritems, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__28_items(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_items, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__29_list_domains(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_list_domains, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__30_list_paths(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_list_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__31_multiple_domains(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_multiple_domains, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__32_get_dict(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_get_dict, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__33___contains__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___contains__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__34___getitem__(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__35___setitem__(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___setitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__36___delitem__(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___delitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__37_set_cookie(tstate, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_set_cookie, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_closure_3[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__38_update(tstate, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__39__find(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain__find, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__40__find_no_duplicates(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain__find_no_duplicates, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__41___getstate__(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__42___setstate__(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__43_copy(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function__44_get_policy(tstate);

tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain_get_policy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_2 = "c";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_requests$cookies$$$class__4_RequestsCookieJar_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_15;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__cookies_lock_tuple;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$cookies$$$class__4_RequestsCookieJar_176, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
branch_no_7:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_RequestsCookieJar;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_requests$cookies$$$class__4_RequestsCookieJar_176;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_requests$cookies->m_frame.f_lineno = 176;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;

    goto try_except_handler_15;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_41);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_assign_source_40 = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_requests$cookies$$$class__4_RequestsCookieJar_176);
locals_requests$cookies$$$class__4_RequestsCookieJar_176 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$cookies$$$class__4_RequestsCookieJar_176);
locals_requests$cookies$$$class__4_RequestsCookieJar_176 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 176;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsCookieJar, tmp_assign_source_40);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$cookies->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$cookies, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$cookies);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_42;

tmp_assign_source_42 = MAKE_FUNCTION_requests$cookies$$$function__45__copy_cookie_jar(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_cookie_jar, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;

tmp_assign_source_43 = MAKE_FUNCTION_requests$cookies$$$function__46_create_cookie(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_create_cookie, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;

tmp_assign_source_44 = MAKE_FUNCTION_requests$cookies$$$function__47_morsel_to_cookie(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_morsel_to_cookie, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_none_true_tuple;
Py_INCREF(tmp_defaults_7);

tmp_assign_source_45 = MAKE_FUNCTION_requests$cookies$$$function__48_cookiejar_from_dict(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_cookiejar_from_dict, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;

tmp_assign_source_46 = MAKE_FUNCTION_requests$cookies$$$function__49_merge_cookies(tstate);

UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_cookies, tmp_assign_source_46);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$cookies", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.cookies" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$cookies);
    return module_requests$cookies;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$cookies", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

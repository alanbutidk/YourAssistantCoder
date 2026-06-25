/* Generated code for Python module 'google$oauth2$credentials'
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



/* The "module_google$oauth2$credentials" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$oauth2$credentials;
PyDictObject *moduledict_google$oauth2$credentials;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_token;
PyObject *const_str_plain_expiry;
PyObject *const_str_plain__refresh_token;
PyObject *const_str_plain__id_token;
PyObject *const_str_plain__scopes;
PyObject *const_str_plain__default_scopes;
PyObject *const_str_plain__granted_scopes;
PyObject *const_str_plain__token_uri;
PyObject *const_str_plain__client_id;
PyObject *const_str_plain__client_secret;
PyObject *const_str_plain__quota_project_id;
PyObject *const_str_plain__rapt_token;
PyObject *const_str_plain_refresh_handler;
PyObject *const_str_plain__enable_reauth_refresh;
PyObject *const_str_plain__trust_boundary;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_DEFAULT_UNIVERSE_DOMAIN;
PyObject *const_str_plain__universe_domain;
PyObject *const_str_plain__account;
PyObject *const_str_plain__cred_file_path;
PyObject *const_str_digest_b401b23fd0778dab62ee841deaed80cb;
PyObject *const_str_plain_copy;
PyObject *const_str_plain__refresh_handler;
PyObject *const_str_plain__refresh_worker;
PyObject *const_str_digest_aafa0c17e69a83e4d12177bbd74224a7;
PyObject *const_tuple_str_plain_token_tuple;
PyObject *const_tuple_str_plain_expiry_tuple;
PyObject *const_tuple_str_plain__refresh_token_tuple;
PyObject *const_tuple_str_plain__id_token_tuple;
PyObject *const_tuple_str_plain__scopes_tuple;
PyObject *const_tuple_str_plain__default_scopes_tuple;
PyObject *const_tuple_str_plain__granted_scopes_tuple;
PyObject *const_tuple_str_plain__token_uri_tuple;
PyObject *const_tuple_str_plain__client_id_tuple;
PyObject *const_tuple_str_plain__client_secret_tuple;
PyObject *const_tuple_str_plain__quota_project_id_tuple;
PyObject *const_tuple_str_plain__rapt_token_tuple;
PyObject *const_tuple_str_plain__enable_reauth_refresh_tuple;
PyObject *const_tuple_str_plain__trust_boundary_tuple;
PyObject *const_tuple_str_plain__universe_domain_tuple;
PyObject *const_tuple_str_plain__cred_file_path_tuple;
PyObject *const_tuple_str_plain__use_non_blocking_refresh_false_tuple;
PyObject *const_str_plain__use_non_blocking_refresh;
PyObject *const_tuple_str_plain__account_str_empty_tuple;
PyObject *const_str_digest_eee1446b5a04afad6fdae230e860e6a9;
PyObject *const_str_digest_29e34eeb9dbd003c402613cfea6822ef;
PyObject *const_str_digest_bb379ef31a789f5b04a33b665c8b98e3;
PyObject *const_str_digest_f54ed71ba5a351c43caf3d08728202a2;
PyObject *const_str_digest_2724c0aa555850f539128bc19d404790;
PyObject *const_str_digest_8000140a688f56c8ba8887a353561782;
PyObject *const_str_digest_a64d9cd8b9fb109e9196ab73a2be7d2d;
PyObject *const_str_digest_52d7c789c4eb9842dc0baa35b6700fac;
PyObject *const_str_digest_2c06deb98f5f6770225a45f1df4eb22a;
PyObject *const_str_digest_a8355a72dbf2b6af5206cf16ab99b1cf;
PyObject *const_str_plain_callable;
PyObject *const_str_digest_adce6f2e3eb275f2d4bfecd0344651d4;
PyObject *const_str_digest_ba6da00b858c10174e8541447937a419;
PyObject *const_str_digest_eed8de09743d63eb1f40411f56deb131;
PyObject *const_str_plain_refresh_token;
PyObject *const_str_plain_id_token;
PyObject *const_str_plain_token_uri;
PyObject *const_str_plain_client_id;
PyObject *const_str_plain_client_secret;
PyObject *const_str_plain_scopes;
PyObject *const_str_plain_default_scopes;
PyObject *const_str_plain_granted_scopes;
PyObject *const_str_plain_quota_project_id;
PyObject *const_str_plain_rapt_token;
PyObject *const_tuple_84a492bb99505b36f81782d5c93e9d99_tuple;
PyObject *const_str_plain_credential_source;
PyObject *const_str_plain_credential_type;
PyObject *const_str_digest_0779bfc72b477dbee373cd048b0d0f6e;
PyObject *const_str_plain_account;
PyObject *const_str_plain_principal;
PyObject *const_str_plain__make_copy;
PyObject *const_str_digest_f2065e4b0182014964e8506882bf0385;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_CRED_TYPE_USER;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_digest_55b2893b8cc4771ad5b80e3ff25d9fde;
PyObject *const_tuple_str_plain_scopes_tuple;
PyObject *const_tuple_str_digest_3709d0f52976a8f3f9668e5af27d9303_tuple;
PyObject *const_str_plain_datetime;
PyObject *const_tuple_str_digest_d1c8409e00f1fd9a68c5dc0fef7f8fbd_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_utcnow;
PyObject *const_str_plain_REFRESH_THRESHOLD;
PyObject *const_tuple_str_digest_7a3f086a845fd854660cbb92a7d0c065_tuple;
PyObject *const_tuple_str_digest_e4982a3a6bc1099a29781589885c0001_tuple;
PyObject *const_str_plain_reauth;
PyObject *const_str_plain_refresh_grant;
PyObject *const_tuple_bad9e7b9580d8787fee51c3455bc97ce_tuple;
PyObject *const_tuple_str_plain_id_token_tuple;
PyObject *const_str_plain_scope;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_2d0f7514714b17b8567cbf162aa6762d;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_set_4961d7a0a5941394c004ba3922e631a0;
PyObject *const_str_plain_difference;
PyObject *const_str_digest_cfefdc7161cf318e797cbd634496e1a6;
PyObject *const_str_plain_strptime;
PyObject *const_str_plain_rstrip;
PyObject *const_tuple_str_plain_Z_tuple;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_digest_671bca41c8e1d26bc4bf64e167ee3766;
PyObject *const_tuple_str_space_tuple;
PyObject *const_tuple_str_plain_refresh_token_tuple;
PyObject *const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT;
PyObject *const_tuple_str_plain_client_id_tuple;
PyObject *const_tuple_str_plain_client_secret_tuple;
PyObject *const_tuple_str_plain_quota_project_id_tuple;
PyObject *const_tuple_str_plain_rapt_token_tuple;
PyObject *const_tuple_str_plain_trust_boundary_tuple;
PyObject *const_tuple_str_plain_universe_domain_tuple;
PyObject *const_tuple_str_plain_account_str_empty_tuple;
PyObject *const_tuple_086271ee81831d4dc6ecb4d9bced15b4_tuple;
PyObject *const_str_digest_04a19b7482e41f14547245f1966a6335;
PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
PyObject *const_str_plain_json;
PyObject *const_str_plain_load;
PyObject *const_str_plain_from_authorized_user_info;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_02816319089c0f4c0e618968e44efd73;
PyObject *const_str_plain_universe_domain;
PyObject *const_str_plain_isoformat;
PyObject *const_str_plain_Z;
PyObject *const_str_plain_items;
PyObject *const_str_plain_dumps;
PyObject *const_str_digest_e30cc7113e44d86eee126114c0736ae5;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_tuple_str_digest_355d042b2a91debd0b3fcf23f40bc8f7_tuple;
PyObject *const_str_plain_UserAccessTokenCredentials;
PyObject *const_tuple_str_plain_account_str_plain_quota_project_id_tuple;
PyObject *const_str_digest_bea06ae8863b87e54e20ab82ee01fb43;
PyObject *const_str_plain__cloud_sdk;
PyObject *const_str_plain_get_auth_access_token;
PyObject *const_str_digest_16cc80874ba8ad658a2254efbb250b9a;
PyObject *const_str_plain_refresh;
PyObject *const_str_plain_apply;
PyObject *const_str_digest_c7c3c65889b3f2278203cf71b8a6f55c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_tuple_str_plain_datetime_tuple;
PyObject *const_str_plain_io;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__cloud_sdk_tuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_credentials_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain_reauth_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_67ea57fbefa3372859b0a4720ff03315_tuple;
PyObject *const_str_digest_569bac4d93375a3bb6dddf3fd713403e;
PyObject *const_str_digest_87a3e696d691b7be0a39ecbac31f66f0;
PyObject *const_str_plain__GOOGLE_OAUTH2_TOKEN_INFO_ENDPOINT;
PyObject *const_str_plain_ReadOnlyScoped;
PyObject *const_str_plain_CredentialsWithQuotaProject;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_67ea57fbefa3372859b0a4720ff03315;
PyObject *const_str_digest_2a730624e5280c4fd9289e13cb8d4192;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_57;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d;
PyObject *const_str_plain___setstate__;
PyObject *const_str_digest_65c69d935d835297b7585c50b855995e;
PyObject *const_str_plain_property;
PyObject *const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc;
PyObject *const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45;
PyObject *const_str_digest_ada12470a711f905405a4f18bcd86944;
PyObject *const_str_digest_38e4ae817b3789af2a33a24478b97870;
PyObject *const_str_digest_2e5849871a8fbb2be008320842a1e121;
PyObject *const_str_digest_1d8633fd4793bad389fb838799ffe343;
PyObject *const_str_digest_82cc106ce92469a027646c90e4408e6c;
PyObject *const_str_digest_365f5d7c68a5de015c893ef0393aa473;
PyObject *const_str_plain_requires_scopes;
PyObject *const_str_digest_c1f55ab516b4a48572f0044d037333d7;
PyObject *const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf;
PyObject *const_str_digest_f64df7434f9a5c360e40ee0eaac31743;
PyObject *const_str_plain_setter;
PyObject *const_str_digest_89f2159481eb389c34caf4270093141f;
PyObject *const_str_digest_c91c8525babaffcd4ed5a43632506f7c;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_plain_get_cred_info;
PyObject *const_str_digest_2902b573691aef3e2e3d3564ca94d182;
PyObject *const_str_plain_with_quota_project;
PyObject *const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513;
PyObject *const_str_plain_CredentialsWithTokenUri;
PyObject *const_str_plain_with_token_uri;
PyObject *const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8;
PyObject *const_str_plain_with_account;
PyObject *const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a;
PyObject *const_str_plain_CredentialsWithUniverseDomain;
PyObject *const_str_plain_with_universe_domain;
PyObject *const_str_digest_3875a7ce38684778d1daef8515e3d745;
PyObject *const_str_plain__metric_header_for_usage;
PyObject *const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a;
PyObject *const_str_digest_b8d96327bb876dc140fac3cfa41e9d75;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_6449be52c661e700ff36ac2ad1be8882;
PyObject *const_str_plain_from_authorized_user_file;
PyObject *const_str_digest_b860132fc26623ed8d23c37f940d36c2;
PyObject *const_str_plain_to_json;
PyObject *const_str_digest_3623d8875790452953d00a813a5839ac;
PyObject *const_tuple_127ef0f962b86855be0d3186e0f9d966_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_c5c6644d3d9aeeb7e0bef788910db56d;
PyObject *const_int_pos_559;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_623b1bd0fb45d9646e002d24be1383cb;
PyObject *const_str_digest_8410e845afac47fb9aeb9b52fbd09506;
PyObject *const_str_digest_cc28e8b19ef6f8992efda3834ea60372;
PyObject *const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23;
PyObject *const_str_plain_before_request;
PyObject *const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c;
PyObject *const_tuple_df257875f611c5f02dc7b92073d75b17_tuple;
PyObject *const_str_digest_1e2d971d45e94fc44791a8e2bbc2ea1e;
PyObject *const_str_digest_586b9e8c6fd4376902592a5f32a65232;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_dict_tuple;
PyObject *const_tuple_d877910032e4051bec40f1405c18208b_tuple;
PyObject *const_tuple_6c9650f114fee73e47500277e8bd4468_tuple;
PyObject *const_tuple_str_plain_self_str_plain_d_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cred_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple;
PyObject *const_tuple_59889e8fab51f584bd436343c10243f4_tuple;
PyObject *const_tuple_4409a2cb3cb083613c8aeb220e75b142_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cred_info_tuple;
PyObject *const_tuple_c5b0a7fdc9ff2d6463960ee6944af39e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_strip_str_plain_prep_tuple;
PyObject *const_tuple_str_plain_self_str_plain_account_str_plain_cred_tuple;
PyObject *const_tuple_str_plain_self_str_plain_account_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_uri_str_plain_cred_tuple;
PyObject *const_tuple_str_plain_self_str_plain_universe_domain_str_plain_cred_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[252];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.oauth2.credentials"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_expiry);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_token);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__id_token);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__scopes);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_scopes);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__granted_scopes);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_uri);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__client_id);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__client_secret);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__rapt_token);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_handler);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__enable_reauth_refresh);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__account);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__cred_file_path);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_b401b23fd0778dab62ee841deaed80cb);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_handler);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_worker);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_aafa0c17e69a83e4d12177bbd74224a7);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expiry_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__refresh_token_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__id_token_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__scopes_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__default_scopes_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__granted_scopes_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_uri_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_id_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_secret_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__quota_project_id_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__rapt_token_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__enable_reauth_refresh_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_boundary_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__universe_domain_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cred_file_path_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__use_non_blocking_refresh_false_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__use_non_blocking_refresh);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__account_str_empty_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_eee1446b5a04afad6fdae230e860e6a9);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_29e34eeb9dbd003c402613cfea6822ef);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb379ef31a789f5b04a33b665c8b98e3);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_f54ed71ba5a351c43caf3d08728202a2);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_2724c0aa555850f539128bc19d404790);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_8000140a688f56c8ba8887a353561782);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_a64d9cd8b9fb109e9196ab73a2be7d2d);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_52d7c789c4eb9842dc0baa35b6700fac);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c06deb98f5f6770225a45f1df4eb22a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8355a72dbf2b6af5206cf16ab99b1cf);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_adce6f2e3eb275f2d4bfecd0344651d4);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba6da00b858c10174e8541447937a419);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_eed8de09743d63eb1f40411f56deb131);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_id_token);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_uri);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_id);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_scopes);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_scopes);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_granted_scopes);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_quota_project_id);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_rapt_token);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_84a492bb99505b36f81782d5c93e9d99_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_type);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_0779bfc72b477dbee373cd048b0d0f6e);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_account);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_principal);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_copy);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2065e4b0182014964e8506882bf0385);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_USER);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_55b2893b8cc4771ad5b80e3ff25d9fde);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3709d0f52976a8f3f9668e5af27d9303_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1c8409e00f1fd9a68c5dc0fef7f8fbd_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_REFRESH_THRESHOLD);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7a3f086a845fd854660cbb92a7d0c065_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e4982a3a6bc1099a29781589885c0001_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_reauth);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_bad9e7b9580d8787fee51c3455bc97ce_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_token_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d0f7514714b17b8567cbf162aa6762d);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_set_4961d7a0a5941394c004ba3922e631a0);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_difference);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfefdc7161cf318e797cbd634496e1a6);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_strptime);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Z_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_671bca41c8e1d26bc4bf64e167ee3766);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_refresh_token_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_id_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_secret_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rapt_token_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_boundary_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_universe_domain_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_account_str_empty_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_086271ee81831d4dc6ecb4d9bced15b4_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_04a19b7482e41f14547245f1966a6335);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_info);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_02816319089c0f4c0e618968e44efd73);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_isoformat);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Z);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_e30cc7113e44d86eee126114c0736ae5);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_355d042b2a91debd0b3fcf23f40bc8f7_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenCredentials);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_account_str_plain_quota_project_id_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_bea06ae8863b87e54e20ab82ee01fb43);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__cloud_sdk);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_access_token);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_16cc80874ba8ad658a2254efbb250b9a);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7c3c65889b3f2278203cf71b8a6f55c);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cloud_sdk_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reauth_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_67ea57fbefa3372859b0a4720ff03315_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_87a3e696d691b7be0a39ecbac31f66f0);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_INFO_ENDPOINT);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadOnlyScoped);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_67ea57fbefa3372859b0a4720ff03315);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a730624e5280c4fd9289e13cb8d4192);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_57);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_65c69d935d835297b7585c50b855995e);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_ada12470a711f905405a4f18bcd86944);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_38e4ae817b3789af2a33a24478b97870);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e5849871a8fbb2be008320842a1e121);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d8633fd4793bad389fb838799ffe343);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_82cc106ce92469a027646c90e4408e6c);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_365f5d7c68a5de015c893ef0393aa473);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_89f2159481eb389c34caf4270093141f);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTokenUri);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_token_uri);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_account);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithUniverseDomain);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_universe_domain);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_3875a7ce38684778d1daef8515e3d745);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_6449be52c661e700ff36ac2ad1be8882);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_file);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_b860132fc26623ed8d23c37f940d36c2);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_json);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_3623d8875790452953d00a813a5839ac);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_127ef0f962b86855be0d3186e0f9d966_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5c6644d3d9aeeb7e0bef788910db56d);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_int_pos_559);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_623b1bd0fb45d9646e002d24be1383cb);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_8410e845afac47fb9aeb9b52fbd09506);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc28e8b19ef6f8992efda3834ea60372);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_request);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_df257875f611c5f02dc7b92073d75b17_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e2d971d45e94fc44791a8e2bbc2ea1e);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_586b9e8c6fd4376902592a5f32a65232);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_dict_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_d877910032e4051bec40f1405c18208b_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_6c9650f114fee73e47500277e8bd4468_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_d_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_59889e8fab51f584bd436343c10243f4_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_4409a2cb3cb083613c8aeb220e75b142_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_info_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_c5b0a7fdc9ff2d6463960ee6944af39e_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strip_str_plain_prep_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_account_str_plain_cred_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_account_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_str_plain_cred_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_str_plain_cred_tuple);
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
void checkModuleConstants_google$oauth2$credentials(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expiry);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_token);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__id_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__id_token);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scopes);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_scopes);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__granted_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__granted_scopes);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_uri);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__client_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client_id);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__client_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client_secret);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quota_project_id);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__rapt_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__rapt_token);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_handler);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__enable_reauth_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__enable_reauth_refresh);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trust_boundary);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__universe_domain);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__account);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__cred_file_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cred_file_path);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_b401b23fd0778dab62ee841deaed80cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b401b23fd0778dab62ee841deaed80cb);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_handler);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_worker);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_aafa0c17e69a83e4d12177bbd74224a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aafa0c17e69a83e4d12177bbd74224a7);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_token_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expiry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_expiry_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__refresh_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__refresh_token_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__id_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__id_token_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__scopes_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__default_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__default_scopes_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__granted_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__granted_scopes_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_uri_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__token_uri_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_id_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_secret_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_secret_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__quota_project_id_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__rapt_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__rapt_token_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__enable_reauth_refresh_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__enable_reauth_refresh_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__trust_boundary_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__universe_domain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__universe_domain_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cred_file_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cred_file_path_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__use_non_blocking_refresh_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__use_non_blocking_refresh_false_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__use_non_blocking_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__use_non_blocking_refresh);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__account_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__account_str_empty_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_eee1446b5a04afad6fdae230e860e6a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eee1446b5a04afad6fdae230e860e6a9);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_29e34eeb9dbd003c402613cfea6822ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29e34eeb9dbd003c402613cfea6822ef);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb379ef31a789f5b04a33b665c8b98e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb379ef31a789f5b04a33b665c8b98e3);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_f54ed71ba5a351c43caf3d08728202a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f54ed71ba5a351c43caf3d08728202a2);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_2724c0aa555850f539128bc19d404790));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2724c0aa555850f539128bc19d404790);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_8000140a688f56c8ba8887a353561782));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8000140a688f56c8ba8887a353561782);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_a64d9cd8b9fb109e9196ab73a2be7d2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a64d9cd8b9fb109e9196ab73a2be7d2d);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_52d7c789c4eb9842dc0baa35b6700fac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52d7c789c4eb9842dc0baa35b6700fac);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c06deb98f5f6770225a45f1df4eb22a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c06deb98f5f6770225a45f1df4eb22a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8355a72dbf2b6af5206cf16ab99b1cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8355a72dbf2b6af5206cf16ab99b1cf);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_adce6f2e3eb275f2d4bfecd0344651d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adce6f2e3eb275f2d4bfecd0344651d4);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba6da00b858c10174e8541447937a419));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba6da00b858c10174e8541447937a419);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_eed8de09743d63eb1f40411f56deb131));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eed8de09743d63eb1f40411f56deb131);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_token);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_id_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id_token);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_uri);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_id);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_secret);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scopes);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_scopes);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_granted_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_granted_scopes);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quota_project_id);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_rapt_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rapt_token);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_84a492bb99505b36f81782d5c93e9d99_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_84a492bb99505b36f81782d5c93e9d99_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_source);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_type);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_0779bfc72b477dbee373cd048b0d0f6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0779bfc72b477dbee373cd048b0d0f6e);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_account);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_principal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_principal);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_copy);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2065e4b0182014964e8506882bf0385));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2065e4b0182014964e8506882bf0385);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_USER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_USER);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_55b2893b8cc4771ad5b80e3ff25d9fde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55b2893b8cc4771ad5b80e3ff25d9fde);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scopes_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3709d0f52976a8f3f9668e5af27d9303_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3709d0f52976a8f3f9668e5af27d9303_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d1c8409e00f1fd9a68c5dc0fef7f8fbd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d1c8409e00f1fd9a68c5dc0fef7f8fbd_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_REFRESH_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REFRESH_THRESHOLD);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7a3f086a845fd854660cbb92a7d0c065_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7a3f086a845fd854660cbb92a7d0c065_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e4982a3a6bc1099a29781589885c0001_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e4982a3a6bc1099a29781589885c0001_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_reauth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reauth);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_grant);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_bad9e7b9580d8787fee51c3455bc97ce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bad9e7b9580d8787fee51c3455bc97ce_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_id_token_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d0f7514714b17b8567cbf162aa6762d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d0f7514714b17b8567cbf162aa6762d);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_set_4961d7a0a5941394c004ba3922e631a0));
CHECK_OBJECT_DEEP(mod_consts.const_set_4961d7a0a5941394c004ba3922e631a0);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_difference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_difference);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfefdc7161cf318e797cbd634496e1a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfefdc7161cf318e797cbd634496e1a6);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_strptime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strptime);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Z_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Z_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_671bca41c8e1d26bc4bf64e167ee3766));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_671bca41c8e1d26bc4bf64e167ee3766);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_refresh_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_refresh_token_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_client_id_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_client_secret_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_client_secret_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rapt_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rapt_token_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_trust_boundary_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_universe_domain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_universe_domain_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_account_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_account_str_empty_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_086271ee81831d4dc6ecb4d9bced15b4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_086271ee81831d4dc6ecb4d9bced15b4_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_04a19b7482e41f14547245f1966a6335));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04a19b7482e41f14547245f1966a6335);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_authorized_user_info);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_02816319089c0f4c0e618968e44efd73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02816319089c0f4c0e618968e44efd73);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_universe_domain);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_isoformat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isoformat);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Z));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Z);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_e30cc7113e44d86eee126114c0736ae5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e30cc7113e44d86eee126114c0736ae5);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_355d042b2a91debd0b3fcf23f40bc8f7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_355d042b2a91debd0b3fcf23f40bc8f7_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserAccessTokenCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UserAccessTokenCredentials);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_account_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_account_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_bea06ae8863b87e54e20ab82ee01fb43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bea06ae8863b87e54e20ab82ee01fb43);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__cloud_sdk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cloud_sdk);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_auth_access_token);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_16cc80874ba8ad658a2254efbb250b9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16cc80874ba8ad658a2254efbb250b9a);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7c3c65889b3f2278203cf71b8a6f55c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7c3c65889b3f2278203cf71b8a6f55c);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_datetime_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cloud_sdk_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cloud_sdk_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_credentials_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reauth_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reauth_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_67ea57fbefa3372859b0a4720ff03315_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_67ea57fbefa3372859b0a4720ff03315_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_87a3e696d691b7be0a39ecbac31f66f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87a3e696d691b7be0a39ecbac31f66f0);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_INFO_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_INFO_ENDPOINT);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadOnlyScoped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadOnlyScoped);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithQuotaProject);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_67ea57fbefa3372859b0a4720ff03315));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67ea57fbefa3372859b0a4720ff03315);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a730624e5280c4fd9289e13cb8d4192));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a730624e5280c4fd9289e13cb8d4192);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_57));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_57);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_65c69d935d835297b7585c50b855995e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65c69d935d835297b7585c50b855995e);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_ada12470a711f905405a4f18bcd86944));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ada12470a711f905405a4f18bcd86944);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_38e4ae817b3789af2a33a24478b97870));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38e4ae817b3789af2a33a24478b97870);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e5849871a8fbb2be008320842a1e121));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e5849871a8fbb2be008320842a1e121);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d8633fd4793bad389fb838799ffe343));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d8633fd4793bad389fb838799ffe343);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_82cc106ce92469a027646c90e4408e6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82cc106ce92469a027646c90e4408e6c);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_365f5d7c68a5de015c893ef0393aa473));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_365f5d7c68a5de015c893ef0393aa473);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requires_scopes);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_89f2159481eb389c34caf4270093141f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89f2159481eb389c34caf4270093141f);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cred_info);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_quota_project);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTokenUri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithTokenUri);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_token_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_token_uri);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_account);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithUniverseDomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithUniverseDomain);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_universe_domain);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_3875a7ce38684778d1daef8515e3d745));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3875a7ce38684778d1daef8515e3d745);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__metric_header_for_usage);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_6449be52c661e700ff36ac2ad1be8882));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6449be52c661e700ff36ac2ad1be8882);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_authorized_user_file);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_b860132fc26623ed8d23c37f940d36c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b860132fc26623ed8d23c37f940d36c2);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_json);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_3623d8875790452953d00a813a5839ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3623d8875790452953d00a813a5839ac);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_127ef0f962b86855be0d3186e0f9d966_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_127ef0f962b86855be0d3186e0f9d966_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5c6644d3d9aeeb7e0bef788910db56d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5c6644d3d9aeeb7e0bef788910db56d);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_int_pos_559));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_559);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_623b1bd0fb45d9646e002d24be1383cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_623b1bd0fb45d9646e002d24be1383cb);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_8410e845afac47fb9aeb9b52fbd09506));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8410e845afac47fb9aeb9b52fbd09506);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc28e8b19ef6f8992efda3834ea60372));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc28e8b19ef6f8992efda3834ea60372);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_request);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_df257875f611c5f02dc7b92073d75b17_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df257875f611c5f02dc7b92073d75b17_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e2d971d45e94fc44791a8e2bbc2ea1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e2d971d45e94fc44791a8e2bbc2ea1e);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_586b9e8c6fd4376902592a5f32a65232));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_586b9e8c6fd4376902592a5f32a65232);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_dict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_dict_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_d877910032e4051bec40f1405c18208b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d877910032e4051bec40f1405c18208b_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_6c9650f114fee73e47500277e8bd4468_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c9650f114fee73e47500277e8bd4468_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_d_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_59889e8fab51f584bd436343c10243f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_59889e8fab51f584bd436343c10243f4_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_4409a2cb3cb083613c8aeb220e75b142_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4409a2cb3cb083613c8aeb220e75b142_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cred_info_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_c5b0a7fdc9ff2d6463960ee6944af39e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5b0a7fdc9ff2d6463960ee6944af39e_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strip_str_plain_prep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_strip_str_plain_prep_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_account_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_account_str_plain_cred_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_account_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_account_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_uri_str_plain_cred_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_str_plain_cred_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_google$oauth2$credentials$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$UserAccessTokenCredentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenCredentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserAccessTokenCredentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserAccessTokenCredentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserAccessTokenCredentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserAccessTokenCredentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenCredentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenCredentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenCredentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$_GOOGLE_OAUTH2_TOKEN_ENDPOINT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$_cloud_sdk(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__cloud_sdk);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cloud_sdk);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cloud_sdk, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cloud_sdk);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cloud_sdk, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__cloud_sdk);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__cloud_sdk);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__cloud_sdk);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metrics);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metrics, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metrics);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metrics, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$reauth(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reauth);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reauth, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reauth);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reauth, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$credentials$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_72e9a496cfffb9f96a8a222c2d8b7b9c;
static PyCodeObject *code_objects_0150a10143c8e2050663c6e109a46013;
static PyCodeObject *code_objects_df1b6e4959ad78461239521a47e82f38;
static PyCodeObject *code_objects_1aeb111331dcdcabd8241879aa1101a2;
static PyCodeObject *code_objects_24c8c94e564842f157724a5909a09ff3;
static PyCodeObject *code_objects_a56ec56e1fd7ed188dbbabe84c83da28;
static PyCodeObject *code_objects_5d071661f255dca83c55e9cbbbe19144;
static PyCodeObject *code_objects_8005377f07c0f43cf6c7b3f3033c1a02;
static PyCodeObject *code_objects_1095345f6aab87ab140dd45688c1d28d;
static PyCodeObject *code_objects_7c2b8ce7e562d127fc590a7c1fd38f86;
static PyCodeObject *code_objects_1a25d7cfffc12f7a7114dfe1992d34ac;
static PyCodeObject *code_objects_56cb18129a1be2014858830f5a340602;
static PyCodeObject *code_objects_696646613b82c88b7e4f43a4a46fc273;
static PyCodeObject *code_objects_becd7c9d6b02862d060a01cf9ec7f5ac;
static PyCodeObject *code_objects_8a7e226ddb9e3cd3b4e0e956a944fd75;
static PyCodeObject *code_objects_8b89c265bd72e861b2db96a4562b9896;
static PyCodeObject *code_objects_fe36fb61c87d69b7008eabde7b99da75;
static PyCodeObject *code_objects_357c3f3b07a9b3b8d4cd7e4e01f70a56;
static PyCodeObject *code_objects_57d37d9c6952962402b41c6ec1afe23e;
static PyCodeObject *code_objects_c0b560484a4f3f958136567e26542994;
static PyCodeObject *code_objects_b2f8048b1b6853a3eb2461f1b4f94163;
static PyCodeObject *code_objects_3f742e7145b5a7fd0af202e2984d6622;
static PyCodeObject *code_objects_2d9e135bdf5abb6f0346416f31055759;
static PyCodeObject *code_objects_b2b8078aa3f6ff51e99a8119a5079b15;
static PyCodeObject *code_objects_a49365f979ddde509a0ad67e7b4af096;
static PyCodeObject *code_objects_a5eefa760fb8f850926905739776167f;
static PyCodeObject *code_objects_db62c8ae3e169542ab9bec58246e09ed;
static PyCodeObject *code_objects_4bccb0525ad63419c8a8676a7cfddf9d;
static PyCodeObject *code_objects_133537adf54730dfddd608ed8e313cbf;
static PyCodeObject *code_objects_68bbb0fcfe58f0cd9e6332ca86c4124b;
static PyCodeObject *code_objects_7a264a245cbfe4c6acd1511e7e13267d;
static PyCodeObject *code_objects_6d57b44bb54121a2266f7a97adfab3a5;
static PyCodeObject *code_objects_02ffad1f996bfa2d11067534588b101f;
static PyCodeObject *code_objects_4e6ad7be4ddd3071668ed3e324aab5d0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1e2d971d45e94fc44791a8e2bbc2ea1e); CHECK_OBJECT(module_filename_obj);
code_objects_72e9a496cfffb9f96a8a222c2d8b7b9c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_586b9e8c6fd4376902592a5f32a65232, mod_consts.const_str_digest_586b9e8c6fd4376902592a5f32a65232, NULL, NULL, 0, 0, 0);
code_objects_0150a10143c8e2050663c6e109a46013 = MAKE_CODE_OBJECT(module_filename_obj, 57, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_df1b6e4959ad78461239521a47e82f38 = MAKE_CODE_OBJECT(module_filename_obj, 559, 0, mod_consts.const_str_plain_UserAccessTokenCredentials, mod_consts.const_str_plain_UserAccessTokenCredentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1aeb111331dcdcabd8241879aa1101a2 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d, mod_consts.const_tuple_str_plain_self_str_plain_state_dict_tuple, NULL, 1, 0, 0);
code_objects_24c8c94e564842f157724a5909a09ff3 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_d877910032e4051bec40f1405c18208b_tuple, NULL, 18, 0, 0);
code_objects_a56ec56e1fd7ed188dbbabe84c83da28 = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_623b1bd0fb45d9646e002d24be1383cb, mod_consts.const_tuple_6c9650f114fee73e47500277e8bd4468_tuple, NULL, 3, 0, 0);
code_objects_5d071661f255dca83c55e9cbbbe19144 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_65c69d935d835297b7585c50b855995e, mod_consts.const_tuple_str_plain_self_str_plain_d_tuple, NULL, 2, 0, 0);
code_objects_8005377f07c0f43cf6c7b3f3033c1a02 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_copy, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple, NULL, 1, 0, 0);
code_objects_1095345f6aab87ab140dd45688c1d28d = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__metric_header_for_usage, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7c2b8ce7e562d127fc590a7c1fd38f86 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_account, mod_consts.const_str_digest_89f2159481eb389c34caf4270093141f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1a25d7cfffc12f7a7114dfe1992d34ac = MAKE_CODE_OBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_before_request, mod_consts.const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple, NULL, 5, 0, 0);
code_objects_56cb18129a1be2014858830f5a340602 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_client_id, mod_consts.const_str_digest_1d8633fd4793bad389fb838799ffe343, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_696646613b82c88b7e4f43a4a46fc273 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_client_secret, mod_consts.const_str_digest_82cc106ce92469a027646c90e4408e6c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_becd7c9d6b02862d060a01cf9ec7f5ac = MAKE_CODE_OBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_authorized_user_file, mod_consts.const_str_digest_b860132fc26623ed8d23c37f940d36c2, mod_consts.const_tuple_59889e8fab51f584bd436343c10243f4_tuple, NULL, 3, 0, 0);
code_objects_8a7e226ddb9e3cd3b4e0e956a944fd75 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_authorized_user_info, mod_consts.const_str_digest_6449be52c661e700ff36ac2ad1be8882, mod_consts.const_tuple_4409a2cb3cb083613c8aeb220e75b142_tuple, NULL, 3, 0, 0);
code_objects_8b89c265bd72e861b2db96a4562b9896 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cred_info, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182, mod_consts.const_tuple_str_plain_self_str_plain_cred_info_tuple, NULL, 1, 0, 0);
code_objects_fe36fb61c87d69b7008eabde7b99da75 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_granted_scopes, mod_consts.const_str_digest_ada12470a711f905405a4f18bcd86944, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_357c3f3b07a9b3b8d4cd7e4e01f70a56 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_id_token, mod_consts.const_str_digest_2e5849871a8fbb2be008320842a1e121, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_57d37d9c6952962402b41c6ec1afe23e = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_rapt_token, mod_consts.const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c0b560484a4f3f958136567e26542994 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75, mod_consts.const_tuple_c5b0a7fdc9ff2d6463960ee6944af39e_tuple, NULL, 2, 0, 0);
code_objects_b2f8048b1b6853a3eb2461f1b4f94163 = MAKE_CODE_OBJECT(module_filename_obj, 600, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_3f742e7145b5a7fd0af202e2984d6622 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_handler, mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2d9e135bdf5abb6f0346416f31055759 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_handler, mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_b2b8078aa3f6ff51e99a8119a5079b15 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_token, mod_consts.const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a49365f979ddde509a0ad67e7b4af096 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_requires_scopes, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a5eefa760fb8f850926905739776167f = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_scopes, mod_consts.const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_db62c8ae3e169542ab9bec58246e09ed = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_to_json, mod_consts.const_str_digest_3623d8875790452953d00a813a5839ac, mod_consts.const_tuple_str_plain_self_str_plain_strip_str_plain_prep_tuple, NULL, 2, 0, 0);
code_objects_4bccb0525ad63419c8a8676a7cfddf9d = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_uri, mod_consts.const_str_digest_38e4ae817b3789af2a33a24478b97870, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_133537adf54730dfddd608ed8e313cbf = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_account, mod_consts.const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a, mod_consts.const_tuple_str_plain_self_str_plain_account_str_plain_cred_tuple, NULL, 2, 0, 0);
code_objects_68bbb0fcfe58f0cd9e6332ca86c4124b = MAKE_CODE_OBJECT(module_filename_obj, 584, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_account, mod_consts.const_str_digest_8410e845afac47fb9aeb9b52fbd09506, mod_consts.const_tuple_str_plain_self_str_plain_account_tuple, NULL, 2, 0, 0);
code_objects_7a264a245cbfe4c6acd1511e7e13267d = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple, NULL, 2, 0, 0);
code_objects_6d57b44bb54121a2266f7a97adfab3a5 = MAKE_CODE_OBJECT(module_filename_obj, 597, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_cc28e8b19ef6f8992efda3834ea60372, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple, NULL, 2, 0, 0);
code_objects_02ffad1f996bfa2d11067534588b101f = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_token_uri, mod_consts.const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_str_plain_cred_tuple, NULL, 2, 0, 0);
code_objects_4e6ad7be4ddd3071668ed3e324aab5d0 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_universe_domain, mod_consts.const_str_digest_3875a7ce38684778d1daef8515e3d745, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_str_plain_cred_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__10_client_secret(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__11_requires_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__12_rapt_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__13_refresh_handler(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__14_refresh_handler(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__15_account(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__16__make_copy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__17_get_cred_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__18_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__19_with_token_uri(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__20_with_account(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__21_with_universe_domain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__22__metric_header_for_usage(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__23_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__24_from_authorized_user_info(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__25_from_authorized_user_file(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__26_to_json(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__27___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__28_with_account(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__29_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__2___getstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__30_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__31_before_request(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__3___setstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__4_refresh_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__5_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__6_granted_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__7_token_uri(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__8_id_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__9_client_id(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$oauth2$credentials$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token = python_pars[1];
PyObject *par_refresh_token = python_pars[2];
PyObject *par_id_token = python_pars[3];
PyObject *par_token_uri = python_pars[4];
PyObject *par_client_id = python_pars[5];
PyObject *par_client_secret = python_pars[6];
PyObject *par_scopes = python_pars[7];
PyObject *par_default_scopes = python_pars[8];
PyObject *par_quota_project_id = python_pars[9];
PyObject *par_expiry = python_pars[10];
PyObject *par_rapt_token = python_pars[11];
PyObject *par_refresh_handler = python_pars[12];
PyObject *par_enable_reauth_refresh = python_pars[13];
PyObject *par_granted_scopes = python_pars[14];
PyObject *par_trust_boundary = python_pars[15];
PyObject *par_universe_domain = python_pars[16];
PyObject *par_account = python_pars[17];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_24c8c94e564842f157724a5909a09ff3, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__1___init__->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__1___init__ = cache_frame_frame_google$oauth2$credentials$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$oauth2$credentials$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$oauth2$credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__1___init__->m_frame.f_lineno = 139;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_token);
tmp_assattr_value_1 = par_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_expiry);
tmp_assattr_value_2 = par_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_refresh_token);
tmp_assattr_value_3 = par_refresh_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__refresh_token, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_id_token);
tmp_assattr_value_4 = par_id_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__id_token, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_scopes);
tmp_cmp_expr_left_1 = par_scopes;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_scopes);
tmp_isinstance_inst_1 = par_scopes;
tmp_isinstance_cls_1 = (PyObject *)&PySet_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assattr_value_5;
PyObject *tmp_list_arg_1;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_scopes);
tmp_list_arg_1 = par_scopes;
tmp_assattr_value_5 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__scopes, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_scopes);
tmp_assattr_value_6 = par_scopes;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__scopes, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_default_scopes);
tmp_assattr_value_7 = par_default_scopes;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__default_scopes, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_granted_scopes);
tmp_assattr_value_8 = par_granted_scopes;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__granted_scopes, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_token_uri);
tmp_assattr_value_9 = par_token_uri;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__token_uri, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_client_id);
tmp_assattr_value_10 = par_client_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__client_id, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_client_secret);
tmp_assattr_value_11 = par_client_secret;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__client_secret, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_12 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(par_rapt_token);
tmp_assattr_value_13 = par_rapt_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__rapt_token, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(par_refresh_handler);
tmp_assattr_value_14 = par_refresh_handler;
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_refresh_handler, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
CHECK_OBJECT(par_enable_reauth_refresh);
tmp_assattr_value_15 = par_enable_reauth_refresh;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain__enable_reauth_refresh, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
CHECK_OBJECT(par_trust_boundary);
tmp_assattr_value_16 = par_trust_boundary;
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_17;
CHECK_OBJECT(par_universe_domain);
tmp_or_left_value_1 = par_universe_domain;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_1 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_assattr_value_17 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_17 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain__universe_domain, tmp_assattr_value_17);
CHECK_OBJECT(tmp_assattr_value_17);
Py_DECREF(tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_assattr_target_18;
CHECK_OBJECT(par_account);
tmp_or_left_value_2 = par_account;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = const_str_empty;
tmp_assattr_value_18 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assattr_value_18 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_18 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain__account, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_assattr_target_19;
tmp_assattr_value_19 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_19 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain__cred_file_path, tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__1___init__,
    type_description_1,
    par_self,
    par_token,
    par_refresh_token,
    par_id_token,
    par_token_uri,
    par_client_id,
    par_client_secret,
    par_scopes,
    par_default_scopes,
    par_quota_project_id,
    par_expiry,
    par_rapt_token,
    par_refresh_handler,
    par_enable_reauth_refresh,
    par_granted_scopes,
    par_trust_boundary,
    par_universe_domain,
    par_account,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__1___init__ == cache_frame_frame_google$oauth2$credentials$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__1___init__);
    cache_frame_frame_google$oauth2$credentials$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__1___init__);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_id_token);
Py_DECREF(par_id_token);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
CHECK_OBJECT(par_expiry);
Py_DECREF(par_expiry);
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
CHECK_OBJECT(par_refresh_handler);
Py_DECREF(par_refresh_handler);
CHECK_OBJECT(par_enable_reauth_refresh);
Py_DECREF(par_enable_reauth_refresh);
CHECK_OBJECT(par_granted_scopes);
Py_DECREF(par_granted_scopes);
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_id_token);
Py_DECREF(par_id_token);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
CHECK_OBJECT(par_expiry);
Py_DECREF(par_expiry);
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
CHECK_OBJECT(par_refresh_handler);
Py_DECREF(par_refresh_handler);
CHECK_OBJECT(par_enable_reauth_refresh);
Py_DECREF(par_enable_reauth_refresh);
CHECK_OBJECT(par_granted_scopes);
Py_DECREF(par_granted_scopes);
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
CHECK_OBJECT(par_account);
Py_DECREF(par_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__2___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_state_dict = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__2___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1aeb111331dcdcabd8241879aa1101a2, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__2___getstate__ = cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__2___getstate__);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__2___getstate__) == 2);

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


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__2___getstate__->m_frame.f_lineno = 167;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_state_dict == NULL);
var_state_dict = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain__refresh_handler;
CHECK_OBJECT(var_state_dict);
tmp_cmp_expr_right_1 = var_state_dict;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(var_state_dict);
tmp_delsubscr_target_1 = var_state_dict;
tmp_delsubscr_subscript_1 = mod_consts.const_str_plain__refresh_handler;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain__refresh_worker;
CHECK_OBJECT(var_state_dict);
tmp_cmp_expr_right_2 = var_state_dict;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
PyObject *tmp_delsubscr_target_2;
PyObject *tmp_delsubscr_subscript_2;
CHECK_OBJECT(var_state_dict);
tmp_delsubscr_target_2 = var_state_dict;
tmp_delsubscr_subscript_2 = mod_consts.const_str_plain__refresh_worker;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__2___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__2___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__2___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__2___getstate__,
    type_description_1,
    par_self,
    var_state_dict
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__2___getstate__ == cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__);
    cache_frame_frame_google$oauth2$credentials$$$function__2___getstate__ = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__2___getstate__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_state_dict);
tmp_return_value = var_state_dict;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state_dict);
CHECK_OBJECT(var_state_dict);
Py_DECREF(var_state_dict);
var_state_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_state_dict);
var_state_dict = NULL;
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


static PyObject *impl_google$oauth2$credentials$$$function__3___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_d = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__3___setstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5d071661f255dca83c55e9cbbbe19144, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__3___setstate__ = cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__3___setstate__);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__3___setstate__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_d);
tmp_expression_value_1 = par_d;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 182;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_token_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_d);
tmp_expression_value_2 = par_d;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 183;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_expiry_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_d);
tmp_expression_value_3 = par_d;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 184;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain__refresh_token_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__refresh_token, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_d);
tmp_expression_value_4 = par_d;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 185;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain__id_token_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__id_token, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_d);
tmp_expression_value_5 = par_d;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 186;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain__scopes_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__scopes, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_d);
tmp_expression_value_6 = par_d;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 187;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain__default_scopes_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__default_scopes, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_d);
tmp_expression_value_7 = par_d;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 188;
tmp_assattr_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain__granted_scopes_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__granted_scopes, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_d);
tmp_expression_value_8 = par_d;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 189;
tmp_assattr_value_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain__token_uri_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__token_uri, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_d);
tmp_expression_value_9 = par_d;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 190;
tmp_assattr_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain__client_id_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__client_id, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_d);
tmp_expression_value_10 = par_d;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 191;
tmp_assattr_value_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain__client_secret_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain__client_secret, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_d);
tmp_expression_value_11 = par_d;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 192;
tmp_assattr_value_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain__quota_project_id_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_d);
tmp_expression_value_12 = par_d;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 193;
tmp_assattr_value_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain__rapt_token_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__rapt_token, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(par_d);
tmp_expression_value_13 = par_d;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 194;
tmp_assattr_value_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain__enable_reauth_refresh_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assattr_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__enable_reauth_refresh, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_14;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(par_d);
tmp_expression_value_14 = par_d;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 195;
tmp_assattr_value_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain__trust_boundary_tuple);

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assattr_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_assattr_target_15;
CHECK_OBJECT(par_d);
tmp_expression_value_15 = par_d;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 197;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain__universe_domain_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 197;
type_description_1 = "oo";
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
tmp_expression_value_16 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_15 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_15 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain__universe_domain, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_assattr_target_16;
CHECK_OBJECT(par_d);
tmp_expression_value_17 = par_d;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_get);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 199;
tmp_assattr_value_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain__cred_file_path_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assattr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain__cred_file_path, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain__refresh_handler, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_assattr_target_18;
tmp_assattr_value_18 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_18 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain__refresh_worker, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_assattr_target_19;
CHECK_OBJECT(par_d);
tmp_expression_value_18 = par_d;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 203;
tmp_assattr_value_19 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_17, mod_consts.const_tuple_str_plain__use_non_blocking_refresh_false_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assattr_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_19 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain__use_non_blocking_refresh, tmp_assattr_value_19);
CHECK_OBJECT(tmp_assattr_value_19);
Py_DECREF(tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_assattr_target_20;
CHECK_OBJECT(par_d);
tmp_expression_value_19 = par_d;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame.f_lineno = 204;
tmp_assattr_value_20 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_18, mod_consts.const_tuple_str_plain__account_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assattr_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_20 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain__account, tmp_assattr_value_20);
CHECK_OBJECT(tmp_assattr_value_20);
Py_DECREF(tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__3___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__3___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__3___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__3___setstate__,
    type_description_1,
    par_self,
    par_d
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__3___setstate__ == cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__);
    cache_frame_frame_google$oauth2$credentials$$$function__3___setstate__ = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__3___setstate__);

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
CHECK_OBJECT(par_d);
Py_DECREF(par_d);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__4_refresh_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__4_refresh_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token = MAKE_FUNCTION_FRAME(tstate, code_objects_b2b8078aa3f6ff51e99a8119a5079b15, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__4_refresh_token = cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__4_refresh_token);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__4_refresh_token) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__refresh_token);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__4_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__4_refresh_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__4_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__4_refresh_token,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__4_refresh_token == cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token);
    cache_frame_frame_google$oauth2$credentials$$$function__4_refresh_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__4_refresh_token);

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


static PyObject *impl_google$oauth2$credentials$$$function__5_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__5_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__5_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__5_scopes)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__5_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__5_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__5_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_a5eefa760fb8f850926905739776167f, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__5_scopes->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__5_scopes = cache_frame_frame_google$oauth2$credentials$$$function__5_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__5_scopes);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__5_scopes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__scopes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__5_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__5_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__5_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__5_scopes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__5_scopes == cache_frame_frame_google$oauth2$credentials$$$function__5_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__5_scopes);
    cache_frame_frame_google$oauth2$credentials$$$function__5_scopes = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__5_scopes);

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


static PyObject *impl_google$oauth2$credentials$$$function__6_granted_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__6_granted_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_fe36fb61c87d69b7008eabde7b99da75, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__6_granted_scopes = cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__6_granted_scopes);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__6_granted_scopes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__granted_scopes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__6_granted_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__6_granted_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__6_granted_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__6_granted_scopes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__6_granted_scopes == cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes);
    cache_frame_frame_google$oauth2$credentials$$$function__6_granted_scopes = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__6_granted_scopes);

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


static PyObject *impl_google$oauth2$credentials$$$function__7_token_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__7_token_uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri = MAKE_FUNCTION_FRAME(tstate, code_objects_4bccb0525ad63419c8a8676a7cfddf9d, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__7_token_uri = cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__7_token_uri);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__7_token_uri) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__token_uri);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__7_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__7_token_uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__7_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__7_token_uri,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__7_token_uri == cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri);
    cache_frame_frame_google$oauth2$credentials$$$function__7_token_uri = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__7_token_uri);

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


static PyObject *impl_google$oauth2$credentials$$$function__8_id_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__8_id_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__8_id_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__8_id_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__8_id_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__8_id_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__8_id_token = MAKE_FUNCTION_FRAME(tstate, code_objects_357c3f3b07a9b3b8d4cd7e4e01f70a56, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__8_id_token->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__8_id_token = cache_frame_frame_google$oauth2$credentials$$$function__8_id_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__8_id_token);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__8_id_token) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__id_token);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__8_id_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__8_id_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__8_id_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__8_id_token,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__8_id_token == cache_frame_frame_google$oauth2$credentials$$$function__8_id_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__8_id_token);
    cache_frame_frame_google$oauth2$credentials$$$function__8_id_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__8_id_token);

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


static PyObject *impl_google$oauth2$credentials$$$function__9_client_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__9_client_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__9_client_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__9_client_id)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__9_client_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__9_client_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__9_client_id = MAKE_FUNCTION_FRAME(tstate, code_objects_56cb18129a1be2014858830f5a340602, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__9_client_id->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__9_client_id = cache_frame_frame_google$oauth2$credentials$$$function__9_client_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__9_client_id);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__9_client_id) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client_id);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__9_client_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__9_client_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__9_client_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__9_client_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__9_client_id == cache_frame_frame_google$oauth2$credentials$$$function__9_client_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__9_client_id);
    cache_frame_frame_google$oauth2$credentials$$$function__9_client_id = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__9_client_id);

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


static PyObject *impl_google$oauth2$credentials$$$function__10_client_secret(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__10_client_secret;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret = MAKE_FUNCTION_FRAME(tstate, code_objects_696646613b82c88b7e4f43a4a46fc273, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__10_client_secret = cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__10_client_secret);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__10_client_secret) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client_secret);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__10_client_secret, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__10_client_secret->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__10_client_secret, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__10_client_secret,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__10_client_secret == cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret);
    cache_frame_frame_google$oauth2$credentials$$$function__10_client_secret = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__10_client_secret);

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


static PyObject *impl_google$oauth2$credentials$$$function__12_rapt_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__12_rapt_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token = MAKE_FUNCTION_FRAME(tstate, code_objects_57d37d9c6952962402b41c6ec1afe23e, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__12_rapt_token = cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__12_rapt_token);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__12_rapt_token) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rapt_token);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__12_rapt_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__12_rapt_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__12_rapt_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__12_rapt_token,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__12_rapt_token == cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token);
    cache_frame_frame_google$oauth2$credentials$$$function__12_rapt_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__12_rapt_token);

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


static PyObject *impl_google$oauth2$credentials$$$function__13_refresh_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__13_refresh_handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler = MAKE_FUNCTION_FRAME(tstate, code_objects_3f742e7145b5a7fd0af202e2984d6622, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__13_refresh_handler = cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__13_refresh_handler);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__13_refresh_handler) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__refresh_handler);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__13_refresh_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__13_refresh_handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__13_refresh_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__13_refresh_handler,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__13_refresh_handler == cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler);
    cache_frame_frame_google$oauth2$credentials$$$function__13_refresh_handler = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__13_refresh_handler);

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


static PyObject *impl_google$oauth2$credentials$$$function__14_refresh_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__14_refresh_handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler = MAKE_FUNCTION_FRAME(tstate, code_objects_2d9e135bdf5abb6f0346416f31055759, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__14_refresh_handler = cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__14_refresh_handler);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__14_refresh_handler) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_google$oauth2$credentials$$$function__14_refresh_handler->m_frame.f_lineno = 280;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_adce6f2e3eb275f2d4bfecd0344651d4;
frame_frame_google$oauth2$credentials$$$function__14_refresh_handler->m_frame.f_lineno = 281;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 281;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_value);
tmp_assattr_value_1 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__refresh_handler, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__14_refresh_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__14_refresh_handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__14_refresh_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__14_refresh_handler,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__14_refresh_handler == cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler);
    cache_frame_frame_google$oauth2$credentials$$$function__14_refresh_handler = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__14_refresh_handler);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__15_account(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__15_account;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__15_account = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__15_account)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__15_account);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__15_account == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__15_account = MAKE_FUNCTION_FRAME(tstate, code_objects_7c2b8ce7e562d127fc590a7c1fd38f86, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__15_account->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__15_account = cache_frame_frame_google$oauth2$credentials$$$function__15_account;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__15_account);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__15_account) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__account);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__15_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__15_account->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__15_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__15_account,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__15_account == cache_frame_frame_google$oauth2$credentials$$$function__15_account) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__15_account);
    cache_frame_frame_google$oauth2$credentials$$$function__15_account = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__15_account);

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


static PyObject *impl_google$oauth2$credentials$$$function__16__make_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__16__make_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_8005377f07c0f43cf6c7b3f3033c1a02, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__16__make_copy = cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__16__make_copy);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__16__make_copy) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_dict_value_12_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_dict_value_13_1;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_token);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 291;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_refresh_token);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 292;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_id_token);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 293;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_token_uri);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 294;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_client_id);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 295;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_client_secret);
if (tmp_kw_call_dict_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);

exception_lineno = 296;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_dict_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_scopes);
if (tmp_kw_call_dict_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);

exception_lineno = 297;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_kw_call_dict_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_default_scopes);
if (tmp_kw_call_dict_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);

exception_lineno = 298;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_kw_call_dict_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_granted_scopes);
if (tmp_kw_call_dict_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);

exception_lineno = 299;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_dict_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_quota_project_id);
if (tmp_kw_call_dict_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);

exception_lineno = 300;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_kw_call_dict_value_9_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_rapt_token);
if (tmp_kw_call_dict_value_9_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);

exception_lineno = 301;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_kw_call_dict_value_10_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__enable_reauth_refresh);
if (tmp_kw_call_dict_value_10_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);

exception_lineno = 302;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_kw_call_dict_value_11_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__trust_boundary);
if (tmp_kw_call_dict_value_11_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
Py_DECREF(tmp_kw_call_dict_value_10_1);

exception_lineno = 303;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_kw_call_dict_value_12_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__universe_domain);
if (tmp_kw_call_dict_value_12_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
Py_DECREF(tmp_kw_call_dict_value_10_1);
Py_DECREF(tmp_kw_call_dict_value_11_1);

exception_lineno = 304;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_kw_call_dict_value_13_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__account);
if (tmp_kw_call_dict_value_13_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
Py_DECREF(tmp_kw_call_dict_value_10_1);
Py_DECREF(tmp_kw_call_dict_value_11_1);
Py_DECREF(tmp_kw_call_dict_value_12_1);

exception_lineno = 305;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__16__make_copy->m_frame.f_lineno = 290;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[14] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_84a492bb99505b36f81782d5c93e9d99_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
CHECK_OBJECT(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
CHECK_OBJECT(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
CHECK_OBJECT(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
CHECK_OBJECT(tmp_kw_call_dict_value_9_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
CHECK_OBJECT(tmp_kw_call_dict_value_10_1);
Py_DECREF(tmp_kw_call_dict_value_10_1);
CHECK_OBJECT(tmp_kw_call_dict_value_11_1);
Py_DECREF(tmp_kw_call_dict_value_11_1);
CHECK_OBJECT(tmp_kw_call_dict_value_12_1);
Py_DECREF(tmp_kw_call_dict_value_12_1);
CHECK_OBJECT(tmp_kw_call_dict_value_13_1);
Py_DECREF(tmp_kw_call_dict_value_13_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__cred_file_path);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cred_file_path, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__16__make_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__16__make_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__16__make_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__16__make_copy,
    type_description_1,
    par_self,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__16__make_copy == cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy);
    cache_frame_frame_google$oauth2$credentials$$$function__16__make_copy = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__16__make_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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


static PyObject *impl_google$oauth2$credentials$$$function__17_get_cred_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_cred_info = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__17_get_cred_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info = MAKE_FUNCTION_FRAME(tstate, code_objects_8b89c265bd72e861b2db96a4562b9896, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__17_get_cred_info = cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__17_get_cred_info);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__17_get_cred_info) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cred_file_path);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 312;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain_credential_source;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cred_file_path);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_credential_type;
tmp_dict_value_1 = mod_consts.const_str_digest_0779bfc72b477dbee373cd048b0d0f6e;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_cred_info == NULL);
var_cred_info = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_account);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 317;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_account);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cred_info);
tmp_dictset_dict = var_cred_info;
tmp_dictset_key = mod_consts.const_str_plain_principal;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_2:;
CHECK_OBJECT(var_cred_info);
tmp_return_value = var_cred_info;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__17_get_cred_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__17_get_cred_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__17_get_cred_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__17_get_cred_info,
    type_description_1,
    par_self,
    var_cred_info
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__17_get_cred_info == cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info);
    cache_frame_frame_google$oauth2$credentials$$$function__17_get_cred_info = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__17_get_cred_info);

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
Py_XDECREF(var_cred_info);
var_cred_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred_info);
var_cred_info = NULL;
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


static PyObject *impl_google$oauth2$credentials$$$function__18_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__18_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_7a264a245cbfe4c6acd1511e7e13267d, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__18_with_quota_project = cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__18_with_quota_project);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__18_with_quota_project) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$oauth2$credentials$$$function__18_with_quota_project->m_frame.f_lineno = 324;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_1 = par_quota_project_id;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__18_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__18_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__18_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__18_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__18_with_quota_project == cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project);
    cache_frame_frame_google$oauth2$credentials$$$function__18_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__18_with_quota_project);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__19_with_token_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__19_with_token_uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri = MAKE_FUNCTION_FRAME(tstate, code_objects_02ffad1f996bfa2d11067534588b101f, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__19_with_token_uri = cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__19_with_token_uri);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__19_with_token_uri) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$oauth2$credentials$$$function__19_with_token_uri->m_frame.f_lineno = 330;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_token_uri);
tmp_assattr_value_1 = par_token_uri;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__token_uri, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__19_with_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__19_with_token_uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__19_with_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__19_with_token_uri,
    type_description_1,
    par_self,
    par_token_uri,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__19_with_token_uri == cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri);
    cache_frame_frame_google$oauth2$credentials$$$function__19_with_token_uri = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__19_with_token_uri);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__20_with_account(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_account = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__20_with_account;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__20_with_account = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__20_with_account)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__20_with_account);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__20_with_account == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__20_with_account = MAKE_FUNCTION_FRAME(tstate, code_objects_133537adf54730dfddd608ed8e313cbf, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__20_with_account->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__20_with_account = cache_frame_frame_google$oauth2$credentials$$$function__20_with_account;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__20_with_account);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__20_with_account) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$oauth2$credentials$$$function__20_with_account->m_frame.f_lineno = 343;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_account);
tmp_assattr_value_1 = par_account;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__account, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__20_with_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__20_with_account->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__20_with_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__20_with_account,
    type_description_1,
    par_self,
    par_account,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__20_with_account == cache_frame_frame_google$oauth2$credentials$$$function__20_with_account) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__20_with_account);
    cache_frame_frame_google$oauth2$credentials$$$function__20_with_account = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__20_with_account);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_account);
Py_DECREF(par_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__21_with_universe_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_universe_domain = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain = MAKE_FUNCTION_FRAME(tstate, code_objects_4e6ad7be4ddd3071668ed3e324aab5d0, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain = cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain->m_frame.f_lineno = 349;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_universe_domain);
tmp_assattr_value_1 = par_universe_domain;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__universe_domain, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain,
    type_description_1,
    par_self,
    par_universe_domain,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain == cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain);
    cache_frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__21_with_universe_domain);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__22__metric_header_for_usage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage = MAKE_FUNCTION_FRAME(tstate, code_objects_1095345f6aab87ab140dd45688c1d28d, module_google$oauth2$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage = cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$credentials$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRED_TYPE_USER);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage == cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage);
    cache_frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__22__metric_header_for_usage);

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


static PyObject *impl_google$oauth2$credentials$$$function__23_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_scopes = NULL;
PyObject *var_token = NULL;
PyObject *var_expiry = NULL;
PyObject *var_access_token = NULL;
PyObject *var_refresh_token = NULL;
PyObject *var_grant_response = NULL;
PyObject *var_rapt_token = NULL;
PyObject *var_requested_scopes = NULL;
PyObject *var_granted_scopes = NULL;
PyObject *var_scopes_requested_but_not_granted = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__element_5 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__23_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__23_refresh = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__23_refresh)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__23_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__23_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__23_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_c0b560484a4f3f958136567e26542994, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__23_refresh->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__23_refresh = cache_frame_frame_google$oauth2$credentials$$$function__23_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__23_refresh);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__23_refresh) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__universe_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 358;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 358;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_google$oauth2$credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_55b2893b8cc4771ad5b80e3ff25d9fde;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__universe_domain);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 365;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 360;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 359;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 359;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__scopes);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__scopes);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__default_scopes);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_scopes == NULL);
var_scopes = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__refresh_token);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_refresh_handler);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 374;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_refresh_handler);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_2 = par_request;
CHECK_OBJECT(var_scopes);
tmp_kw_call_dict_value_0_1 = var_scopes;
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 375;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_scopes_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_token == NULL);
Py_INCREF(tmp_assign_source_5);
var_token = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_expiry == NULL);
Py_INCREF(tmp_assign_source_6);
var_expiry = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_token);
tmp_isinstance_inst_1 = var_token;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 378;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3709d0f52976a8f3f9668e5af27d9303_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 378;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_expiry);
tmp_isinstance_inst_2 = var_expiry;
tmp_isinstance_cls_2 = module_var_accessor_google$oauth2$credentials$datetime(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$oauth2$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 382;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d1c8409e00f1fd9a68c5dc0fef7f8fbd_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 382;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_11;
tmp_called_instance_3 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 385;
tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_utcnow);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expiry);
tmp_sub_expr_left_1 = var_expiry;
tmp_expression_value_11 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_REFRESH_THRESHOLD);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_google$oauth2$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 386;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_7a3f086a845fd854660cbb92a7d0c065_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 386;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_token);
tmp_assattr_value_1 = var_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_expiry);
tmp_assattr_value_2 = var_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_7;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_12;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_13;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__refresh_token);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__token_uri);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__client_id);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_or_left_value_3 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__client_secret);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_or_right_value_3 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$oauth2$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 400;
tmp_raise_type_input_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e4982a3a6bc1099a29781589885c0001_tuple, 0)
);

if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 400;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_22;
tmp_expression_value_16 = module_var_accessor_google$oauth2$credentials$reauth(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reauth);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_refresh_grant);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_3 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__token_uri);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 414;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__refresh_token);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 415;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__client_id);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 416;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__client_secret);
if (tmp_kw_call_arg_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

exception_lineno = 417;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_scopes);
tmp_kw_call_dict_value_0_2 = var_scopes;
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__rapt_token);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);

exception_lineno = 419;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__enable_reauth_refresh);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 420;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 412;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_bad9e7b9580d8787fee51c3455bc97ce_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
CHECK_OBJECT(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_4 == NULL);
tmp_tuple_unpack_2__element_4 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 4, 5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_5 == NULL);
tmp_tuple_unpack_2__element_5 = tmp_assign_source_12;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 5);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_5);
tmp_tuple_unpack_2__element_5 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
assert(var_access_token == NULL);
Py_INCREF(tmp_assign_source_13);
var_access_token = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
assert(var_refresh_token == NULL);
Py_INCREF(tmp_assign_source_14);
var_refresh_token = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
assert(var_expiry == NULL);
Py_INCREF(tmp_assign_source_15);
var_expiry = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_4;
assert(var_grant_response == NULL);
Py_INCREF(tmp_assign_source_16);
var_grant_response = tmp_assign_source_16;
}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
tmp_assign_source_17 = tmp_tuple_unpack_2__element_5;
assert(var_rapt_token == NULL);
Py_INCREF(tmp_assign_source_17);
var_rapt_token = tmp_assign_source_17;
}
Py_XDECREF(tmp_tuple_unpack_2__element_5);
tmp_tuple_unpack_2__element_5 = NULL;

{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_access_token);
tmp_assattr_value_3 = var_access_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_token, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_expiry);
tmp_assattr_value_4 = var_expiry;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_expiry, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_refresh_token);
tmp_assattr_value_5 = var_refresh_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__refresh_token, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(var_grant_response);
tmp_expression_value_23 = var_grant_response;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 426;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_id_token_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__id_token, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(var_rapt_token);
tmp_assattr_value_7 = var_rapt_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__rapt_token, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_scopes);
tmp_truth_name_2 = CHECK_IF_TRUE(var_scopes);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_cmp_expr_left_9 = mod_consts.const_str_plain_scope;
CHECK_OBJECT(var_grant_response);
tmp_cmp_expr_right_9 = var_grant_response;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_frozenset_arg_1;
CHECK_OBJECT(var_scopes);
tmp_frozenset_arg_1 = var_scopes;
tmp_assign_source_18 = PyFrozenSet_New(tmp_frozenset_arg_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_requested_scopes == NULL);
var_requested_scopes = tmp_assign_source_18;
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_1;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(var_grant_response);
tmp_expression_value_25 = var_grant_response;
tmp_subscript_value_1 = mod_consts.const_str_plain_scope;
tmp_expression_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_1);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 431;
tmp_assattr_value_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__granted_scopes, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_frozenset_arg_2;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_frozenset_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__granted_scopes);
if (tmp_frozenset_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = PyFrozenSet_New(tmp_frozenset_arg_2);
CHECK_OBJECT(tmp_frozenset_arg_2);
Py_DECREF(tmp_frozenset_arg_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_granted_scopes == NULL);
var_granted_scopes = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_requested_scopes);
tmp_sub_expr_left_2 = var_requested_scopes;
CHECK_OBJECT(var_granted_scopes);
tmp_sub_expr_right_2 = var_granted_scopes;
tmp_assign_source_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
assert(!(tmp_assign_source_20 == NULL));
assert(var_scopes_requested_but_not_granted == NULL);
var_scopes_requested_but_not_granted = tmp_assign_source_20;
}
{
bool tmp_condition_result_9;
CHECK_OBJECT(var_scopes_requested_but_not_granted);
tmp_condition_result_9 = CHECK_IF_TRUE(var_scopes_requested_but_not_granted) == 1;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_expression_value_27 = module_var_accessor_google$oauth2$credentials$_LOGGER(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_warning);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_2d0f7514714b17b8567cbf162aa6762d;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(var_scopes_requested_but_not_granted);
tmp_iterable_value_1 = var_scopes_requested_but_not_granted;
tmp_kw_call_arg_value_1_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_kw_call_arg_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 442;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 440;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame.f_lineno = 439;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_8:;
branch_no_7:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__23_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__23_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__23_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__23_refresh,
    type_description_1,
    par_self,
    par_request,
    var_scopes,
    var_token,
    var_expiry,
    var_access_token,
    var_refresh_token,
    var_grant_response,
    var_rapt_token,
    var_requested_scopes,
    var_granted_scopes,
    var_scopes_requested_but_not_granted
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__23_refresh == cache_frame_frame_google$oauth2$credentials$$$function__23_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__23_refresh);
    cache_frame_frame_google$oauth2$credentials$$$function__23_refresh = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__23_refresh);

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
CHECK_OBJECT(var_scopes);
CHECK_OBJECT(var_scopes);
Py_DECREF(var_scopes);
var_scopes = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var_refresh_token);
var_refresh_token = NULL;
Py_XDECREF(var_grant_response);
var_grant_response = NULL;
Py_XDECREF(var_rapt_token);
var_rapt_token = NULL;
Py_XDECREF(var_requested_scopes);
var_requested_scopes = NULL;
Py_XDECREF(var_granted_scopes);
var_granted_scopes = NULL;
Py_XDECREF(var_scopes_requested_but_not_granted);
var_scopes_requested_but_not_granted = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scopes);
var_scopes = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var_refresh_token);
var_refresh_token = NULL;
Py_XDECREF(var_grant_response);
var_grant_response = NULL;
Py_XDECREF(var_rapt_token);
var_rapt_token = NULL;
Py_XDECREF(var_requested_scopes);
var_requested_scopes = NULL;
Py_XDECREF(var_granted_scopes);
var_granted_scopes = NULL;
Py_XDECREF(var_scopes_requested_but_not_granted);
var_scopes_requested_but_not_granted = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_google$oauth2$credentials$$$function__24_from_authorized_user_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_scopes = python_pars[2];
PyObject *var_keys_needed = NULL;
PyObject *var_missing = NULL;
PyObject *var_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = PySet_New(mod_consts.const_set_4961d7a0a5941394c004ba3922e631a0);
assert(var_keys_needed == NULL);
var_keys_needed = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info = MAKE_FUNCTION_FRAME(tstate, code_objects_8a7e226ddb9e3cd3b4e0e956a944fd75, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info = cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_keys_needed);
tmp_expression_value_1 = var_keys_needed;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_difference);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par_info);
tmp_expression_value_2 = par_info;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_keys);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 464;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 464;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 464;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 464;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_missing == NULL);
var_missing = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_missing);
tmp_truth_name_1 = CHECK_IF_TRUE(var_missing);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_cfefdc7161cf318e797cbd634496e1a6;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(var_missing);
tmp_iterable_value_1 = var_missing;
tmp_kw_call_arg_value_1_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 467;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 467;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_info);
tmp_expression_value_3 = par_info;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 473;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_expiry_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_expiry);
tmp_truth_name_2 = CHECK_IF_TRUE(var_expiry);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_4 = module_var_accessor_google$oauth2$credentials$datetime(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_strptime);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expiry);
tmp_expression_value_7 = var_expiry;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 476;
tmp_expression_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_Z_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 476;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 476;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_671bca41c8e1d26bc4bf64e167ee3766;
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 475;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expiry;
    assert(old != NULL);
    var_expiry = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_8;
tmp_called_instance_1 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 479;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_REFRESH_THRESHOLD);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expiry;
    assert(old != NULL);
    var_expiry = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_end_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_scopes);
tmp_cmp_expr_left_1 = par_scopes;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_scopes;
CHECK_OBJECT(par_info);
tmp_cmp_expr_right_2 = par_info;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_info);
tmp_expression_value_9 = par_info;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 483;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_scopes_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_scopes;
    assert(old != NULL);
    par_scopes = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_scopes);
tmp_isinstance_inst_1 = par_scopes;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_scopes);
tmp_expression_value_10 = par_scopes;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_split);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 485;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_space_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_scopes;
    assert(old != NULL);
    par_scopes = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_11_1;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_cls);
tmp_called_value_9 = par_cls;
CHECK_OBJECT(par_info);
tmp_expression_value_11 = par_info;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 488;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_token_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_12 = par_info;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 489;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 489;
tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_refresh_token_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 489;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = module_var_accessor_google$oauth2$credentials$_GOOGLE_OAUTH2_TOKEN_ENDPOINT(tstate);
if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
}

if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 490;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scopes);
tmp_kw_call_value_3_1 = par_scopes;
CHECK_OBJECT(par_info);
tmp_expression_value_13 = par_info;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 492;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 492;
tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_client_id_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 492;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_14 = par_info;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 493;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 493;
tmp_kw_call_value_5_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_client_secret_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);

exception_lineno = 493;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_15 = par_info;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 494;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 494;
tmp_kw_call_value_6_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_quota_project_id_tuple);

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);

exception_lineno = 494;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expiry);
tmp_kw_call_value_7_1 = var_expiry;
CHECK_OBJECT(par_info);
tmp_expression_value_16 = par_info;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 496;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 496;
tmp_kw_call_value_8_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_rapt_token_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_kw_call_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);

exception_lineno = 496;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_17 = par_info;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_get);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 497;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 497;
tmp_kw_call_value_9_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain_trust_boundary_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_kw_call_value_9_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);

exception_lineno = 497;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_18 = par_info;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_9_1);

exception_lineno = 498;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 498;
tmp_kw_call_value_10_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_plain_universe_domain_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_kw_call_value_10_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_9_1);

exception_lineno = 498;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_19 = par_info;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_9_1);
Py_DECREF(tmp_kw_call_value_10_1);

exception_lineno = 499;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 499;
tmp_kw_call_value_11_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_18, mod_consts.const_tuple_str_plain_account_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_kw_call_value_11_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_9_1);
Py_DECREF(tmp_kw_call_value_10_1);

exception_lineno = 499;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame.f_lineno = 487;
{
    PyObject *kw_values[12] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_086271ee81831d4dc6ecb4d9bced15b4_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
CHECK_OBJECT(tmp_kw_call_value_8_1);
Py_DECREF(tmp_kw_call_value_8_1);
CHECK_OBJECT(tmp_kw_call_value_9_1);
Py_DECREF(tmp_kw_call_value_9_1);
CHECK_OBJECT(tmp_kw_call_value_10_1);
Py_DECREF(tmp_kw_call_value_10_1);
CHECK_OBJECT(tmp_kw_call_value_11_1);
Py_DECREF(tmp_kw_call_value_11_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info,
    type_description_1,
    par_cls,
    par_info,
    par_scopes,
    var_keys_needed,
    var_missing,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info == cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info);
    cache_frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__24_from_authorized_user_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_scopes);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
par_scopes = NULL;
CHECK_OBJECT(var_keys_needed);
CHECK_OBJECT(var_keys_needed);
Py_DECREF(var_keys_needed);
var_keys_needed = NULL;
CHECK_OBJECT(var_missing);
CHECK_OBJECT(var_missing);
Py_DECREF(var_missing);
var_missing = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_scopes);
par_scopes = NULL;
CHECK_OBJECT(var_keys_needed);
CHECK_OBJECT(var_keys_needed);
Py_DECREF(var_keys_needed);
var_keys_needed = NULL;
Py_XDECREF(var_missing);
var_missing = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__25_from_authorized_user_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_scopes = python_pars[2];
PyObject *var_json_file = NULL;
PyObject *var_data = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file = MAKE_FUNCTION_FRAME(tstate, code_objects_becd7c9d6b02862d060a01cf9ec7f5ac, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file = cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_open);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_plain_r;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 518;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 518;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
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
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_json_file == NULL);
Py_INCREF(tmp_assign_source_5);
var_json_file = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$credentials$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 519;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_json_file);
tmp_args_element_value_1 = var_json_file;
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 519;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(var_data == NULL);
var_data = tmp_assign_source_6;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_cls);
tmp_called_instance_2 = par_cls;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
CHECK_OBJECT(par_scopes);
tmp_args_element_value_3 = par_scopes;
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 520;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_from_authorized_user_info,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 518;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 518;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame)) {
        frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 518;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame)) {
        frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 518;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame.f_lineno = 518;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 518;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file,
    type_description_1,
    par_cls,
    par_filename,
    par_scopes,
    var_json_file,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file == cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file);
    cache_frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__25_from_authorized_user_file);

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
CHECK_OBJECT(var_json_file);
CHECK_OBJECT(var_json_file);
Py_DECREF(var_json_file);
var_json_file = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_json_file);
var_json_file = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__26_to_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_strip = python_pars[1];
PyObject *var_prep = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *outline_1_var_k = NULL;
PyObject *outline_1_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_2__$0 = NULL;
PyObject *tmp_dictcontraction_2__contraction = NULL;
PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__26_to_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__26_to_json = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__26_to_json)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__26_to_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__26_to_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__26_to_json = MAKE_FUNCTION_FRAME(tstate, code_objects_db62c8ae3e169542ab9bec58246e09ed, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__26_to_json->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__26_to_json = cache_frame_frame_google$oauth2$credentials$$$function__26_to_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__26_to_json);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__26_to_json) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_token;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_token);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 9 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_refresh_token;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_refresh_token);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_token_uri;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_token_uri);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_id;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_client_id);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_secret;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_client_secret);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_scopes;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_scopes);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_rapt_token;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_rapt_token);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_universe_domain;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__universe_domain);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_account;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__account);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "ooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_prep == NULL);
var_prep = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_expiry);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 546;
type_description_1 = "ooo";
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_expiry);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__26_to_json->m_frame.f_lineno = 547;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isoformat);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_Z;
tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prep);
tmp_dictset_dict = var_prep;
tmp_dictset_key = mod_consts.const_str_plain_expiry;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(var_prep);
tmp_dict_arg_1 = var_prep;
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 550;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_9;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_10;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(outline_0_var_v);
tmp_cmp_expr_left_1 = outline_0_var_v;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
CHECK_OBJECT(outline_0_var_v);
tmp_dictset38_value_1 = outline_0_var_v;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_2 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 550;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_prep;
    assert(old != NULL);
    var_prep = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_strip);
tmp_cmp_expr_left_2 = par_strip;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_11;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_prep);
tmp_expression_value_12 = var_prep;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_google$oauth2$credentials$$$function__26_to_json->m_frame.f_lineno = 554;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
assert(tmp_dictcontraction_2__$0 == NULL);
tmp_dictcontraction_2__$0 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_2__contraction == NULL);
tmp_dictcontraction_2__contraction = tmp_assign_source_13;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
tmp_next_source_2 = tmp_dictcontraction_2__$0;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 554;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_dictcontraction_2__iter_value_0;
    tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
tmp_iter_arg_4 = tmp_dictcontraction_2__iter_value_0;
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
    tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
    tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
    tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_9;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_assign_source_18 = tmp_dictcontraction$tuple_unpack_2__element_1;
{
    PyObject *old = outline_1_var_k;
    outline_1_var_k = tmp_assign_source_18;
    Py_INCREF(outline_1_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_assign_source_19 = tmp_dictcontraction$tuple_unpack_2__element_2;
{
    PyObject *old = outline_1_var_v;
    outline_1_var_v = tmp_assign_source_19;
    Py_INCREF(outline_1_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(outline_1_var_k);
tmp_cmp_expr_left_3 = outline_1_var_k;
CHECK_OBJECT(par_strip);
tmp_cmp_expr_right_3 = par_strip;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(outline_1_var_k);
tmp_dictset38_key_2 = outline_1_var_k;
CHECK_OBJECT(outline_1_var_v);
tmp_dictset38_value_2 = outline_1_var_v;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_assign_source_11 = tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_k);
outline_1_var_k = NULL;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 554;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = var_prep;
    assert(old != NULL);
    var_prep = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_google$oauth2$credentials$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 556;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_prep);
tmp_args_element_value_1 = var_prep;
frame_frame_google$oauth2$credentials$$$function__26_to_json->m_frame.f_lineno = 556;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__26_to_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__26_to_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__26_to_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__26_to_json,
    type_description_1,
    par_self,
    par_strip,
    var_prep
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__26_to_json == cache_frame_frame_google$oauth2$credentials$$$function__26_to_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__26_to_json);
    cache_frame_frame_google$oauth2$credentials$$$function__26_to_json = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__26_to_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_prep);
CHECK_OBJECT(var_prep);
Py_DECREF(var_prep);
var_prep = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_prep);
var_prep = NULL;
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
CHECK_OBJECT(par_strip);
Py_DECREF(par_strip);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strip);
Py_DECREF(par_strip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__27___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_account = python_pars[1];
PyObject *par_quota_project_id = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__27___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__27___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__27___init__)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__27___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__27___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__27___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a56ec56e1fd7ed188dbbabe84c83da28, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__27___init__->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__27___init__ = cache_frame_frame_google$oauth2$credentials$$$function__27___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__27___init__);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__27___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$credentials$warnings(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 573;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__27___init__->m_frame.f_lineno = 573;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_warn,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_355d042b2a91debd0b3fcf23f40bc8f7_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_2;
tmp_type_arg_value_1 = module_var_accessor_google$oauth2$credentials$UserAccessTokenCredentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UserAccessTokenCredentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER2(tstate, moduledict_google$oauth2$credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__27___init__->m_frame.f_lineno = 580;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_account);
tmp_assattr_value_1 = par_account;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__account, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_2 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__27___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__27___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__27___init__,
    type_description_1,
    par_self,
    par_account,
    par_quota_project_id,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__27___init__ == cache_frame_frame_google$oauth2$credentials$$$function__27___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__27___init__);
    cache_frame_frame_google$oauth2$credentials$$$function__27___init__ = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__27___init__);

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
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__28_with_account(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_account = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__28_with_account;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__28_with_account = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__28_with_account)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__28_with_account);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__28_with_account == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__28_with_account = MAKE_FUNCTION_FRAME(tstate, code_objects_68bbb0fcfe58f0cd9e6332ca86c4124b, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__28_with_account->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__28_with_account = cache_frame_frame_google$oauth2$credentials$$$function__28_with_account;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__28_with_account);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__28_with_account) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_account);
tmp_kw_call_value_0_1 = par_account;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 594;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__28_with_account->m_frame.f_lineno = 594;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_account_str_plain_quota_project_id_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__28_with_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__28_with_account->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__28_with_account, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__28_with_account,
    type_description_1,
    par_self,
    par_account
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__28_with_account == cache_frame_frame_google$oauth2$credentials$$$function__28_with_account) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__28_with_account);
    cache_frame_frame_google$oauth2$credentials$$$function__28_with_account = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__28_with_account);

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
CHECK_OBJECT(par_account);
Py_DECREF(par_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_account);
Py_DECREF(par_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__29_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__29_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_6d57b44bb54121a2266f7a97adfab3a5, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__29_with_quota_project = cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__29_with_quota_project);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__29_with_quota_project) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__account);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 598;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_quota_project_id);
tmp_kw_call_value_1_1 = par_quota_project_id;
frame_frame_google$oauth2$credentials$$$function__29_with_quota_project->m_frame.f_lineno = 598;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_account_str_plain_quota_project_id_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__29_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__29_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__29_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__29_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__29_with_quota_project == cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project);
    cache_frame_frame_google$oauth2$credentials$$$function__29_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__29_with_quota_project);

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
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$credentials$$$function__30_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__30_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__30_refresh = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__30_refresh)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__30_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__30_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__30_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_b2f8048b1b6853a3eb2461f1b4f94163, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__30_refresh->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__30_refresh = cache_frame_frame_google$oauth2$credentials$$$function__30_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__30_refresh);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__30_refresh) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$credentials$_cloud_sdk(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cloud_sdk);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 612;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_auth_access_token);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__account);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 612;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials$$$function__30_refresh->m_frame.f_lineno = 612;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__30_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__30_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__30_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__30_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__30_refresh == cache_frame_frame_google$oauth2$credentials$$$function__30_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__30_refresh);
    cache_frame_frame_google$oauth2$credentials$$$function__30_refresh = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__30_refresh);

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


static PyObject *impl_google$oauth2$credentials$$$function__31_before_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *par_url = python_pars[3];
PyObject *par_headers = python_pars[4];
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$function__31_before_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$credentials$$$function__31_before_request = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$credentials$$$function__31_before_request)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$credentials$$$function__31_before_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$credentials$$$function__31_before_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$credentials$$$function__31_before_request = MAKE_FUNCTION_FRAME(tstate, code_objects_1a25d7cfffc12f7a7114dfe1992d34ac, module_google$oauth2$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$credentials$$$function__31_before_request->m_type_description == NULL);
frame_frame_google$oauth2$credentials$$$function__31_before_request = cache_frame_frame_google$oauth2$credentials$$$function__31_before_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$function__31_before_request);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$function__31_before_request) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$oauth2$credentials$$$function__31_before_request->m_frame.f_lineno = 616;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_headers);
tmp_args_element_value_2 = par_headers;
frame_frame_google$oauth2$credentials$$$function__31_before_request->m_frame.f_lineno = 617;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_apply, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$function__31_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$function__31_before_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$function__31_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$function__31_before_request,
    type_description_1,
    par_self,
    par_request,
    par_method,
    par_url,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$credentials$$$function__31_before_request == cache_frame_frame_google$oauth2$credentials$$$function__31_before_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$credentials$$$function__31_before_request);
    cache_frame_frame_google$oauth2$credentials$$$function__31_before_request = NULL;
}

assertFrameObject(frame_frame_google$oauth2$credentials$$$function__31_before_request);

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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__10_client_secret(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__10_client_secret,
        mod_consts.const_str_plain_client_secret,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_82cc106ce92469a027646c90e4408e6c,
#endif
        code_objects_696646613b82c88b7e4f43a4a46fc273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_52d7c789c4eb9842dc0baa35b6700fac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__11_requires_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_requires_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7,
#endif
        code_objects_a49365f979ddde509a0ad67e7b4af096,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_365f5d7c68a5de015c893ef0393aa473,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__12_rapt_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__12_rapt_token,
        mod_consts.const_str_plain_rapt_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c07553a80cdb2f4985ef8cb3c4bfcbaf,
#endif
        code_objects_57d37d9c6952962402b41c6ec1afe23e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_2c06deb98f5f6770225a45f1df4eb22a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__13_refresh_handler(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__13_refresh_handler,
        mod_consts.const_str_plain_refresh_handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743,
#endif
        code_objects_3f742e7145b5a7fd0af202e2984d6622,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_a8355a72dbf2b6af5206cf16ab99b1cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__14_refresh_handler(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__14_refresh_handler,
        mod_consts.const_str_plain_refresh_handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f64df7434f9a5c360e40ee0eaac31743,
#endif
        code_objects_2d9e135bdf5abb6f0346416f31055759,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_ba6da00b858c10174e8541447937a419,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__15_account(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__15_account,
        mod_consts.const_str_plain_account,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89f2159481eb389c34caf4270093141f,
#endif
        code_objects_7c2b8ce7e562d127fc590a7c1fd38f86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_eed8de09743d63eb1f40411f56deb131,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__16__make_copy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__16__make_copy,
        mod_consts.const_str_plain__make_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c,
#endif
        code_objects_8005377f07c0f43cf6c7b3f3033c1a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__17_get_cred_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__17_get_cred_info,
        mod_consts.const_str_plain_get_cred_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182,
#endif
        code_objects_8b89c265bd72e861b2db96a4562b9896,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__18_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__18_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513,
#endif
        code_objects_7a264a245cbfe4c6acd1511e7e13267d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__19_with_token_uri(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__19_with_token_uri,
        mod_consts.const_str_plain_with_token_uri,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fb39c2cd2dd73835f51a876adbc8da8,
#endif
        code_objects_02ffad1f996bfa2d11067534588b101f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_24c8c94e564842f157724a5909a09ff3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_b401b23fd0778dab62ee841deaed80cb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__20_with_account(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__20_with_account,
        mod_consts.const_str_plain_with_account,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd02af5f6e52a2aa86c5c82a9c1fa65a,
#endif
        code_objects_133537adf54730dfddd608ed8e313cbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_f2065e4b0182014964e8506882bf0385,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__21_with_universe_domain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__21_with_universe_domain,
        mod_consts.const_str_plain_with_universe_domain,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3875a7ce38684778d1daef8515e3d745,
#endif
        code_objects_4e6ad7be4ddd3071668ed3e324aab5d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__22__metric_header_for_usage(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__22__metric_header_for_usage,
        mod_consts.const_str_plain__metric_header_for_usage,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a,
#endif
        code_objects_1095345f6aab87ab140dd45688c1d28d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__23_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__23_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75,
#endif
        code_objects_c0b560484a4f3f958136567e26542994,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__24_from_authorized_user_info(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__24_from_authorized_user_info,
        mod_consts.const_str_plain_from_authorized_user_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6449be52c661e700ff36ac2ad1be8882,
#endif
        code_objects_8a7e226ddb9e3cd3b4e0e956a944fd75,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_04a19b7482e41f14547245f1966a6335,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__25_from_authorized_user_file(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__25_from_authorized_user_file,
        mod_consts.const_str_plain_from_authorized_user_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b860132fc26623ed8d23c37f940d36c2,
#endif
        code_objects_becd7c9d6b02862d060a01cf9ec7f5ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_02816319089c0f4c0e618968e44efd73,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__26_to_json(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__26_to_json,
        mod_consts.const_str_plain_to_json,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3623d8875790452953d00a813a5839ac,
#endif
        code_objects_db62c8ae3e169542ab9bec58246e09ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_e30cc7113e44d86eee126114c0736ae5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__27___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__27___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_623b1bd0fb45d9646e002d24be1383cb,
#endif
        code_objects_a56ec56e1fd7ed188dbbabe84c83da28,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__28_with_account(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__28_with_account,
        mod_consts.const_str_plain_with_account,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8410e845afac47fb9aeb9b52fbd09506,
#endif
        code_objects_68bbb0fcfe58f0cd9e6332ca86c4124b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_bea06ae8863b87e54e20ab82ee01fb43,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__29_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__29_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cc28e8b19ef6f8992efda3834ea60372,
#endif
        code_objects_6d57b44bb54121a2266f7a97adfab3a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__2___getstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__2___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24f6e05b0666cb5899a8e4d184e6b55d,
#endif
        code_objects_1aeb111331dcdcabd8241879aa1101a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_aafa0c17e69a83e4d12177bbd74224a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__30_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__30_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a205d0c5e69fa8d8eefc0b7f132cd23,
#endif
        code_objects_b2f8048b1b6853a3eb2461f1b4f94163,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_16cc80874ba8ad658a2254efbb250b9a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__31_before_request(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__31_before_request,
        mod_consts.const_str_plain_before_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c64d670d8ac0a1f7ed8a6ca0f7e11f5c,
#endif
        code_objects_1a25d7cfffc12f7a7114dfe1992d34ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__3___setstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__3___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65c69d935d835297b7585c50b855995e,
#endif
        code_objects_5d071661f255dca83c55e9cbbbe19144,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_eee1446b5a04afad6fdae230e860e6a9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__4_refresh_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__4_refresh_token,
        mod_consts.const_str_plain_refresh_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b4a0ca8dbc2ad4d090b67a13585404cc,
#endif
        code_objects_b2b8078aa3f6ff51e99a8119a5079b15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_29e34eeb9dbd003c402613cfea6822ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__5_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__5_scopes,
        mod_consts.const_str_plain_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59a3f7c958cb8ec203040f75dd1e3f45,
#endif
        code_objects_a5eefa760fb8f850926905739776167f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_bb379ef31a789f5b04a33b665c8b98e3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__6_granted_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__6_granted_scopes,
        mod_consts.const_str_plain_granted_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ada12470a711f905405a4f18bcd86944,
#endif
        code_objects_fe36fb61c87d69b7008eabde7b99da75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_f54ed71ba5a351c43caf3d08728202a2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__7_token_uri(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__7_token_uri,
        mod_consts.const_str_plain_token_uri,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_38e4ae817b3789af2a33a24478b97870,
#endif
        code_objects_4bccb0525ad63419c8a8676a7cfddf9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_2724c0aa555850f539128bc19d404790,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__8_id_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__8_id_token,
        mod_consts.const_str_plain_id_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e5849871a8fbb2be008320842a1e121,
#endif
        code_objects_357c3f3b07a9b3b8d4cd7e4e01f70a56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_8000140a688f56c8ba8887a353561782,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$credentials$$$function__9_client_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$credentials$$$function__9_client_id,
        mod_consts.const_str_plain_client_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d8633fd4793bad389fb838799ffe343,
#endif
        code_objects_56cb18129a1be2014858830f5a340602,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$credentials,
        mod_consts.const_str_digest_a64d9cd8b9fb109e9196ab73a2be7d2d,
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

static function_impl_code const function_table_google$oauth2$credentials[] = {
impl_google$oauth2$credentials$$$function__1___init__,
impl_google$oauth2$credentials$$$function__2___getstate__,
impl_google$oauth2$credentials$$$function__3___setstate__,
impl_google$oauth2$credentials$$$function__4_refresh_token,
impl_google$oauth2$credentials$$$function__5_scopes,
impl_google$oauth2$credentials$$$function__6_granted_scopes,
impl_google$oauth2$credentials$$$function__7_token_uri,
impl_google$oauth2$credentials$$$function__8_id_token,
impl_google$oauth2$credentials$$$function__9_client_id,
impl_google$oauth2$credentials$$$function__10_client_secret,
impl_google$oauth2$credentials$$$function__12_rapt_token,
impl_google$oauth2$credentials$$$function__13_refresh_handler,
impl_google$oauth2$credentials$$$function__14_refresh_handler,
impl_google$oauth2$credentials$$$function__15_account,
impl_google$oauth2$credentials$$$function__16__make_copy,
impl_google$oauth2$credentials$$$function__17_get_cred_info,
impl_google$oauth2$credentials$$$function__18_with_quota_project,
impl_google$oauth2$credentials$$$function__19_with_token_uri,
impl_google$oauth2$credentials$$$function__20_with_account,
impl_google$oauth2$credentials$$$function__21_with_universe_domain,
impl_google$oauth2$credentials$$$function__22__metric_header_for_usage,
impl_google$oauth2$credentials$$$function__23_refresh,
impl_google$oauth2$credentials$$$function__24_from_authorized_user_info,
impl_google$oauth2$credentials$$$function__25_from_authorized_user_file,
impl_google$oauth2$credentials$$$function__26_to_json,
impl_google$oauth2$credentials$$$function__27___init__,
impl_google$oauth2$credentials$$$function__28_with_account,
impl_google$oauth2$credentials$$$function__29_with_quota_project,
impl_google$oauth2$credentials$$$function__30_refresh,
impl_google$oauth2$credentials$$$function__31_before_request,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$oauth2$credentials);
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
        module_google$oauth2$credentials,
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
        function_table_google$oauth2$credentials,
        sizeof(function_table_google$oauth2$credentials) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.oauth2.credentials";
#endif

// Internal entry point for module code.
PyObject *module_code_google$oauth2$credentials(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$oauth2$credentials");

    // Store the module for future use.
    module_google$oauth2$credentials = module;

    moduledict_google$oauth2$credentials = MODULE_DICT(module_google$oauth2$credentials);

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
        PRINT_STRING("google$oauth2$credentials: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$oauth2$credentials: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$oauth2$credentials: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.credentials" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$oauth2$credentials\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$oauth2$credentials,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$oauth2$credentials);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$oauth2$credentials);
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

        UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$oauth2$credentials$$$class__1_Credentials_57 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$class__1_Credentials_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c7c3c65889b3f2278203cf71b8a6f55c;
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$oauth2$credentials = MAKE_MODULE_FRAME(code_objects_72e9a496cfffb9f96a8a222c2d8b7b9c, module_google$oauth2$credentials);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$oauth2$credentials$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$oauth2$credentials$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_datetime_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 34;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_datetime);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 36;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 37;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 38;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__cloud_sdk_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 40;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain__cloud_sdk,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__cloud_sdk);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__cloud_sdk, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 41;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_credentials_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 42;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_credentials);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 43;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 44;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$oauth2$credentials;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_reauth_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 45;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$oauth2$credentials,
        mod_consts.const_str_plain_reauth,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_reauth);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_reauth, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$credentials$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 47;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_67ea57fbefa3372859b0a4720ff03315_tuple, 0)
);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e;
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_87a3e696d691b7be0a39ecbac31f66f0;
UPDATE_STRING_DICT0(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_INFO_ENDPOINT, tmp_assign_source_17);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ReadOnlyScoped);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CredentialsWithQuotaProject);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_18, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_18);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
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


exception_lineno = 57;

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
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_21;
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


exception_lineno = 57;

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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Credentials;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 57;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
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


exception_lineno = 57;

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
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_11, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
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


exception_lineno = 57;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_1;
}
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 57;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$oauth2$credentials$$$class__1_Credentials_57 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_67ea57fbefa3372859b0a4720ff03315;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_2a730624e5280c4fd9289e13cb8d4192;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_57;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2 = MAKE_CLASS_FRAME(tstate, code_objects_0150a10143c8e2050663c6e109a46013, module_google$oauth2$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$class__1_Credentials_2);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$class__1_Credentials_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = Py_None;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 16);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
tmp_expression_value_9 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_1, 14, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__2___getstate__(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__3___setstate__(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$oauth2$credentials$$$function__4_refresh_token(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 206;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_refresh_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$oauth2$credentials$$$function__5_scopes(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 211;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$oauth2$credentials$$$function__6_granted_scopes(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 216;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_granted_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$oauth2$credentials$$$function__7_token_uri(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 221;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_token_uri, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_google$oauth2$credentials$$$function__8_id_token(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 227;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_id_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_google$oauth2$credentials$$$function__9_client_id(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 238;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_client_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_google$oauth2$credentials$$$function__10_client_secret(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 243;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_client_secret, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
tmp_called_value_9 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_8 = MAKE_FUNCTION_google$oauth2$credentials$$$function__11_requires_scopes(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 248;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_requires_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
tmp_called_value_10 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_9 = MAKE_FUNCTION_google$oauth2$credentials$$$function__12_rapt_token(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 254;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_rapt_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_google$oauth2$credentials$$$function__13_refresh_handler(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 259;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_refresh_handler, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_11;
tmp_called_instance_2 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_refresh_handler);

if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_refresh_handler);

exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_11 = MAKE_FUNCTION_google$oauth2$credentials$$$function__14_refresh_handler(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 269;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_refresh_handler, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_12;
tmp_called_value_12 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_12 = MAKE_FUNCTION_google$oauth2$credentials$$$function__15_account(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 284;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_account, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__16__make_copy(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__make_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_14;
tmp_expression_value_10 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_11 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_11 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 310;
tmp_called_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_14 = MAKE_FUNCTION_google$oauth2$credentials$$$function__17_get_cred_info(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 310;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_get_cred_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_16;
tmp_expression_value_12 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_12 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_13 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 322;
tmp_called_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_16 = MAKE_FUNCTION_google$oauth2$credentials$$$function__18_with_quota_project(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 322;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_18;
tmp_expression_value_14 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_15 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_CredentialsWithTokenUri);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 328;
tmp_called_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_18 = MAKE_FUNCTION_google$oauth2$credentials$$$function__19_with_token_uri(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 328;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_with_token_uri, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__20_with_account(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_with_account, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_20;
tmp_expression_value_16 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_17 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_CredentialsWithUniverseDomain);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 347;
tmp_called_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_20 = MAKE_FUNCTION_google$oauth2$credentials$$$function__21_with_universe_domain(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 347;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_with_universe_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__22__metric_header_for_usage(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__metric_header_for_usage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_22;
tmp_expression_value_18 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_19 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 356;
tmp_called_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_22 = MAKE_FUNCTION_google$oauth2$credentials$$$function__23_refresh(tstate);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 356;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_23;
PyObject *tmp_defaults_2;
tmp_called_value_23 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, const_str_plain_classmethod);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_23 = MAKE_FUNCTION_google$oauth2$credentials$$$function__24_from_authorized_user_info(tstate, tmp_defaults_2);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 446;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_from_authorized_user_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_24;
PyObject *tmp_defaults_3;
tmp_called_value_24 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, const_str_plain_classmethod);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_args_element_value_24 = MAKE_FUNCTION_google$oauth2$credentials$$$function__25_from_authorized_user_file(tstate, tmp_defaults_3);

frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 502;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_from_authorized_user_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__26_to_json(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain_to_json, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$class__1_Credentials_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$class__1_Credentials_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$oauth2$credentials$$$class__1_Credentials_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_127ef0f962b86855be0d3186e0f9d966_tuple;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

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


exception_lineno = 57;

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
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__1_Credentials_57, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_Credentials;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_google$oauth2$credentials$$$class__1_Credentials_57;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 57;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_25);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_24 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$oauth2$credentials$$$class__1_Credentials_57);
locals_google$oauth2$credentials$$$class__1_Credentials_57 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$credentials$$$class__1_Credentials_57);
locals_google$oauth2$credentials$$$class__1_Credentials_57 = NULL;
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
exception_lineno = 57;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_24);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_CredentialsWithQuotaProject);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_UserAccessTokenCredentials;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 559;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_12, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_4;
}
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 559;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 559;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
branch_end_4:;
{
PyObject *tmp_assign_source_32;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_67ea57fbefa3372859b0a4720ff03315;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_c5c6644d3d9aeeb7e0bef788910db56d;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_UserAccessTokenCredentials;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_559;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3 = MAKE_CLASS_FRAME(tstate, code_objects_df1b6e4959ad78461239521a47e82f38, module_google$oauth2$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3);
assert(Py_REFCNT(frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__27___init__(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__28_with_account(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_with_account, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_26;
tmp_expression_value_27 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_27 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_28 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3->m_frame.f_lineno = 596;
tmp_called_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_26 = MAKE_FUNCTION_google$oauth2$credentials$$$function__29_with_quota_project(tstate);

frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3->m_frame.f_lineno = 596;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$credentials$$$function__30_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_28;
tmp_expression_value_29 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_google$oauth2$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_30 = PyObject_GetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_google$oauth2$credentials$credentials(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_30);

exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_30);

exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3->m_frame.f_lineno = 614;
tmp_called_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_28 = MAKE_FUNCTION_google$oauth2$credentials$$$function__31_before_request(tstate);

frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3->m_frame.f_lineno = 614;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain_before_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_df257875f611c5f02dc7b92073d75b17_tuple;
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
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


exception_lineno = 559;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_31 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_UserAccessTokenCredentials;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$oauth2$credentials->m_frame.f_lineno = 559;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_33);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_32 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559);
locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559);
locals_google$oauth2$credentials$$$class__2_UserAccessTokenCredentials_559 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 559;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_UserAccessTokenCredentials, tmp_assign_source_32);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$oauth2$credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$oauth2$credentials", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.credentials" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$oauth2$credentials);
    return module_google$oauth2$credentials;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$credentials, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$oauth2$credentials", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

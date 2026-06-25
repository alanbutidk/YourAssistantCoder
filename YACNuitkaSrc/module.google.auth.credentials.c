/* Generated code for Python module 'google$auth$credentials'
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



/* The "module_google$auth$credentials" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$credentials;
PyDictObject *moduledict_google$auth$credentials;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_expiry;
PyObject *const_str_plain__quota_project_id;
PyObject *const_str_plain__trust_boundary;
PyObject *const_str_plain_DEFAULT_UNIVERSE_DOMAIN;
PyObject *const_str_plain__universe_domain;
PyObject *const_str_plain__use_non_blocking_refresh;
PyObject *const_str_plain_RefreshThreadManager;
PyObject *const_str_plain__refresh_worker;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_REFRESH_THRESHOLD;
PyObject *const_str_plain_utcnow;
PyObject *const_str_digest_1964924f3f7184c2f4e2589f4e9c575c;
PyObject *const_str_plain_token;
PyObject *const_str_plain_expired;
PyObject *const_str_digest_f95fd04b761ba5f8c270247ced378523;
PyObject *const_str_plain_TokenState;
PyObject *const_str_plain_INVALID;
PyObject *const_str_plain_FRESH;
PyObject *const_str_plain_STALE;
PyObject *const_str_digest_353f32e3d8c317214dd56d56312397bc;
PyObject *const_str_digest_03a055a7671dcc4e9113fb0688f447be;
PyObject *const_str_digest_43823591dd33ccbd322a2c093beb9450;
PyObject *const_str_digest_52d1a11e9a01d0e16bd45cefd02337f7;
PyObject *const_str_digest_71e61bf86599b3ab5873d8956d863be1;
PyObject *const_str_plain__apply;
PyObject *const_str_plain_quota_project_id;
PyObject *const_str_digest_7268bededd951249c54d0102e9842716;
PyObject *const_str_digest_ba19c3cd29c0df3a28686cba8327ccba;
PyObject *const_str_plain_valid;
PyObject *const_str_plain_refresh;
PyObject *const_str_plain_token_state;
PyObject *const_str_plain_start_refresh;
PyObject *const_str_plain_clear_error;
PyObject *const_str_plain__non_blocking_refresh;
PyObject *const_str_plain__blocking_refresh;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_add_metric_header;
PyObject *const_str_plain__metric_header_for_usage;
PyObject *const_str_plain_apply;
PyObject *const_str_digest_245e1b0cd777c6429cbf02766be45675;
PyObject *const_str_digest_828c5852ba528fed4948ebb0b8bd12c9;
PyObject *const_str_digest_46885ce12882e257d65aa250a753d86f;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT;
PyObject *const_str_plain_with_quota_project;
PyObject *const_str_digest_6e68a57b5a382fbf34ecdc64ff380d3c;
PyObject *const_str_digest_ea10c75697fed4f5e5a5c13d59f13b04;
PyObject *const_str_digest_b0cd7b121d126c6b0442ce837dde4a9b;
PyObject *const_str_digest_2765c451b79651a6d9f93bac42b9eb39;
PyObject *const_str_digest_c38accdfa4288ff5ef2c50f90af8fb91;
PyObject *const_str_digest_2ac9e8aede07d3b5d01e9de0b710ccf0;
PyObject *const_str_digest_4170a7443d5cfe3a42350f3898ea1e7b;
PyObject *const_str_plain_get_bool_from_env;
PyObject *const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED;
PyObject *const_dict_a21d0d193a566b277f5f7beb7fde4348;
PyObject *const_str_plain_universe_domain;
PyObject *const_str_plain__has_no_op_trust_boundary;
PyObject *const_str_digest_96db998a354401bf86afccfdc596f9ca;
PyObject *const_dict_1eb198a45580268165326254202b0032;
PyObject *const_str_digest_11de163ccfc60673e79de6f84a7c55e5;
PyObject *const_str_plain_encodedLocations;
PyObject *const_str_plain_update;
PyObject *const_str_plain__get_trust_boundary_header;
PyObject *const_str_digest_8b01ad604d74b9f87ed6f34e08a19497;
PyObject *const_str_plain__perform_refresh_token;
PyObject *const_str_plain__refresh_trust_boundary;
PyObject *const_str_digest_13c52199a14ae9d5fa6c8ae60267b1cf;
PyObject *const_str_plain__is_trust_boundary_lookup_required;
PyObject *const_str_plain__lookup_trust_boundary;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_plain_is_logging_enabled;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_3de7624e999e5302da8475db0d8c057f;
PyObject *const_str_digest_ea79fd15cde68977eba1b23694929e47;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain__client_tuple;
PyObject *const_str_plain__client;
PyObject *const_str_plain__build_trust_boundary_lookup_url;
PyObject *const_str_plain_InvalidValue;
PyObject *const_tuple_str_digest_c998e3c906bcbe33cf89a296b8760823_tuple;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_digest_270903ebb76a581b3e9148b283795ce5;
PyObject *const_str_digest_98a8f463750d57a1c2a073e52c60d579;
PyObject *const_str_digest_5440977fa55500e776d34a5682cc355b;
PyObject *const_tuple_str_plain_encodedLocations_tuple;
PyObject *const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS;
PyObject *const_str_plain_InvalidOperation;
PyObject *const_tuple_str_digest_a8848ac3f87f3045f347e32f876ebd87_tuple;
PyObject *const_str_digest_994c3cf3525b66e84982460e7d73a1da;
PyObject *const_tuple_str_digest_e9fdc713c88b76dd9c0ad04abec47cf0_tuple;
PyObject *const_str_digest_54ccfcbfbdd86e51985e6e7345dbd182;
PyObject *const_str_plain_ReadOnlyScoped;
PyObject *const_str_plain__scopes;
PyObject *const_str_plain__default_scopes;
PyObject *const_str_digest_d65a2b909cc54984835077c3be324e2c;
PyObject *const_str_digest_85301096a1fb2328c267b81d91cb5c86;
PyObject *const_str_plain_issubset;
PyObject *const_str_digest_27c92bf84ad3f941ce70ddb58af3e909;
PyObject *const_str_digest_a66fd548ffdfd9033d59ef365bcc8862;
PyObject *const_str_digest_cefc9e2480f39ad3a16dfd788ff0618b;
PyObject *const_str_plain_Scoped;
PyObject *const_str_plain_requires_scopes;
PyObject *const_str_plain_with_scopes;
PyObject *const_tuple_str_plain_default_scopes_tuple;
PyObject *const_str_digest_45ce151fd7022937b80d0585c63a5f57;
PyObject *const_str_digest_b984540a2a7c6da68fbc13fabf3a75cf;
PyObject *const_str_digest_31e697cc468341e8106c47eecb29cbc5;
PyObject *const_str_digest_8d244cae7be2b1839e4ea0e61d4c93f2;
PyObject *const_str_digest_12b6b8a0323845844cdc0bb1372f1a75;
PyObject *const_str_digest_0ae22dc4ac6e128016a20de8b642b83e;
PyObject *const_str_digest_556e79d95b021c93f1c32e74c2ca489a;
PyObject *const_str_digest_c01644de5eb1ba70ac502104e8181b75;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_plain_List;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_str_digest_89dd279f9e5fd0656a49ae6d17bd2bec;
PyObject *const_tuple_str_plain__BaseCredentials_tuple;
PyObject *const_str_plain__BaseCredentials;
PyObject *const_str_digest_43931243ad2fc21968dbe1681afeeba4;
PyObject *const_tuple_str_plain_RefreshThreadManager_tuple;
PyObject *const_str_digest_3aefddac426ef180a4b7d7808d36479c;
PyObject *const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS;
PyObject *const_str_plain_0x0;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_66e1490e3bfd83366eddbd0e98398fad_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
PyObject *const_str_digest_e4deca07a1c14a4199eedcceb6c931a7;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_37;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_plain_property;
PyObject *const_str_digest_1fa53d1758421769756849164189513b;
PyObject *const_str_digest_36b5d44e7da3554dbca13b1e6f329328;
PyObject *const_str_digest_43dc86c04d724e958dcdd60126c33645;
PyObject *const_str_digest_8a28324d862893dac41f2238df175f94;
PyObject *const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9;
PyObject *const_str_digest_795c3b6acd0e751d55cb65c6f2ea363e;
PyObject *const_str_plain_get_cred_info;
PyObject *const_str_digest_2902b573691aef3e2e3d3564ca94d182;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_b8d96327bb876dc140fac3cfa41e9d75;
PyObject *const_str_digest_4d0148394ce0012d9b7207f98c4032ef;
PyObject *const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_6f4508542a08d7a30bcdecbbf90e816a;
PyObject *const_str_digest_041de61efe574950d03b3359c88cb60d;
PyObject *const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205;
PyObject *const_str_plain_before_request;
PyObject *const_str_digest_891c61566b05b90ece0b74c879d135a4;
PyObject *const_str_plain_with_non_blocking_refresh;
PyObject *const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5;
PyObject *const_tuple_37f36ccc7cd065108115ad40b2b7fcf5_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_CredentialsWithQuotaProject;
PyObject *const_str_digest_09800bca7f050c2f17e8de5c91133414;
PyObject *const_int_pos_239;
PyObject *const_str_digest_4ed80400fc2af0d0e0860efce138486e;
PyObject *const_str_plain_with_quota_project_from_environment;
PyObject *const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e;
PyObject *const_str_plain_CredentialsWithTokenUri;
PyObject *const_str_digest_1aa81c9eabcc0398d790ff7f84d2465e;
PyObject *const_int_pos_261;
PyObject *const_str_plain_with_token_uri;
PyObject *const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82;
PyObject *const_str_plain_CredentialsWithUniverseDomain;
PyObject *const_str_digest_19a531db29f1cda9ba3373f6ecc828c4;
PyObject *const_int_pos_276;
PyObject *const_str_plain_with_universe_domain;
PyObject *const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd;
PyObject *const_str_plain_CredentialsWithTrustBoundary;
PyObject *const_str_digest_afb877e277ab3f37c6e33e85251784b3;
PyObject *const_int_pos_293;
PyObject *const_str_digest_17e77ca370a44363897a4c29d652ab7e;
PyObject *const_str_plain_with_trust_boundary;
PyObject *const_str_digest_7d0bc6baec47f9a429986a617688b7fc;
PyObject *const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6;
PyObject *const_str_digest_87883f772535b1f62e4698112f9ee10e;
PyObject *const_str_digest_5ef3806fa986726ad6ab543aa20f9996;
PyObject *const_str_digest_e42f5cccce86b194326e5290acadc142;
PyObject *const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4;
PyObject *const_str_digest_71ff6b047a5754a1a6d76fe9534571b7;
PyObject *const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2;
PyObject *const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e;
PyObject *const_tuple_str_plain__trust_boundary_tuple;
PyObject *const_str_plain_AnonymousCredentials;
PyObject *const_str_digest_0b0550a7be290e407a635d33c68e0e09;
PyObject *const_int_pos_448;
PyObject *const_str_digest_f6300c2a7ce37be43c12f9eadb8e8111;
PyObject *const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8;
PyObject *const_str_digest_5482a8dc2c0da94423864fc7395949e5;
PyObject *const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798;
PyObject *const_str_digest_4db09e9ecd1a95c93ed8d33396de001a;
PyObject *const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0;
PyObject *const_str_digest_edc5d329c2d8b99cc4789c125d6cef70;
PyObject *const_str_digest_80d8d5e48ae66b131bf60f732e82907b;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_tuple_str_plain_ReadOnlyScoped_tuple_empty_tuple;
PyObject *const_str_digest_feeff03b45469a784de8e79197a87290;
PyObject *const_int_pos_485;
PyObject *const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e;
PyObject *const_str_plain_scopes;
PyObject *const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb;
PyObject *const_str_plain_default_scopes;
PyObject *const_str_digest_2495e0a4bb69faede5973da988adefbd;
PyObject *const_str_plain_abstractproperty;
PyObject *const_str_digest_c3d44b057cf460b6b854bd7b025669d2;
PyObject *const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a;
PyObject *const_str_plain_has_scopes;
PyObject *const_str_digest_dac376886a00ee801cbaf5e48999ed6f;
PyObject *const_tuple_str_plain__scopes_str_plain__default_scopes_tuple;
PyObject *const_str_digest_a1aabd1957b5d3aef9a8ac9d28ba6040;
PyObject *const_int_pos_552;
PyObject *const_str_digest_c59943a6c16dd7d848f3c40cef9303db;
PyObject *const_str_plain_with_scopes_if_required;
PyObject *const_tuple_str_plain_Signing_tuple_empty_tuple;
PyObject *const_str_digest_93907ea435bfa672e7d21dcb4e468850;
PyObject *const_str_plain_Signing;
PyObject *const_int_pos_625;
PyObject *const_str_plain_sign_bytes;
PyObject *const_str_digest_3c71b2b195136a3e14a781da93348c26;
PyObject *const_str_plain_signer_email;
PyObject *const_str_digest_645a375aaf7d57599950b8fabeba7c51;
PyObject *const_str_plain_signer;
PyObject *const_str_digest_d5fd5614a34a238687932a4d49af7444;
PyObject *const_str_digest_aa82344b4a89e470a33996674039b832;
PyObject *const_int_pos_657;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_str_digest_aed50f4bf979e577162c0a53c623e51a;
PyObject *const_str_digest_15df81891e680f3111e7b0e1edeb57d0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_e983dfa4ab90f21f8aca9b9137021a43_tuple;
PyObject *const_tuple_0a7ec0585591aaea76e9b23f690609d9_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_error_tuple;
PyObject *const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple;
PyObject *const_tuple_35809327938932a874ac0de3cfe2438b_tuple;
PyObject *const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_skewed_expiry_tuple;
PyObject *const_tuple_str_plain_self_str_plain_scopes_str_plain_credential_scopes_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_expired_str_plain_is_stale_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_from_env_tuple;
PyObject *const_tuple_str_plain_self_str_plain_scopes_str_plain_default_scopes_tuple;
PyObject *const_tuple_323963977e10d4e837aab97aeb08e950_tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_uri_tuple;
PyObject *const_tuple_str_plain_self_str_plain_trust_boundary_tuple;
PyObject *const_tuple_str_plain_self_str_plain_universe_domain_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[272];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.credentials"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_expiry);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__use_non_blocking_refresh);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshThreadManager);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_worker);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_REFRESH_THRESHOLD);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_1964924f3f7184c2f4e2589f4e9c575c);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_expired);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_f95fd04b761ba5f8c270247ced378523);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenState);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_FRESH);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_STALE);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_353f32e3d8c317214dd56d56312397bc);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_03a055a7671dcc4e9113fb0688f447be);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_43823591dd33ccbd322a2c093beb9450);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_52d1a11e9a01d0e16bd45cefd02337f7);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_71e61bf86599b3ab5873d8956d863be1);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_quota_project_id);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_7268bededd951249c54d0102e9842716);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba19c3cd29c0df3a28686cba8327ccba);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_state);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_refresh);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_error);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__non_blocking_refresh);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__blocking_refresh);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_metric_header);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_245e1b0cd777c6429cbf02766be45675);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_828c5852ba528fed4948ebb0b8bd12c9);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_46885ce12882e257d65aa250a753d86f);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e68a57b5a382fbf34ecdc64ff380d3c);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea10c75697fed4f5e5a5c13d59f13b04);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0cd7b121d126c6b0442ce837dde4a9b);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_2765c451b79651a6d9f93bac42b9eb39);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_c38accdfa4288ff5ef2c50f90af8fb91);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ac9e8aede07d3b5d01e9de0b710ccf0);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_4170a7443d5cfe3a42350f3898ea1e7b);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_bool_from_env);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_a21d0d193a566b277f5f7beb7fde4348);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_no_op_trust_boundary);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_96db998a354401bf86afccfdc596f9ca);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_1eb198a45580268165326254202b0032);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_11de163ccfc60673e79de6f84a7c55e5);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodedLocations);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_trust_boundary_header);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b01ad604d74b9f87ed6f34e08a19497);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_trust_boundary);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_13c52199a14ae9d5fa6c8ae60267b1cf);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_trust_boundary_lookup_required);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_logging_enabled);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_3de7624e999e5302da8475db0d8c057f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea79fd15cde68977eba1b23694929e47);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain__build_trust_boundary_lookup_url);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c998e3c906bcbe33cf89a296b8760823_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_270903ebb76a581b3e9148b283795ce5);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_98a8f463750d57a1c2a073e52c60d579);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_5440977fa55500e776d34a5682cc355b);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encodedLocations_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOperation);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a8848ac3f87f3045f347e32f876ebd87_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_994c3cf3525b66e84982460e7d73a1da);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9fdc713c88b76dd9c0ad04abec47cf0_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_54ccfcbfbdd86e51985e6e7345dbd182);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadOnlyScoped);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__scopes);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_scopes);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_d65a2b909cc54984835077c3be324e2c);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_85301096a1fb2328c267b81d91cb5c86);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_issubset);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_27c92bf84ad3f941ce70ddb58af3e909);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_a66fd548ffdfd9033d59ef365bcc8862);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_cefc9e2480f39ad3a16dfd788ff0618b);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scoped);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_scopes_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ce151fd7022937b80d0585c63a5f57);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_b984540a2a7c6da68fbc13fabf3a75cf);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_31e697cc468341e8106c47eecb29cbc5);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d244cae7be2b1839e4ea0e61d4c93f2);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_12b6b8a0323845844cdc0bb1372f1a75);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ae22dc4ac6e128016a20de8b642b83e);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_556e79d95b021c93f1c32e74c2ca489a);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_c01644de5eb1ba70ac502104e8181b75);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_str_plain_environment_vars_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_89dd279f9e5fd0656a49ae6d17bd2bec);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BaseCredentials_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__BaseCredentials);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_43931243ad2fc21968dbe1681afeeba4);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefreshThreadManager_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_0x0);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_66e1490e3bfd83366eddbd0e98398fad_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4deca07a1c14a4199eedcceb6c931a7);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fa53d1758421769756849164189513b);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_36b5d44e7da3554dbca13b1e6f329328);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_43dc86c04d724e958dcdd60126c33645);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a28324d862893dac41f2238df175f94);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_795c3b6acd0e751d55cb65c6f2ea363e);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d0148394ce0012d9b7207f98c4032ef);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f4508542a08d7a30bcdecbbf90e816a);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_041de61efe574950d03b3359c88cb60d);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_request);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_891c61566b05b90ece0b74c879d135a4);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_non_blocking_refresh);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_37f36ccc7cd065108115ad40b2b7fcf5_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_09800bca7f050c2f17e8de5c91133414);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_239);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ed80400fc2af0d0e0860efce138486e);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project_from_environment);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTokenUri);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_1aa81c9eabcc0398d790ff7f84d2465e);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_261);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_token_uri);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithUniverseDomain);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_19a531db29f1cda9ba3373f6ecc828c4);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_276);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_universe_domain);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTrustBoundary);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_afb877e277ab3f37c6e33e85251784b3);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_pos_293);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_17e77ca370a44363897a4c29d652ab7e);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_trust_boundary);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d0bc6baec47f9a429986a617688b7fc);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_87883f772535b1f62e4698112f9ee10e);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ef3806fa986726ad6ab543aa20f9996);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_e42f5cccce86b194326e5290acadc142);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_71ff6b047a5754a1a6d76fe9534571b7);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_boundary_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnonymousCredentials);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b0550a7be290e407a635d33c68e0e09);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_int_pos_448);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6300c2a7ce37be43c12f9eadb8e8111);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_5482a8dc2c0da94423864fc7395949e5);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_4db09e9ecd1a95c93ed8d33396de001a);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_edc5d329c2d8b99cc4789c125d6cef70);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_80d8d5e48ae66b131bf60f732e82907b);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReadOnlyScoped_tuple_empty_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_feeff03b45469a784de8e79197a87290);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_int_pos_485);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_scopes);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_scopes);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_2495e0a4bb69faede5973da988adefbd);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractproperty);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3d44b057cf460b6b854bd7b025669d2);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_scopes);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_dac376886a00ee801cbaf5e48999ed6f);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__scopes_str_plain__default_scopes_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1aabd1957b5d3aef9a8ac9d28ba6040);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_int_pos_552);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_c59943a6c16dd7d848f3c40cef9303db);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes_if_required);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signing_tuple_empty_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_93907ea435bfa672e7d21dcb4e468850);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signing);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_int_pos_625);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c71b2b195136a3e14a781da93348c26);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_645a375aaf7d57599950b8fabeba7c51);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5fd5614a34a238687932a4d49af7444);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa82344b4a89e470a33996674039b832);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_int_pos_657);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_aed50f4bf979e577162c0a53c623e51a);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_digest_15df81891e680f3111e7b0e1edeb57d0);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_e983dfa4ab90f21f8aca9b9137021a43_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_0a7ec0585591aaea76e9b23f690609d9_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_error_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_35809327938932a874ac0de3cfe2438b_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_skewed_expiry_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_credential_scopes_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_expired_str_plain_is_stale_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_from_env_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_default_scopes_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_323963977e10d4e837aab97aeb08e950_tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_tuple);
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
void checkModuleConstants_google$auth$credentials(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expiry);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quota_project_id);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trust_boundary);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__universe_domain);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__use_non_blocking_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__use_non_blocking_refresh);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshThreadManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshThreadManager);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_worker);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_REFRESH_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REFRESH_THRESHOLD);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_1964924f3f7184c2f4e2589f4e9c575c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1964924f3f7184c2f4e2589f4e9c575c);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_expired));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expired);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_f95fd04b761ba5f8c270247ced378523));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f95fd04b761ba5f8c270247ced378523);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenState);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_FRESH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FRESH);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_STALE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STALE);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_353f32e3d8c317214dd56d56312397bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_353f32e3d8c317214dd56d56312397bc);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_03a055a7671dcc4e9113fb0688f447be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03a055a7671dcc4e9113fb0688f447be);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_43823591dd33ccbd322a2c093beb9450));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43823591dd33ccbd322a2c093beb9450);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_52d1a11e9a01d0e16bd45cefd02337f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52d1a11e9a01d0e16bd45cefd02337f7);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_71e61bf86599b3ab5873d8956d863be1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71e61bf86599b3ab5873d8956d863be1);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quota_project_id);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_7268bededd951249c54d0102e9842716));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7268bededd951249c54d0102e9842716);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba19c3cd29c0df3a28686cba8327ccba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba19c3cd29c0df3a28686cba8327ccba);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_state);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_refresh);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_error);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__non_blocking_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__non_blocking_refresh);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__blocking_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__blocking_refresh);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_metric_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_metric_header);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__metric_header_for_usage);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_245e1b0cd777c6429cbf02766be45675));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_245e1b0cd777c6429cbf02766be45675);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_828c5852ba528fed4948ebb0b8bd12c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_828c5852ba528fed4948ebb0b8bd12c9);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_46885ce12882e257d65aa250a753d86f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46885ce12882e257d65aa250a753d86f);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_quota_project);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e68a57b5a382fbf34ecdc64ff380d3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e68a57b5a382fbf34ecdc64ff380d3c);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea10c75697fed4f5e5a5c13d59f13b04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea10c75697fed4f5e5a5c13d59f13b04);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0cd7b121d126c6b0442ce837dde4a9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0cd7b121d126c6b0442ce837dde4a9b);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_2765c451b79651a6d9f93bac42b9eb39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2765c451b79651a6d9f93bac42b9eb39);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_c38accdfa4288ff5ef2c50f90af8fb91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c38accdfa4288ff5ef2c50f90af8fb91);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ac9e8aede07d3b5d01e9de0b710ccf0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ac9e8aede07d3b5d01e9de0b710ccf0);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_4170a7443d5cfe3a42350f3898ea1e7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4170a7443d5cfe3a42350f3898ea1e7b);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_bool_from_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_bool_from_env);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_a21d0d193a566b277f5f7beb7fde4348));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a21d0d193a566b277f5f7beb7fde4348);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_universe_domain);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_no_op_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_no_op_trust_boundary);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_96db998a354401bf86afccfdc596f9ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96db998a354401bf86afccfdc596f9ca);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_1eb198a45580268165326254202b0032));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1eb198a45580268165326254202b0032);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_11de163ccfc60673e79de6f84a7c55e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11de163ccfc60673e79de6f84a7c55e5);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodedLocations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodedLocations);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_trust_boundary_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_trust_boundary_header);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b01ad604d74b9f87ed6f34e08a19497));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b01ad604d74b9f87ed6f34e08a19497);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__perform_refresh_token);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_trust_boundary);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_13c52199a14ae9d5fa6c8ae60267b1cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13c52199a14ae9d5fa6c8ae60267b1cf);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_trust_boundary_lookup_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_trust_boundary_lookup_required);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lookup_trust_boundary);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_logging_enabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_logging_enabled);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_3de7624e999e5302da8475db0d8c057f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3de7624e999e5302da8475db0d8c057f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea79fd15cde68977eba1b23694929e47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea79fd15cde68977eba1b23694929e47);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain__build_trust_boundary_lookup_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__build_trust_boundary_lookup_url);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c998e3c906bcbe33cf89a296b8760823_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c998e3c906bcbe33cf89a296b8760823_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_270903ebb76a581b3e9148b283795ce5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270903ebb76a581b3e9148b283795ce5);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_98a8f463750d57a1c2a073e52c60d579));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98a8f463750d57a1c2a073e52c60d579);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_5440977fa55500e776d34a5682cc355b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5440977fa55500e776d34a5682cc355b);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encodedLocations_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encodedLocations_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidOperation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidOperation);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a8848ac3f87f3045f347e32f876ebd87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a8848ac3f87f3045f347e32f876ebd87_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_994c3cf3525b66e84982460e7d73a1da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_994c3cf3525b66e84982460e7d73a1da);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9fdc713c88b76dd9c0ad04abec47cf0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e9fdc713c88b76dd9c0ad04abec47cf0_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_54ccfcbfbdd86e51985e6e7345dbd182));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54ccfcbfbdd86e51985e6e7345dbd182);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadOnlyScoped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadOnlyScoped);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scopes);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_scopes);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_d65a2b909cc54984835077c3be324e2c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d65a2b909cc54984835077c3be324e2c);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_85301096a1fb2328c267b81d91cb5c86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85301096a1fb2328c267b81d91cb5c86);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_issubset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issubset);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_27c92bf84ad3f941ce70ddb58af3e909));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27c92bf84ad3f941ce70ddb58af3e909);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_a66fd548ffdfd9033d59ef365bcc8862));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a66fd548ffdfd9033d59ef365bcc8862);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_cefc9e2480f39ad3a16dfd788ff0618b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cefc9e2480f39ad3a16dfd788ff0618b);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scoped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Scoped);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requires_scopes);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_scopes);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_scopes_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ce151fd7022937b80d0585c63a5f57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45ce151fd7022937b80d0585c63a5f57);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_b984540a2a7c6da68fbc13fabf3a75cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b984540a2a7c6da68fbc13fabf3a75cf);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_31e697cc468341e8106c47eecb29cbc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31e697cc468341e8106c47eecb29cbc5);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d244cae7be2b1839e4ea0e61d4c93f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d244cae7be2b1839e4ea0e61d4c93f2);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_12b6b8a0323845844cdc0bb1372f1a75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12b6b8a0323845844cdc0bb1372f1a75);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ae22dc4ac6e128016a20de8b642b83e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ae22dc4ac6e128016a20de8b642b83e);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_556e79d95b021c93f1c32e74c2ca489a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_556e79d95b021c93f1c32e74c2ca489a);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_c01644de5eb1ba70ac502104e8181b75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c01644de5eb1ba70ac502104e8181b75);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_str_plain_environment_vars_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_89dd279f9e5fd0656a49ae6d17bd2bec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89dd279f9e5fd0656a49ae6d17bd2bec);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__BaseCredentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__BaseCredentials_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__BaseCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BaseCredentials);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_43931243ad2fc21968dbe1681afeeba4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43931243ad2fc21968dbe1681afeeba4);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RefreshThreadManager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RefreshThreadManager_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_0x0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_0x0);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_66e1490e3bfd83366eddbd0e98398fad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_66e1490e3bfd83366eddbd0e98398fad_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4deca07a1c14a4199eedcceb6c931a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4deca07a1c14a4199eedcceb6c931a7);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_37));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_37);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fa53d1758421769756849164189513b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fa53d1758421769756849164189513b);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_36b5d44e7da3554dbca13b1e6f329328));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36b5d44e7da3554dbca13b1e6f329328);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_43dc86c04d724e958dcdd60126c33645));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43dc86c04d724e958dcdd60126c33645);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a28324d862893dac41f2238df175f94));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a28324d862893dac41f2238df175f94);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_795c3b6acd0e751d55cb65c6f2ea363e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_795c3b6acd0e751d55cb65c6f2ea363e);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cred_info);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d0148394ce0012d9b7207f98c4032ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d0148394ce0012d9b7207f98c4032ef);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f4508542a08d7a30bcdecbbf90e816a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f4508542a08d7a30bcdecbbf90e816a);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_041de61efe574950d03b3359c88cb60d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_041de61efe574950d03b3359c88cb60d);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_request);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_891c61566b05b90ece0b74c879d135a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_891c61566b05b90ece0b74c879d135a4);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_non_blocking_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_non_blocking_refresh);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_37f36ccc7cd065108115ad40b2b7fcf5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_37f36ccc7cd065108115ad40b2b7fcf5_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithQuotaProject);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_09800bca7f050c2f17e8de5c91133414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09800bca7f050c2f17e8de5c91133414);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_239));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_239);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ed80400fc2af0d0e0860efce138486e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ed80400fc2af0d0e0860efce138486e);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project_from_environment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_quota_project_from_environment);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTokenUri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithTokenUri);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_1aa81c9eabcc0398d790ff7f84d2465e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1aa81c9eabcc0398d790ff7f84d2465e);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_261));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_261);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_token_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_token_uri);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithUniverseDomain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithUniverseDomain);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_19a531db29f1cda9ba3373f6ecc828c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19a531db29f1cda9ba3373f6ecc828c4);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_276));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_276);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_universe_domain);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTrustBoundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithTrustBoundary);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_afb877e277ab3f37c6e33e85251784b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afb877e277ab3f37c6e33e85251784b3);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_pos_293));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_293);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_17e77ca370a44363897a4c29d652ab7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17e77ca370a44363897a4c29d652ab7e);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_trust_boundary);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d0bc6baec47f9a429986a617688b7fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d0bc6baec47f9a429986a617688b7fc);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_87883f772535b1f62e4698112f9ee10e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87883f772535b1f62e4698112f9ee10e);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ef3806fa986726ad6ab543aa20f9996));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ef3806fa986726ad6ab543aa20f9996);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_e42f5cccce86b194326e5290acadc142));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e42f5cccce86b194326e5290acadc142);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_71ff6b047a5754a1a6d76fe9534571b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71ff6b047a5754a1a6d76fe9534571b7);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__trust_boundary_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnonymousCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnonymousCredentials);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b0550a7be290e407a635d33c68e0e09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b0550a7be290e407a635d33c68e0e09);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_int_pos_448));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_448);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6300c2a7ce37be43c12f9eadb8e8111));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6300c2a7ce37be43c12f9eadb8e8111);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_5482a8dc2c0da94423864fc7395949e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5482a8dc2c0da94423864fc7395949e5);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_4db09e9ecd1a95c93ed8d33396de001a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4db09e9ecd1a95c93ed8d33396de001a);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_edc5d329c2d8b99cc4789c125d6cef70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edc5d329c2d8b99cc4789c125d6cef70);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_80d8d5e48ae66b131bf60f732e82907b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80d8d5e48ae66b131bf60f732e82907b);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReadOnlyScoped_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReadOnlyScoped_tuple_empty_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_feeff03b45469a784de8e79197a87290));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_feeff03b45469a784de8e79197a87290);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_int_pos_485));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_485);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scopes);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_scopes);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_2495e0a4bb69faede5973da988adefbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2495e0a4bb69faede5973da988adefbd);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractproperty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractproperty);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3d44b057cf460b6b854bd7b025669d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3d44b057cf460b6b854bd7b025669d2);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_scopes);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_dac376886a00ee801cbaf5e48999ed6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dac376886a00ee801cbaf5e48999ed6f);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__scopes_str_plain__default_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__scopes_str_plain__default_scopes_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1aabd1957b5d3aef9a8ac9d28ba6040));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1aabd1957b5d3aef9a8ac9d28ba6040);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_int_pos_552));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_552);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_c59943a6c16dd7d848f3c40cef9303db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c59943a6c16dd7d848f3c40cef9303db);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes_if_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_scopes_if_required);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signing_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Signing_tuple_empty_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_93907ea435bfa672e7d21dcb4e468850));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93907ea435bfa672e7d21dcb4e468850);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signing);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_int_pos_625));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_625);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign_bytes);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c71b2b195136a3e14a781da93348c26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c71b2b195136a3e14a781da93348c26);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer_email);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_645a375aaf7d57599950b8fabeba7c51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_645a375aaf7d57599950b8fabeba7c51);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5fd5614a34a238687932a4d49af7444));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5fd5614a34a238687932a4d49af7444);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa82344b4a89e470a33996674039b832));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa82344b4a89e470a33996674039b832);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_int_pos_657));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_657);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_aed50f4bf979e577162c0a53c623e51a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aed50f4bf979e577162c0a53c623e51a);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_digest_15df81891e680f3111e7b0e1edeb57d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15df81891e680f3111e7b0e1edeb57d0);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_e983dfa4ab90f21f8aca9b9137021a43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e983dfa4ab90f21f8aca9b9137021a43_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_0a7ec0585591aaea76e9b23f690609d9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a7ec0585591aaea76e9b23f690609d9_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_error_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_35809327938932a874ac0de3cfe2438b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_35809327938932a874ac0de3cfe2438b_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_skewed_expiry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_skewed_expiry_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_credential_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_credential_scopes_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_expired_str_plain_is_stale_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_expired_str_plain_is_stale_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_from_env_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_from_env_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_default_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_default_scopes_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_323963977e10d4e837aab97aeb08e950_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_323963977e10d4e837aab97aeb08e950_tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_uri_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_tuple);
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
static PyObject *module_var_accessor_google$auth$credentials$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$DEFAULT_UNIVERSE_DOMAIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$Enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$List(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_List);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_List, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_List);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$ReadOnlyScoped(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadOnlyScoped);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadOnlyScoped);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadOnlyScoped, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadOnlyScoped);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadOnlyScoped, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadOnlyScoped);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadOnlyScoped);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadOnlyScoped);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$RefreshThreadManager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshThreadManager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RefreshThreadManager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RefreshThreadManager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RefreshThreadManager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RefreshThreadManager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshThreadManager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshThreadManager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshThreadManager);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$Scoped(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Scoped);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Scoped);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Scoped, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Scoped);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Scoped, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Scoped);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Scoped);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Scoped);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$TokenState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TokenState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TokenState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TokenState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TokenState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenState);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$_BaseCredentials(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__BaseCredentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__BaseCredentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__BaseCredentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__BaseCredentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__BaseCredentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__BaseCredentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__BaseCredentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__BaseCredentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$credentials$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e58c8be5c4a630582d702b4f73d453e5;
static PyCodeObject *code_objects_4cb3e1f265bf4e036525cea80d8ae85c;
static PyCodeObject *code_objects_9e2e635a75d779a72168c2f5968cca96;
static PyCodeObject *code_objects_e003ca388271313ae1d3f788bedab6a9;
static PyCodeObject *code_objects_1de817399c7fbfeac3d6234dc4dec385;
static PyCodeObject *code_objects_9e2f93969d09ebeb93cc191fc084620a;
static PyCodeObject *code_objects_328adac43d3845d76f0d09e85bc55759;
static PyCodeObject *code_objects_a5e8b507da4bc245125b30759d23cb2d;
static PyCodeObject *code_objects_491c02d7813b8c54061e73f94d62fcf7;
static PyCodeObject *code_objects_bdffab74d552c5c0319047fc91cb82fb;
static PyCodeObject *code_objects_8700ecb537dfcd4e22403ba41b78f769;
static PyCodeObject *code_objects_6cdce4b04fcf9648aaeca8ad5a0a6e2f;
static PyCodeObject *code_objects_8a7400578052a1b866974ed2a5f6a7bd;
static PyCodeObject *code_objects_c1cbe474764700b4a4f3da89f762ff13;
static PyCodeObject *code_objects_3ac51caaecf012770b6e51204e0bd1e1;
static PyCodeObject *code_objects_a8b20f86afca9fdf65d25416ecc4ba4f;
static PyCodeObject *code_objects_a7a697857c2f1ce286cbc2bf6839967a;
static PyCodeObject *code_objects_3294d37b477da40152b4e3bf4a0ad187;
static PyCodeObject *code_objects_c6150d62dc23be6db14ec46280e5a985;
static PyCodeObject *code_objects_b6b096343a2aab45a3e087373b1369e3;
static PyCodeObject *code_objects_41d610278bc02838ab16b83c1e45e7d8;
static PyCodeObject *code_objects_0b50a99fd630c414194fe2ab08139c49;
static PyCodeObject *code_objects_298e5bfdad5d55f443b0ce35f0f4acb3;
static PyCodeObject *code_objects_bd71b8833786082b9dd8e19bd3084ae0;
static PyCodeObject *code_objects_8d34acef76f1bbe097f2f1fbf5222472;
static PyCodeObject *code_objects_eb39e254db4f2a0b13becb94eda216c6;
static PyCodeObject *code_objects_3f1bec80608e51bdbad10aa9cc163d7e;
static PyCodeObject *code_objects_fa6e8c6cbf6e7dca4141d89c67f081b5;
static PyCodeObject *code_objects_4e8f07776e54494bafa8a5ba3feb64e9;
static PyCodeObject *code_objects_3dfa93d042f890fd8856b5df35aa329d;
static PyCodeObject *code_objects_17a0ac99aab401a9f47d31da0a923df3;
static PyCodeObject *code_objects_1dcf91a209471973711b12d8e79ae726;
static PyCodeObject *code_objects_13dee4c9b136c585274fa7b79a2efd41;
static PyCodeObject *code_objects_7975346258c99619236d7bd8a2acaa70;
static PyCodeObject *code_objects_224180bddd5ea1c9a56c02629457b15f;
static PyCodeObject *code_objects_44006d3fe27cbbe9f97ab8059ec66b3a;
static PyCodeObject *code_objects_32ae32e0e638791a1e913bad175da81e;
static PyCodeObject *code_objects_9e93289c90743ed35aeb5ed497467e5e;
static PyCodeObject *code_objects_d66e644be45d7d4068e1470fa832413a;
static PyCodeObject *code_objects_0502336b3fa8c79e2a28864faa0f18d7;
static PyCodeObject *code_objects_3a289b4cbfed6aea1750d0fd74ce34ba;
static PyCodeObject *code_objects_4a7549f1ba0d84869df29510bb38728d;
static PyCodeObject *code_objects_76d9c32787858f92e9d5a7a5b13889a2;
static PyCodeObject *code_objects_3c227cf162c2929652e6f46952dda042;
static PyCodeObject *code_objects_93c458e3076386b0a9138255796afe4e;
static PyCodeObject *code_objects_4d7c3e5b94e07c12c2a3407a85059299;
static PyCodeObject *code_objects_ecdfe9903755755915f7d5ab8499fdc3;
static PyCodeObject *code_objects_54983893b618a4454e8f6b25e96951e6;
static PyCodeObject *code_objects_5fd160b1d9aed97e4fdf6dfaacc0142c;
static PyCodeObject *code_objects_20e624e5e2cc6c0bc40127f5da4f7e0b;
static PyCodeObject *code_objects_5cd71a5d55717165ec291f062c1e3481;
static PyCodeObject *code_objects_61175c63ebb07dd7df142364b44b10d0;
static PyCodeObject *code_objects_6a3e4dc56b4f6ebbc7a51a43aa240477;
static PyCodeObject *code_objects_8105cce4bbff339b46bdd2e29558aef7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_aed50f4bf979e577162c0a53c623e51a); CHECK_OBJECT(module_filename_obj);
code_objects_e58c8be5c4a630582d702b4f73d453e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_15df81891e680f3111e7b0e1edeb57d0, mod_consts.const_str_digest_15df81891e680f3111e7b0e1edeb57d0, NULL, NULL, 0, 0, 0);
code_objects_4cb3e1f265bf4e036525cea80d8ae85c = MAKE_CODE_OBJECT(module_filename_obj, 448, 0, mod_consts.const_str_plain_AnonymousCredentials, mod_consts.const_str_plain_AnonymousCredentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9e2e635a75d779a72168c2f5968cca96 = MAKE_CODE_OBJECT(module_filename_obj, 37, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e003ca388271313ae1d3f788bedab6a9 = MAKE_CODE_OBJECT(module_filename_obj, 239, 0, mod_consts.const_str_plain_CredentialsWithQuotaProject, mod_consts.const_str_plain_CredentialsWithQuotaProject, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1de817399c7fbfeac3d6234dc4dec385 = MAKE_CODE_OBJECT(module_filename_obj, 261, 0, mod_consts.const_str_plain_CredentialsWithTokenUri, mod_consts.const_str_plain_CredentialsWithTokenUri, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9e2f93969d09ebeb93cc191fc084620a = MAKE_CODE_OBJECT(module_filename_obj, 293, 0, mod_consts.const_str_plain_CredentialsWithTrustBoundary, mod_consts.const_str_plain_CredentialsWithTrustBoundary, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_328adac43d3845d76f0d09e85bc55759 = MAKE_CODE_OBJECT(module_filename_obj, 276, 0, mod_consts.const_str_plain_CredentialsWithUniverseDomain, mod_consts.const_str_plain_CredentialsWithUniverseDomain, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a5e8b507da4bc245125b30759d23cb2d = MAKE_CODE_OBJECT(module_filename_obj, 485, 0, mod_consts.const_str_plain_ReadOnlyScoped, mod_consts.const_str_plain_ReadOnlyScoped, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_491c02d7813b8c54061e73f94d62fcf7 = MAKE_CODE_OBJECT(module_filename_obj, 552, 0, mod_consts.const_str_plain_Scoped, mod_consts.const_str_plain_Scoped, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bdffab74d552c5c0319047fc91cb82fb = MAKE_CODE_OBJECT(module_filename_obj, 625, 0, mod_consts.const_str_plain_Signing, mod_consts.const_str_plain_Signing, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8700ecb537dfcd4e22403ba41b78f769 = MAKE_CODE_OBJECT(module_filename_obj, 657, 0, mod_consts.const_str_plain_TokenState, mod_consts.const_str_plain_TokenState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6cdce4b04fcf9648aaeca8ad5a0a6e2f = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_8a7400578052a1b866974ed2a5f6a7bd = MAKE_CODE_OBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_c1cbe474764700b4a4f3da89f762ff13 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__blocking_refresh, mod_consts.const_str_digest_041de61efe574950d03b3359c88cb60d, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_3ac51caaecf012770b6e51204e0bd1e1 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__build_trust_boundary_lookup_url, mod_consts.const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a8b20f86afca9fdf65d25416ecc4ba4f = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_trust_boundary_header, mod_consts.const_str_digest_87883f772535b1f62e4698112f9ee10e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a7a697857c2f1ce286cbc2bf6839967a = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__has_no_op_trust_boundary, mod_consts.const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3294d37b477da40152b4e3bf4a0ad187 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_trust_boundary_lookup_required, mod_consts.const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c6150d62dc23be6db14ec46280e5a985 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__lookup_trust_boundary, mod_consts.const_str_digest_71ff6b047a5754a1a6d76fe9534571b7, mod_consts.const_tuple_e983dfa4ab90f21f8aca9b9137021a43_tuple, NULL, 2, 0, 0);
code_objects_b6b096343a2aab45a3e087373b1369e3 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__metric_header_for_usage, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_41d610278bc02838ab16b83c1e45e7d8 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__non_blocking_refresh, mod_consts.const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205, mod_consts.const_tuple_0a7ec0585591aaea76e9b23f690609d9_tuple, NULL, 2, 0, 0);
code_objects_0b50a99fd630c414194fe2ab08139c49 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__perform_refresh_token, mod_consts.const_str_digest_17e77ca370a44363897a4c29d652ab7e, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_298e5bfdad5d55f443b0ce35f0f4acb3 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__refresh_trust_boundary, mod_consts.const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_error_tuple, NULL, 2, 0, 0);
code_objects_bd71b8833786082b9dd8e19bd3084ae0 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_apply, mod_consts.const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple, NULL, 3, 0, 0);
code_objects_8d34acef76f1bbe097f2f1fbf5222472 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_apply, mod_consts.const_str_digest_6f4508542a08d7a30bcdecbbf90e816a, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_token_tuple, NULL, 3, 0, 0);
code_objects_eb39e254db4f2a0b13becb94eda216c6 = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_apply, mod_consts.const_str_digest_5ef3806fa986726ad6ab543aa20f9996, mod_consts.const_tuple_35809327938932a874ac0de3cfe2438b_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_3f1bec80608e51bdbad10aa9cc163d7e = MAKE_CODE_OBJECT(module_filename_obj, 481, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_before_request, mod_consts.const_str_digest_80d8d5e48ae66b131bf60f732e82907b, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple, NULL, 5, 0, 0);
code_objects_fa6e8c6cbf6e7dca4141d89c67f081b5 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_before_request, mod_consts.const_str_digest_891c61566b05b90ece0b74c879d135a4, mod_consts.const_tuple_3370276137322dd8934206ec8bd7b7c1_tuple, NULL, 5, 0, 0);
code_objects_4e8f07776e54494bafa8a5ba3feb64e9 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_default_scopes, mod_consts.const_str_digest_2495e0a4bb69faede5973da988adefbd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3dfa93d042f890fd8856b5df35aa329d = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_expired, mod_consts.const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_17a0ac99aab401a9f47d31da0a923df3 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_expired, mod_consts.const_str_digest_1fa53d1758421769756849164189513b, mod_consts.const_tuple_str_plain_self_str_plain_skewed_expiry_tuple, NULL, 1, 0, 0);
code_objects_1dcf91a209471973711b12d8e79ae726 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cred_info, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_13dee4c9b136c585274fa7b79a2efd41 = MAKE_CODE_OBJECT(module_filename_obj, 534, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has_scopes, mod_consts.const_str_digest_dac376886a00ee801cbaf5e48999ed6f, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_credential_scopes_tuple, NULL, 2, 0, 0);
code_objects_7975346258c99619236d7bd8a2acaa70 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_quota_project_id, mod_consts.const_str_digest_8a28324d862893dac41f2238df175f94, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_224180bddd5ea1c9a56c02629457b15f = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_4db09e9ecd1a95c93ed8d33396de001a, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_44006d3fe27cbbe9f97ab8059ec66b3a = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_32ae32e0e638791a1e913bad175da81e = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_e42f5cccce86b194326e5290acadc142, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_9e93289c90743ed35aeb5ed497467e5e = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_requires_scopes, mod_consts.const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d66e644be45d7d4068e1470fa832413a = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_scopes, mod_consts.const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0502336b3fa8c79e2a28864faa0f18d7 = MAKE_CODE_OBJECT(module_filename_obj, 629, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_bytes, mod_consts.const_str_digest_3c71b2b195136a3e14a781da93348c26, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_3a289b4cbfed6aea1750d0fd74ce34ba = MAKE_CODE_OBJECT(module_filename_obj, 650, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer, mod_consts.const_str_digest_d5fd5614a34a238687932a4d49af7444, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4a7549f1ba0d84869df29510bb38728d = MAKE_CODE_OBJECT(module_filename_obj, 643, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer_email, mod_consts.const_str_digest_645a375aaf7d57599950b8fabeba7c51, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_76d9c32787858f92e9d5a7a5b13889a2 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_token_state, mod_consts.const_str_digest_43dc86c04d724e958dcdd60126c33645, mod_consts.const_tuple_str_plain_self_str_plain_expired_str_plain_is_stale_tuple, NULL, 1, 0, 0);
code_objects_3c227cf162c2929652e6f46952dda042 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_universe_domain, mod_consts.const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_93c458e3076386b0a9138255796afe4e = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid, mod_consts.const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4d7c3e5b94e07c12c2a3407a85059299 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid, mod_consts.const_str_digest_36b5d44e7da3554dbca13b1e6f329328, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ecdfe9903755755915f7d5ab8499fdc3 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_non_blocking_refresh, mod_consts.const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_54983893b618a4454e8f6b25e96951e6 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_4ed80400fc2af0d0e0860efce138486e, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple, NULL, 2, 0, 0);
code_objects_5fd160b1d9aed97e4fdf6dfaacc0142c = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project_from_environment, mod_consts.const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e, mod_consts.const_tuple_str_plain_self_str_plain_quota_from_env_tuple, NULL, 1, 0, 0);
code_objects_20e624e5e2cc6c0bc40127f5da4f7e0b = MAKE_CODE_OBJECT(module_filename_obj, 582, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_scopes, mod_consts.const_str_digest_c59943a6c16dd7d848f3c40cef9303db, mod_consts.const_tuple_str_plain_self_str_plain_scopes_str_plain_default_scopes_tuple, NULL, 3, 0, 0);
code_objects_5cd71a5d55717165ec291f062c1e3481 = MAKE_CODE_OBJECT(module_filename_obj, 597, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_scopes_if_required, mod_consts.const_str_plain_with_scopes_if_required, mod_consts.const_tuple_323963977e10d4e837aab97aeb08e950_tuple, NULL, 3, 0, 0);
code_objects_61175c63ebb07dd7df142364b44b10d0 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_token_uri, mod_consts.const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82, mod_consts.const_tuple_str_plain_self_str_plain_token_uri_tuple, NULL, 2, 0, 0);
code_objects_6a3e4dc56b4f6ebbc7a51a43aa240477 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_trust_boundary, mod_consts.const_str_digest_7d0bc6baec47f9a429986a617688b7fc, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_tuple, NULL, 2, 0, 0);
code_objects_8105cce4bbff339b46bdd2e29558aef7 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_universe_domain, mod_consts.const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd, mod_consts.const_tuple_str_plain_self_str_plain_universe_domain_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__10_apply(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__11__blocking_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__12__non_blocking_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__13_before_request(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__14_with_non_blocking_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__15_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__16_with_quota_project_from_environment(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__17_with_token_uri(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__18_with_universe_domain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__19__perform_refresh_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__20_with_trust_boundary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__22__get_trust_boundary_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__23_apply(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__24_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__25__refresh_trust_boundary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__26__lookup_trust_boundary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__28__has_no_op_trust_boundary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__29_expired(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__2_expired(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__30_valid(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__31_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__32_apply(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__33_before_request(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__34___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__35_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__36_default_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__37_requires_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__38_has_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__39_with_scopes(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__3_valid(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__40_with_scopes_if_required(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__41_sign_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__42_signer_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__43_signer(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__4_token_state(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__5_quota_project_id(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__6_universe_domain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__7_get_cred_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__8_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__9__metric_header_for_usage(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$credentials$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6cdce4b04fcf9648aaeca8ad5a0a6e2f, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__1___init__->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__1___init__ = cache_frame_frame_google$auth$credentials$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__1___init__->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oN";
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_expiry, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = module_var_accessor_google$auth$credentials$DEFAULT_UNIVERSE_DOMAIN(tstate);
if (unlikely(tmp_assattr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__universe_domain, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__use_non_blocking_refresh, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_6;
tmp_called_value_1 = module_var_accessor_google$auth$credentials$RefreshThreadManager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RefreshThreadManager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__1___init__->m_frame.f_lineno = 73;
tmp_assattr_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__refresh_worker, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__1___init__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__1___init__ == cache_frame_frame_google$auth$credentials$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__1___init__);
    cache_frame_frame_google$auth$credentials$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__1___init__);

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


static PyObject *impl_google$auth$credentials$$$function__2_expired(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_skewed_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__2_expired;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__2_expired = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__2_expired)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__2_expired);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__2_expired == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__2_expired = MAKE_FUNCTION_FRAME(tstate, code_objects_17a0ac99aab401a9f47d31da0a923df3, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__2_expired->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__2_expired = cache_frame_frame_google$auth$credentials$$$function__2_expired;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__2_expired);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__2_expired) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_expiry);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_expiry);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 90;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_REFRESH_THRESHOLD);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 90;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_skewed_expiry == NULL);
var_skewed_expiry = tmp_assign_source_1;
}
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__2_expired->m_frame.f_lineno = 91;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_skewed_expiry);
tmp_cmp_expr_right_1 = var_skewed_expiry;
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__2_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__2_expired->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__2_expired, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__2_expired,
    type_description_1,
    par_self,
    var_skewed_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__2_expired == cache_frame_frame_google$auth$credentials$$$function__2_expired) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__2_expired);
    cache_frame_frame_google$auth$credentials$$$function__2_expired = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__2_expired);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_skewed_expiry);
var_skewed_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_skewed_expiry);
var_skewed_expiry = NULL;
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


static PyObject *impl_google$auth$credentials$$$function__3_valid(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__3_valid;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__3_valid = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__3_valid)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__3_valid);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__3_valid == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__3_valid = MAKE_FUNCTION_FRAME(tstate, code_objects_4d7c3e5b94e07c12c2a3407a85059299, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__3_valid->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__3_valid = cache_frame_frame_google$auth$credentials$$$function__3_valid;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__3_valid);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__3_valid) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_token);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_expired);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__3_valid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__3_valid->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__3_valid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__3_valid,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__3_valid == cache_frame_frame_google$auth$credentials$$$function__3_valid) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__3_valid);
    cache_frame_frame_google$auth$credentials$$$function__3_valid = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__3_valid);

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


static PyObject *impl_google$auth$credentials$$$function__4_token_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_expired = NULL;
PyObject *var_is_stale = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__4_token_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__4_token_state = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__4_token_state)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__4_token_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__4_token_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__4_token_state = MAKE_FUNCTION_FRAME(tstate, code_objects_76d9c32787858f92e9d5a7a5b13889a2, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__4_token_state->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__4_token_state = cache_frame_frame_google$auth$credentials$$$function__4_token_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__4_token_state);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__4_token_state) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_token);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
{
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_INVALID);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_expiry);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FRESH);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
tmp_called_instance_1 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__4_token_state->m_frame.f_lineno = 117;
tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_expiry);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_expired == NULL);
var_expired = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_expired);
tmp_truth_name_1 = CHECK_IF_TRUE(var_expired);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_INVALID);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_called_instance_2 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__4_token_state->m_frame.f_lineno = 121;
tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_utcnow);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_expiry);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_REFRESH_THRESHOLD);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_is_stale == NULL);
var_is_stale = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(var_is_stale);
tmp_truth_name_2 = CHECK_IF_TRUE(var_is_stale);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_STALE);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_FRESH);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__4_token_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__4_token_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__4_token_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__4_token_state,
    type_description_1,
    par_self,
    var_expired,
    var_is_stale
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__4_token_state == cache_frame_frame_google$auth$credentials$$$function__4_token_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__4_token_state);
    cache_frame_frame_google$auth$credentials$$$function__4_token_state = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__4_token_state);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_expired);
var_expired = NULL;
Py_XDECREF(var_is_stale);
var_is_stale = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_expired);
var_expired = NULL;
Py_XDECREF(var_is_stale);
var_is_stale = NULL;
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


static PyObject *impl_google$auth$credentials$$$function__5_quota_project_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__5_quota_project_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id = MAKE_FUNCTION_FRAME(tstate, code_objects_7975346258c99619236d7bd8a2acaa70, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__5_quota_project_id = cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__5_quota_project_id);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__5_quota_project_id) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__quota_project_id);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__5_quota_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__5_quota_project_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__5_quota_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__5_quota_project_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__5_quota_project_id == cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id);
    cache_frame_frame_google$auth$credentials$$$function__5_quota_project_id = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__5_quota_project_id);

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


static PyObject *impl_google$auth$credentials$$$function__6_universe_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__6_universe_domain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__6_universe_domain = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__6_universe_domain)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__6_universe_domain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__6_universe_domain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__6_universe_domain = MAKE_FUNCTION_FRAME(tstate, code_objects_3c227cf162c2929652e6f46952dda042, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__6_universe_domain->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__6_universe_domain = cache_frame_frame_google$auth$credentials$$$function__6_universe_domain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__6_universe_domain);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__6_universe_domain) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__universe_domain);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__6_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__6_universe_domain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__6_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__6_universe_domain,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__6_universe_domain == cache_frame_frame_google$auth$credentials$$$function__6_universe_domain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__6_universe_domain);
    cache_frame_frame_google$auth$credentials$$$function__6_universe_domain = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__6_universe_domain);

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


static PyObject *impl_google$auth$credentials$$$function__8_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__8_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__8_refresh = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__8_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__8_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__8_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__8_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_44006d3fe27cbbe9f97ab8059ec66b3a, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__8_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__8_refresh = cache_frame_frame_google$auth$credentials$$$function__8_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__8_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__8_refresh) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_52d1a11e9a01d0e16bd45cefd02337f7;
frame_frame_google$auth$credentials$$$function__8_refresh->m_frame.f_lineno = 162;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__8_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__8_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__8_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__8_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__8_refresh == cache_frame_frame_google$auth$credentials$$$function__8_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__8_refresh);
    cache_frame_frame_google$auth$credentials$$$function__8_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__8_refresh);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__10_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_token = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__10_apply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__10_apply = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__10_apply)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__10_apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__10_apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__10_apply = MAKE_FUNCTION_FRAME(tstate, code_objects_8d34acef76f1bbe097f2f1fbf5222472, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__10_apply->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__10_apply = cache_frame_frame_google$auth$credentials$$$function__10_apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__10_apply);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__10_apply) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_headers);
tmp_args_element_value_1 = par_headers;
CHECK_OBJECT(par_token);
tmp_args_element_value_2 = par_token;
frame_frame_google$auth$credentials$$$function__10_apply->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__apply,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_quota_project_id);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 188;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_quota_project_id);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_ass_subscribed_1 = par_headers;
tmp_ass_subscript_1 = mod_consts.const_str_digest_7268bededd951249c54d0102e9842716;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__10_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__10_apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__10_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__10_apply,
    type_description_1,
    par_self,
    par_headers,
    par_token
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__10_apply == cache_frame_frame_google$auth$credentials$$$function__10_apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__10_apply);
    cache_frame_frame_google$auth$credentials$$$function__10_apply = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__10_apply);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$credentials$$$function__11__blocking_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__11__blocking_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_c1cbe474764700b4a4f3da89f762ff13, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__11__blocking_refresh = cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__11__blocking_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__11__blocking_refresh) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_valid);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$credentials$$$function__11__blocking_refresh->m_frame.f_lineno = 193;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__11__blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__11__blocking_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__11__blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__11__blocking_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__11__blocking_refresh == cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh);
    cache_frame_frame_google$auth$credentials$$$function__11__blocking_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__11__blocking_refresh);

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


static PyObject *impl_google$auth$credentials$$$function__12__non_blocking_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
nuitka_bool var_use_blocking_refresh_fallback = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
nuitka_bool tmp_assign_source_1;
tmp_assign_source_1 = NUITKA_BOOL_FALSE;
var_use_blocking_refresh_fallback = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_41d610278bc02838ab16b83c1e45e7d8, module_google$auth$credentials, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh = cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_token_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 198;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_STALE);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 198;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oob";
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
nuitka_bool tmp_assign_source_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__refresh_worker);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh->m_frame.f_lineno = 199;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_operand_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_start_refresh,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_use_blocking_refresh_fallback = tmp_assign_source_2;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_token_state);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$auth$credentials$TokenState(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TokenState);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 203;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_INVALID);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 203;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
assert(var_use_blocking_refresh_fallback != NUITKA_BOOL_UNASSIGNED);
tmp_or_right_value_1 = var_use_blocking_refresh_fallback;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_3 = par_request;
frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh->m_frame.f_lineno = 204;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_refresh, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__refresh_worker);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh->m_frame.f_lineno = 208;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_clear_error);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh,
    type_description_1,
    par_self,
    par_request,
    (int)var_use_blocking_refresh_fallback
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh == cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh);
    cache_frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__12__non_blocking_refresh);

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
assert(var_use_blocking_refresh_fallback != NUITKA_BOOL_UNASSIGNED);
var_use_blocking_refresh_fallback = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

assert(var_use_blocking_refresh_fallback != NUITKA_BOOL_UNASSIGNED);
var_use_blocking_refresh_fallback = NUITKA_BOOL_UNASSIGNED;
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


static PyObject *impl_google$auth$credentials$$$function__13_before_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__13_before_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__13_before_request = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__13_before_request)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__13_before_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__13_before_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__13_before_request = MAKE_FUNCTION_FRAME(tstate, code_objects_fa6e8c6cbf6e7dca4141d89c67f081b5, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__13_before_request->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__13_before_request = cache_frame_frame_google$auth$credentials$$$function__13_before_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__13_before_request);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__13_before_request) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__use_non_blocking_refresh);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 227;
type_description_1 = "ooooo";
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
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$credentials$$$function__13_before_request->m_frame.f_lineno = 228;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__non_blocking_refresh, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_google$auth$credentials$$$function__13_before_request->m_frame.f_lineno = 230;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__blocking_refresh, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_3;
tmp_expression_value_2 = module_var_accessor_google$auth$credentials$metrics(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_add_metric_header);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_google$auth$credentials$$$function__13_before_request->m_frame.f_lineno = 232;
tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__metric_header_for_usage);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__13_before_request->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(par_headers);
tmp_args_element_value_5 = par_headers;
frame_frame_google$auth$credentials$$$function__13_before_request->m_frame.f_lineno = 233;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_apply, tmp_args_element_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__13_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__13_before_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__13_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__13_before_request,
    type_description_1,
    par_self,
    par_request,
    par_method,
    par_url,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__13_before_request == cache_frame_frame_google$auth$credentials$$$function__13_before_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__13_before_request);
    cache_frame_frame_google$auth$credentials$$$function__13_before_request = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__13_before_request);

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


static PyObject *impl_google$auth$credentials$$$function__14_with_non_blocking_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_ecdfe9903755755915f7d5ab8499fdc3, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh = cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__use_non_blocking_refresh, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh == cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh);
    cache_frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__14_with_non_blocking_refresh);

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


static PyObject *impl_google$auth$credentials$$$function__15_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__15_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_54983893b618a4454e8f6b25e96951e6, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__15_with_quota_project = cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__15_with_quota_project);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__15_with_quota_project) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_828c5852ba528fed4948ebb0b8bd12c9;
frame_frame_google$auth$credentials$$$function__15_with_quota_project->m_frame.f_lineno = 252;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 252;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__15_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__15_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__15_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__15_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__15_with_quota_project == cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project);
    cache_frame_frame_google$auth$credentials$$$function__15_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__15_with_quota_project);

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

}


static PyObject *impl_google$auth$credentials$$$function__16_with_quota_project_from_environment(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_quota_from_env = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment = MAKE_FUNCTION_FRAME(tstate, code_objects_5fd160b1d9aed97e4fdf6dfaacc0142c, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment = cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$credentials$environment_vars(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment->m_frame.f_lineno = 255;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_quota_from_env == NULL);
var_quota_from_env = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_quota_from_env);
tmp_truth_name_1 = CHECK_IF_TRUE(var_quota_from_env);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_quota_from_env);
tmp_args_element_value_2 = var_quota_from_env;
frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment->m_frame.f_lineno = 257;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_with_quota_project, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment,
    type_description_1,
    par_self,
    var_quota_from_env
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment == cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment);
    cache_frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__16_with_quota_project_from_environment);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_quota_from_env);
CHECK_OBJECT(var_quota_from_env);
Py_DECREF(var_quota_from_env);
var_quota_from_env = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_quota_from_env);
var_quota_from_env = NULL;
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


static PyObject *impl_google$auth$credentials$$$function__17_with_token_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token_uri = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__17_with_token_uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri = MAKE_FUNCTION_FRAME(tstate, code_objects_61175c63ebb07dd7df142364b44b10d0, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__17_with_token_uri = cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__17_with_token_uri);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__17_with_token_uri) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6e68a57b5a382fbf34ecdc64ff380d3c;
frame_frame_google$auth$credentials$$$function__17_with_token_uri->m_frame.f_lineno = 273;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 273;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__17_with_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__17_with_token_uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__17_with_token_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__17_with_token_uri,
    type_description_1,
    par_self,
    par_token_uri
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__17_with_token_uri == cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri);
    cache_frame_frame_google$auth$credentials$$$function__17_with_token_uri = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__17_with_token_uri);

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
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__18_with_universe_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_universe_domain = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__18_with_universe_domain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain = MAKE_FUNCTION_FRAME(tstate, code_objects_8105cce4bbff339b46bdd2e29558aef7, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__18_with_universe_domain = cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__18_with_universe_domain);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__18_with_universe_domain) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b0cd7b121d126c6b0442ce837dde4a9b;
frame_frame_google$auth$credentials$$$function__18_with_universe_domain->m_frame.f_lineno = 288;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 288;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__18_with_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__18_with_universe_domain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__18_with_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__18_with_universe_domain,
    type_description_1,
    par_self,
    par_universe_domain
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__18_with_universe_domain == cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain);
    cache_frame_frame_google$auth$credentials$$$function__18_with_universe_domain = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__18_with_universe_domain);

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
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__19__perform_refresh_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__19__perform_refresh_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token = MAKE_FUNCTION_FRAME(tstate, code_objects_0b50a99fd630c414194fe2ab08139c49, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__19__perform_refresh_token = cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__19__perform_refresh_token);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__19__perform_refresh_token) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c38accdfa4288ff5ef2c50f90af8fb91;
frame_frame_google$auth$credentials$$$function__19__perform_refresh_token->m_frame.f_lineno = 308;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 308;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__19__perform_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__19__perform_refresh_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__19__perform_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__19__perform_refresh_token,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__19__perform_refresh_token == cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token);
    cache_frame_frame_google$auth$credentials$$$function__19__perform_refresh_token = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__19__perform_refresh_token);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__20_with_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_trust_boundary = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__20_with_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_6a3e4dc56b4f6ebbc7a51a43aa240477, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__20_with_trust_boundary = cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__20_with_trust_boundary);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__20_with_trust_boundary) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2ac9e8aede07d3b5d01e9de0b710ccf0;
frame_frame_google$auth$credentials$$$function__20_with_trust_boundary->m_frame.f_lineno = 322;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 322;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__20_with_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__20_with_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__20_with_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__20_with_trust_boundary,
    type_description_1,
    par_self,
    par_trust_boundary
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__20_with_trust_boundary == cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary);
    cache_frame_frame_google$auth$credentials$$$function__20_with_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__20_with_trust_boundary);

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
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required = MAKE_FUNCTION_FRAME(tstate, code_objects_3294d37b477da40152b4e3bf4a0ad187, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required = cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_bool_from_env);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$credentials$environment_vars(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 336;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 336;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a21d0d193a566b277f5f7beb7fde4348);
frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required->m_frame.f_lineno = 335;
tmp_operand_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_universe_domain);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_google$auth$credentials$DEFAULT_UNIVERSE_DOMAIN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 341;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required->m_frame.f_lineno = 345;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__has_no_op_trust_boundary);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required == cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required);
    cache_frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required);

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


static PyObject *impl_google$auth$credentials$$$function__22__get_trust_boundary_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header = MAKE_FUNCTION_FRAME(tstate, code_objects_a8b20f86afca9fdf65d25416ecc4ba4f, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header = cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__trust_boundary);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header->m_frame.f_lineno = 349;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__has_no_op_trust_boundary);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 349;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = DICT_COPY(tstate, mod_consts.const_dict_1eb198a45580268165326254202b0032);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_11de163ccfc60673e79de6f84a7c55e5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__trust_boundary);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_encodedLocations;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
goto frame_return_exit_1;
}
branch_end_2:;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header == cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header);
    cache_frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__22__get_trust_boundary_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
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


static PyObject *impl_google$auth$credentials$$$function__23_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_token = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__23_apply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__23_apply = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__23_apply)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__23_apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__23_apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__23_apply = MAKE_FUNCTION_FRAME(tstate, code_objects_eb39e254db4f2a0b13becb94eda216c6, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__23_apply->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__23_apply = cache_frame_frame_google$auth$credentials$$$function__23_apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__23_apply);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__23_apply) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_google$auth$credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_1 = par_headers;
CHECK_OBJECT(par_token);
tmp_args_element_value_2 = par_token;
frame_frame_google$auth$credentials$$$function__23_apply->m_frame.f_lineno = 358;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$credentials$$$function__23_apply->m_frame.f_lineno = 359;
tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_trust_boundary_header);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 359;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__23_apply->m_frame.f_lineno = 359;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__23_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__23_apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__23_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__23_apply,
    type_description_1,
    par_self,
    par_headers,
    par_token,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__23_apply == cache_frame_frame_google$auth$credentials$$$function__23_apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__23_apply);
    cache_frame_frame_google$auth$credentials$$$function__23_apply = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__23_apply);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$credentials$$$function__24_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__24_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__24_refresh = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__24_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__24_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__24_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__24_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_32ae32e0e638791a1e913bad175da81e, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__24_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__24_refresh = cache_frame_frame_google$auth$credentials$$$function__24_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__24_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__24_refresh) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$credentials$$$function__24_refresh->m_frame.f_lineno = 367;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__perform_refresh_token, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oo";
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
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_google$auth$credentials$$$function__24_refresh->m_frame.f_lineno = 368;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__refresh_trust_boundary, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__24_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__24_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__24_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__24_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__24_refresh == cache_frame_frame_google$auth$credentials$$$function__24_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__24_refresh);
    cache_frame_frame_google$auth$credentials$$$function__24_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__24_refresh);

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


static PyObject *impl_google$auth$credentials$$$function__25__refresh_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_error = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_298e5bfdad5d55f443b0ce35f0f4acb3, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary = cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame.f_lineno = 381;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__is_trust_boundary_lookup_required);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame.f_lineno = 384;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__lookup_trust_boundary, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_1 = module_var_accessor_google$auth$credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_RefreshError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(var_error == NULL);
Py_INCREF(tmp_assign_source_1);
var_error = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__trust_boundary);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(var_error);
tmp_raise_type_input_1 = var_error;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 389;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_3;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_expression_value_3 = module_var_accessor_google$auth$credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_is_logging_enabled);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = module_var_accessor_google$auth$credentials$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 390;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame.f_lineno = 390;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 390;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_3 = module_var_accessor_google$auth$credentials$_LOGGER(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_3de7624e999e5302da8475db0d8c057f;
CHECK_OBJECT(var_error);
tmp_args_element_value_4 = var_error;
frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame.f_lineno = 391;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(var_error);
var_error = NULL;

goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error);
var_error = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 383;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame)) {
        frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_2;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary,
    type_description_1,
    par_self,
    par_request,
    var_error
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary == cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary);
    cache_frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__25__refresh_trust_boundary);

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


static PyObject *impl_google$auth$credentials$$$function__26__lookup_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var__client = NULL;
PyObject *var_url = NULL;
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_c6150d62dc23be6db14ec46280e5a985, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary = cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__client_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 410;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain__client,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__client);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var__client == NULL);
var__client = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 412;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__build_trust_boundary_lookup_url);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_url);
tmp_operand_value_1 = var_url;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 414;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c998e3c906bcbe33cf89a296b8760823_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 414;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(var_headers == NULL);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_headers);
tmp_args_element_value_1 = var_headers;
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 417;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__apply, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_headers);
tmp_dict_arg_value_1 = var_headers;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 418;
tmp_iterable_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain__get_trust_boundary_header);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(PyDict_Check(tmp_dict_arg_value_1));
if (HAS_ATTR_BOOL(tstate, tmp_iterable_value_1, const_str_plain_keys)){
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
} else {
    tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
}

CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var__client);
tmp_expression_value_1 = var__client;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__lookup_trust_boundary);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(var_url);
tmp_kw_call_arg_value_1_1 = var_url;
CHECK_OBJECT(var_headers);
tmp_kw_call_dict_value_0_1 = var_headers;
frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame.f_lineno = 419;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary,
    type_description_1,
    par_self,
    par_request,
    var__client,
    var_url,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary == cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary);
    cache_frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__26__lookup_trust_boundary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__client);
CHECK_OBJECT(var__client);
Py_DECREF(var__client);
var__client = NULL;
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__client);
var__client = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
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


static PyObject *impl_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url = MAKE_FUNCTION_FRAME(tstate, code_objects_3ac51caaecf012770b6e51204e0bd1e1, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url = cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_98a8f463750d57a1c2a073e52c60d579;
frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url->m_frame.f_lineno = 433;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 433;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url == cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url);
    cache_frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url);

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

}


static PyObject *impl_google$auth$credentials$$$function__28__has_no_op_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_a7a697857c2f1ce286cbc2bf6839967a, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary = cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__trust_boundary);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__trust_boundary);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary->m_frame.f_lineno = 443;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_encodedLocations_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_google$auth$credentials$NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 444;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary == cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary);
    cache_frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__28__has_no_op_trust_boundary);

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


static PyObject *impl_google$auth$credentials$$$function__31_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__31_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__31_refresh = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__31_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__31_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__31_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__31_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_224180bddd5ea1c9a56c02629457b15f, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__31_refresh->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__31_refresh = cache_frame_frame_google$auth$credentials$$$function__31_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__31_refresh);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__31_refresh) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__31_refresh->m_frame.f_lineno = 468;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_InvalidOperation,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a8848ac3f87f3045f347e32f876ebd87_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 468;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__31_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__31_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__31_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__31_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__31_refresh == cache_frame_frame_google$auth$credentials$$$function__31_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__31_refresh);
    cache_frame_frame_google$auth$credentials$$$function__31_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__31_refresh);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__32_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_token = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__32_apply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__32_apply = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__32_apply)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__32_apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__32_apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__32_apply = MAKE_FUNCTION_FRAME(tstate, code_objects_bd71b8833786082b9dd8e19bd3084ae0, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__32_apply->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__32_apply = cache_frame_frame_google$auth$credentials$$$function__32_apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__32_apply);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__32_apply) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_token);
tmp_cmp_expr_left_1 = par_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
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
tmp_called_instance_1 = module_var_accessor_google$auth$credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__32_apply->m_frame.f_lineno = 479;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e9fdc713c88b76dd9c0ad04abec47cf0_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 479;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__32_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__32_apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__32_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__32_apply,
    type_description_1,
    par_self,
    par_headers,
    par_token
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__32_apply == cache_frame_frame_google$auth$credentials$$$function__32_apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__32_apply);
    cache_frame_frame_google$auth$credentials$$$function__32_apply = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__32_apply);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$credentials$$$function__34___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__34___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__34___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__34___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__34___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__34___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__34___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8a7400578052a1b866974ed2a5f6a7bd, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__34___init__->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__34___init__ = cache_frame_frame_google$auth$credentials$$$function__34___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__34___init__);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__34___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$credentials$ReadOnlyScoped(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadOnlyScoped);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__34___init__->m_frame.f_lineno = 515;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oN";
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__scopes, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__default_scopes, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__34___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__34___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__34___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__34___init__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__34___init__ == cache_frame_frame_google$auth$credentials$$$function__34___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__34___init__);
    cache_frame_frame_google$auth$credentials$$$function__34___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__34___init__);

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


static PyObject *impl_google$auth$credentials$$$function__35_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__35_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__35_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__35_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__35_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__35_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__35_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_d66e644be45d7d4068e1470fa832413a, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__35_scopes->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__35_scopes = cache_frame_frame_google$auth$credentials$$$function__35_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__35_scopes);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__35_scopes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__scopes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__35_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__35_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__35_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__35_scopes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__35_scopes == cache_frame_frame_google$auth$credentials$$$function__35_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__35_scopes);
    cache_frame_frame_google$auth$credentials$$$function__35_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__35_scopes);

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


static PyObject *impl_google$auth$credentials$$$function__36_default_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__36_default_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__36_default_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__36_default_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__36_default_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__36_default_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__36_default_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_4e8f07776e54494bafa8a5ba3feb64e9, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__36_default_scopes->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__36_default_scopes = cache_frame_frame_google$auth$credentials$$$function__36_default_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__36_default_scopes);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__36_default_scopes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__default_scopes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__36_default_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__36_default_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__36_default_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__36_default_scopes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__36_default_scopes == cache_frame_frame_google$auth$credentials$$$function__36_default_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__36_default_scopes);
    cache_frame_frame_google$auth$credentials$$$function__36_default_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__36_default_scopes);

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


static PyObject *impl_google$auth$credentials$$$function__38_has_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scopes = python_pars[1];
PyObject *var_credential_scopes = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__38_has_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__38_has_scopes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__38_has_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__38_has_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__38_has_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__38_has_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_13dee4c9b136c585274fa7b79a2efd41, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__38_has_scopes->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__38_has_scopes = cache_frame_frame_google$auth$credentials$$$function__38_has_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__38_has_scopes);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__38_has_scopes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__scopes);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__scopes);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__default_scopes);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_credential_scopes == NULL);
var_credential_scopes = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_set_arg_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_set_arg_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_scopes);
tmp_set_arg_1 = par_scopes;
tmp_expression_value_4 = PySet_New(tmp_set_arg_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_issubset);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(var_credential_scopes);
tmp_or_left_value_1 = var_credential_scopes;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 0);
tmp_set_arg_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_set_arg_2 = tmp_or_left_value_1;
or_end_1:;
tmp_args_element_value_1 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 549;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials$$$function__38_has_scopes->m_frame.f_lineno = 549;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__38_has_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__38_has_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__38_has_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__38_has_scopes,
    type_description_1,
    par_self,
    par_scopes,
    var_credential_scopes
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__38_has_scopes == cache_frame_frame_google$auth$credentials$$$function__38_has_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__38_has_scopes);
    cache_frame_frame_google$auth$credentials$$$function__38_has_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__38_has_scopes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_credential_scopes);
CHECK_OBJECT(var_credential_scopes);
Py_DECREF(var_credential_scopes);
var_credential_scopes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_credential_scopes);
var_credential_scopes = NULL;
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
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$credentials$$$function__39_with_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scopes = python_pars[1];
PyObject *par_default_scopes = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__39_with_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__39_with_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__39_with_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__39_with_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__39_with_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__39_with_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_20e624e5e2cc6c0bc40127f5da4f7e0b, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__39_with_scopes->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__39_with_scopes = cache_frame_frame_google$auth$credentials$$$function__39_with_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__39_with_scopes);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__39_with_scopes) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a66fd548ffdfd9033d59ef365bcc8862;
frame_frame_google$auth$credentials$$$function__39_with_scopes->m_frame.f_lineno = 594;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 594;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__39_with_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__39_with_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__39_with_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__39_with_scopes,
    type_description_1,
    par_self,
    par_scopes,
    par_default_scopes
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__39_with_scopes == cache_frame_frame_google$auth$credentials$$$function__39_with_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__39_with_scopes);
    cache_frame_frame_google$auth$credentials$$$function__39_with_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__39_with_scopes);

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
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__40_with_scopes_if_required(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_credentials = python_pars[0];
PyObject *par_scopes = python_pars[1];
PyObject *par_default_scopes = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required = MAKE_FUNCTION_FRAME(tstate, code_objects_5cd71a5d55717165ec291f062c1e3481, module_google$auth$credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required = cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_credentials);
tmp_isinstance_inst_1 = par_credentials;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$credentials$Scoped(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Scoped);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_credentials);
tmp_expression_value_1 = par_credentials;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_requires_scopes);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_credentials);
tmp_expression_value_2 = par_credentials;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_with_scopes);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scopes);
tmp_kw_call_arg_value_0_1 = par_scopes;
CHECK_OBJECT(par_default_scopes);
tmp_kw_call_dict_value_0_1 = par_default_scopes;
frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required->m_frame.f_lineno = 620;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_default_scopes_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(par_credentials);
tmp_return_value = par_credentials;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required,
    type_description_1,
    par_credentials,
    par_scopes,
    par_default_scopes
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required == cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required);
    cache_frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__40_with_scopes_if_required);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$credentials$$$function__41_sign_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__41_sign_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_0502336b3fa8c79e2a28864faa0f18d7, module_google$auth$credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__41_sign_bytes = cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__41_sign_bytes);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__41_sign_bytes) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b984540a2a7c6da68fbc13fabf3a75cf;
frame_frame_google$auth$credentials$$$function__41_sign_bytes->m_frame.f_lineno = 640;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 640;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__41_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__41_sign_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__41_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__41_sign_bytes,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__41_sign_bytes == cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes);
    cache_frame_frame_google$auth$credentials$$$function__41_sign_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__41_sign_bytes);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$credentials$$$function__42_signer_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__42_signer_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__42_signer_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__42_signer_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__42_signer_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__42_signer_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__42_signer_email = MAKE_FUNCTION_FRAME(tstate, code_objects_4a7549f1ba0d84869df29510bb38728d, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__42_signer_email->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__42_signer_email = cache_frame_frame_google$auth$credentials$$$function__42_signer_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__42_signer_email);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__42_signer_email) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_8d244cae7be2b1839e4ea0e61d4c93f2;
frame_frame_google$auth$credentials$$$function__42_signer_email->m_frame.f_lineno = 647;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 647;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__42_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__42_signer_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__42_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__42_signer_email,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__42_signer_email == cache_frame_frame_google$auth$credentials$$$function__42_signer_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__42_signer_email);
    cache_frame_frame_google$auth$credentials$$$function__42_signer_email = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__42_signer_email);

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

}


static PyObject *impl_google$auth$credentials$$$function__43_signer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$function__43_signer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$credentials$$$function__43_signer = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$credentials$$$function__43_signer)) {
    Py_XDECREF(cache_frame_frame_google$auth$credentials$$$function__43_signer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$credentials$$$function__43_signer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$credentials$$$function__43_signer = MAKE_FUNCTION_FRAME(tstate, code_objects_3a289b4cbfed6aea1750d0fd74ce34ba, module_google$auth$credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$credentials$$$function__43_signer->m_type_description == NULL);
frame_frame_google$auth$credentials$$$function__43_signer = cache_frame_frame_google$auth$credentials$$$function__43_signer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$function__43_signer);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$function__43_signer) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0ae22dc4ac6e128016a20de8b642b83e;
frame_frame_google$auth$credentials$$$function__43_signer->m_frame.f_lineno = 654;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 654;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$function__43_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$function__43_signer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$function__43_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$function__43_signer,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$credentials$$$function__43_signer == cache_frame_frame_google$auth$credentials$$$function__43_signer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$credentials$$$function__43_signer);
    cache_frame_frame_google$auth$credentials$$$function__43_signer = NULL;
}

assertFrameObject(frame_frame_google$auth$credentials$$$function__43_signer);

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

}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__10_apply(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__10_apply,
        mod_consts.const_str_plain_apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6f4508542a08d7a30bcdecbbf90e816a,
#endif
        code_objects_8d34acef76f1bbe097f2f1fbf5222472,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_ba19c3cd29c0df3a28686cba8327ccba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__11__blocking_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__11__blocking_refresh,
        mod_consts.const_str_plain__blocking_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_041de61efe574950d03b3359c88cb60d,
#endif
        code_objects_c1cbe474764700b4a4f3da89f762ff13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__12__non_blocking_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__12__non_blocking_refresh,
        mod_consts.const_str_plain__non_blocking_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a29a6df8db1d45ce6da5f20a0aa24205,
#endif
        code_objects_41d610278bc02838ab16b83c1e45e7d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__13_before_request(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__13_before_request,
        mod_consts.const_str_plain_before_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_891c61566b05b90ece0b74c879d135a4,
#endif
        code_objects_fa6e8c6cbf6e7dca4141d89c67f081b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_245e1b0cd777c6429cbf02766be45675,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__14_with_non_blocking_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__14_with_non_blocking_refresh,
        mod_consts.const_str_plain_with_non_blocking_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b3d02a792b4af1b3ee802713ce2a23e5,
#endif
        code_objects_ecdfe9903755755915f7d5ab8499fdc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__15_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__15_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ed80400fc2af0d0e0860efce138486e,
#endif
        code_objects_54983893b618a4454e8f6b25e96951e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_46885ce12882e257d65aa250a753d86f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__16_with_quota_project_from_environment(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__16_with_quota_project_from_environment,
        mod_consts.const_str_plain_with_quota_project_from_environment,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4891c6f4ba10ad81d89f814ecd48ce9e,
#endif
        code_objects_5fd160b1d9aed97e4fdf6dfaacc0142c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__17_with_token_uri(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__17_with_token_uri,
        mod_consts.const_str_plain_with_token_uri,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cbf142a7b2f5c9da4fe290fc2822cc82,
#endif
        code_objects_61175c63ebb07dd7df142364b44b10d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_ea10c75697fed4f5e5a5c13d59f13b04,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__18_with_universe_domain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__18_with_universe_domain,
        mod_consts.const_str_plain_with_universe_domain,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a6ceb127c42f140be8db1a2a3063ebd,
#endif
        code_objects_8105cce4bbff339b46bdd2e29558aef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_2765c451b79651a6d9f93bac42b9eb39,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__19__perform_refresh_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__19__perform_refresh_token,
        mod_consts.const_str_plain__perform_refresh_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_17e77ca370a44363897a4c29d652ab7e,
#endif
        code_objects_0b50a99fd630c414194fe2ab08139c49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_71e61bf86599b3ab5873d8956d863be1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_6cdce4b04fcf9648aaeca8ad5a0a6e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__20_with_trust_boundary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__20_with_trust_boundary,
        mod_consts.const_str_plain_with_trust_boundary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d0bc6baec47f9a429986a617688b7fc,
#endif
        code_objects_6a3e4dc56b4f6ebbc7a51a43aa240477,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_4170a7443d5cfe3a42350f3898ea1e7b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required,
        mod_consts.const_str_plain__is_trust_boundary_lookup_required,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d1e52dfdfa0e5832ed896b3405e5fc6,
#endif
        code_objects_3294d37b477da40152b4e3bf4a0ad187,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_96db998a354401bf86afccfdc596f9ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__22__get_trust_boundary_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__22__get_trust_boundary_header,
        mod_consts.const_str_plain__get_trust_boundary_header,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_87883f772535b1f62e4698112f9ee10e,
#endif
        code_objects_a8b20f86afca9fdf65d25416ecc4ba4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__23_apply(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__23_apply,
        mod_consts.const_str_plain_apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5ef3806fa986726ad6ab543aa20f9996,
#endif
        code_objects_eb39e254db4f2a0b13becb94eda216c6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_8b01ad604d74b9f87ed6f34e08a19497,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__24_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__24_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e42f5cccce86b194326e5290acadc142,
#endif
        code_objects_32ae32e0e638791a1e913bad175da81e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_13c52199a14ae9d5fa6c8ae60267b1cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__25__refresh_trust_boundary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__25__refresh_trust_boundary,
        mod_consts.const_str_plain__refresh_trust_boundary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e86e8ff337108cd6c54c1ee1246efb4,
#endif
        code_objects_298e5bfdad5d55f443b0ce35f0f4acb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_ea79fd15cde68977eba1b23694929e47,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__26__lookup_trust_boundary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__26__lookup_trust_boundary,
        mod_consts.const_str_plain__lookup_trust_boundary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_71ff6b047a5754a1a6d76fe9534571b7,
#endif
        code_objects_c6150d62dc23be6db14ec46280e5a985,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_270903ebb76a581b3e9148b283795ce5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url,
        mod_consts.const_str_plain__build_trust_boundary_lookup_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_990485c2eccd0193bc0bd0e21d4e21b2,
#endif
        code_objects_3ac51caaecf012770b6e51204e0bd1e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_5440977fa55500e776d34a5682cc355b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__28__has_no_op_trust_boundary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__28__has_no_op_trust_boundary,
        mod_consts.const_str_plain__has_no_op_trust_boundary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e4bd815475b060ee1fb4d88bbe0cf7e,
#endif
        code_objects_a7a697857c2f1ce286cbc2bf6839967a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__29_expired(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_expired,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f8987edcfbac0669dbbfcc3a2437fcf8,
#endif
        code_objects_3dfa93d042f890fd8856b5df35aa329d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_f6300c2a7ce37be43c12f9eadb8e8111,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__2_expired(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__2_expired,
        mod_consts.const_str_plain_expired,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1fa53d1758421769756849164189513b,
#endif
        code_objects_17a0ac99aab401a9f47d31da0a923df3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_1964924f3f7184c2f4e2589f4e9c575c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__30_valid(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_valid,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d1fea1866e5ed29ab3f3d6bacc264798,
#endif
        code_objects_93c458e3076386b0a9138255796afe4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_5482a8dc2c0da94423864fc7395949e5,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__31_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__31_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4db09e9ecd1a95c93ed8d33396de001a,
#endif
        code_objects_224180bddd5ea1c9a56c02629457b15f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_994c3cf3525b66e84982460e7d73a1da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__32_apply(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__32_apply,
        mod_consts.const_str_plain_apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6bd1f0c3e886182987b9ebd801f2d0b0,
#endif
        code_objects_bd71b8833786082b9dd8e19bd3084ae0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_54ccfcbfbdd86e51985e6e7345dbd182,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__33_before_request(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_before_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_80d8d5e48ae66b131bf60f732e82907b,
#endif
        code_objects_3f1bec80608e51bdbad10aa9cc163d7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_edc5d329c2d8b99cc4789c125d6cef70,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__34___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__34___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6cffed32d01923f34a5f5edbf81b8e5e,
#endif
        code_objects_8a7400578052a1b866974ed2a5f6a7bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__35_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__35_scopes,
        mod_consts.const_str_plain_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_69015fd03b1c53d6b9ae2f34bc5d89cb,
#endif
        code_objects_d66e644be45d7d4068e1470fa832413a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_d65a2b909cc54984835077c3be324e2c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__36_default_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__36_default_scopes,
        mod_consts.const_str_plain_default_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2495e0a4bb69faede5973da988adefbd,
#endif
        code_objects_4e8f07776e54494bafa8a5ba3feb64e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_85301096a1fb2328c267b81d91cb5c86,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__37_requires_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_requires_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb40cb563bba1d9fc21ea80e94bf0e9a,
#endif
        code_objects_9e93289c90743ed35aeb5ed497467e5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_c3d44b057cf460b6b854bd7b025669d2,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__38_has_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__38_has_scopes,
        mod_consts.const_str_plain_has_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dac376886a00ee801cbaf5e48999ed6f,
#endif
        code_objects_13dee4c9b136c585274fa7b79a2efd41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_27c92bf84ad3f941ce70ddb58af3e909,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__39_with_scopes(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__39_with_scopes,
        mod_consts.const_str_plain_with_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c59943a6c16dd7d848f3c40cef9303db,
#endif
        code_objects_20e624e5e2cc6c0bc40127f5da4f7e0b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_cefc9e2480f39ad3a16dfd788ff0618b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__3_valid(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__3_valid,
        mod_consts.const_str_plain_valid,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_36b5d44e7da3554dbca13b1e6f329328,
#endif
        code_objects_4d7c3e5b94e07c12c2a3407a85059299,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_f95fd04b761ba5f8c270247ced378523,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__40_with_scopes_if_required(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__40_with_scopes_if_required,
        mod_consts.const_str_plain_with_scopes_if_required,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5cd71a5d55717165ec291f062c1e3481,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_45ce151fd7022937b80d0585c63a5f57,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__41_sign_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__41_sign_bytes,
        mod_consts.const_str_plain_sign_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3c71b2b195136a3e14a781da93348c26,
#endif
        code_objects_0502336b3fa8c79e2a28864faa0f18d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_31e697cc468341e8106c47eecb29cbc5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__42_signer_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__42_signer_email,
        mod_consts.const_str_plain_signer_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_645a375aaf7d57599950b8fabeba7c51,
#endif
        code_objects_4a7549f1ba0d84869df29510bb38728d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_12b6b8a0323845844cdc0bb1372f1a75,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__43_signer(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__43_signer,
        mod_consts.const_str_plain_signer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d5fd5614a34a238687932a4d49af7444,
#endif
        code_objects_3a289b4cbfed6aea1750d0fd74ce34ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_556e79d95b021c93f1c32e74c2ca489a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__4_token_state(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__4_token_state,
        mod_consts.const_str_plain_token_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43dc86c04d724e958dcdd60126c33645,
#endif
        code_objects_76d9c32787858f92e9d5a7a5b13889a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_353f32e3d8c317214dd56d56312397bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__5_quota_project_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__5_quota_project_id,
        mod_consts.const_str_plain_quota_project_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a28324d862893dac41f2238df175f94,
#endif
        code_objects_7975346258c99619236d7bd8a2acaa70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_03a055a7671dcc4e9113fb0688f447be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__6_universe_domain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__6_universe_domain,
        mod_consts.const_str_plain_universe_domain,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_152f10c1cfc52a7fc8cd5c6c8dc540a9,
#endif
        code_objects_3c227cf162c2929652e6f46952dda042,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_43823591dd33ccbd322a2c093beb9450,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__7_get_cred_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_cred_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182,
#endif
        code_objects_1dcf91a209471973711b12d8e79ae726,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_795c3b6acd0e751d55cb65c6f2ea363e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__8_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$credentials$$$function__8_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75,
#endif
        code_objects_44006d3fe27cbbe9f97ab8059ec66b3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_71e61bf86599b3ab5873d8956d863be1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$credentials$$$function__9__metric_header_for_usage(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__metric_header_for_usage,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a,
#endif
        code_objects_b6b096343a2aab45a3e087373b1369e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$credentials,
        mod_consts.const_str_digest_4d0148394ce0012d9b7207f98c4032ef,
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

static function_impl_code const function_table_google$auth$credentials[] = {
impl_google$auth$credentials$$$function__1___init__,
impl_google$auth$credentials$$$function__2_expired,
impl_google$auth$credentials$$$function__3_valid,
impl_google$auth$credentials$$$function__4_token_state,
impl_google$auth$credentials$$$function__5_quota_project_id,
impl_google$auth$credentials$$$function__6_universe_domain,
impl_google$auth$credentials$$$function__8_refresh,
impl_google$auth$credentials$$$function__10_apply,
impl_google$auth$credentials$$$function__11__blocking_refresh,
impl_google$auth$credentials$$$function__12__non_blocking_refresh,
impl_google$auth$credentials$$$function__13_before_request,
impl_google$auth$credentials$$$function__14_with_non_blocking_refresh,
impl_google$auth$credentials$$$function__15_with_quota_project,
impl_google$auth$credentials$$$function__16_with_quota_project_from_environment,
impl_google$auth$credentials$$$function__17_with_token_uri,
impl_google$auth$credentials$$$function__18_with_universe_domain,
impl_google$auth$credentials$$$function__19__perform_refresh_token,
impl_google$auth$credentials$$$function__20_with_trust_boundary,
impl_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required,
impl_google$auth$credentials$$$function__22__get_trust_boundary_header,
impl_google$auth$credentials$$$function__23_apply,
impl_google$auth$credentials$$$function__24_refresh,
impl_google$auth$credentials$$$function__25__refresh_trust_boundary,
impl_google$auth$credentials$$$function__26__lookup_trust_boundary,
impl_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url,
impl_google$auth$credentials$$$function__28__has_no_op_trust_boundary,
impl_google$auth$credentials$$$function__31_refresh,
impl_google$auth$credentials$$$function__32_apply,
impl_google$auth$credentials$$$function__34___init__,
impl_google$auth$credentials$$$function__35_scopes,
impl_google$auth$credentials$$$function__36_default_scopes,
impl_google$auth$credentials$$$function__38_has_scopes,
impl_google$auth$credentials$$$function__39_with_scopes,
impl_google$auth$credentials$$$function__40_with_scopes_if_required,
impl_google$auth$credentials$$$function__41_sign_bytes,
impl_google$auth$credentials$$$function__42_signer_email,
impl_google$auth$credentials$$$function__43_signer,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$credentials);
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
        module_google$auth$credentials,
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
        function_table_google$auth$credentials,
        sizeof(function_table_google$auth$credentials) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.credentials";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$credentials(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$credentials");

    // Store the module for future use.
    module_google$auth$credentials = module;

    moduledict_google$auth$credentials = MODULE_DICT(module_google$auth$credentials);

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
        PRINT_STRING("google$auth$credentials: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$credentials: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$credentials: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.credentials" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$credentials\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$credentials,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$credentials);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$credentials);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
struct Nuitka_CellObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
struct Nuitka_CellObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
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
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$credentials$$$class__1_Credentials_37 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__1_Credentials_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_google$auth$credentials$$$class__6_AnonymousCredentials_448 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_google$auth$credentials$$$class__8_Scoped_552 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__8_Scoped_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
PyObject *locals_google$auth$credentials$$$class__9_Signing_625 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__9_Signing_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
PyObject *locals_google$auth$credentials$$$class__10_TokenState_657 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$credentials$$$class__10_TokenState_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c01644de5eb1ba70ac502104e8181b75;
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$credentials = MAKE_MODULE_FRAME(code_objects_e58c8be5c4a630582d702b4f73d453e5, module_google$auth$credentials);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials);
assert(Py_REFCNT(frame_frame_google$auth$credentials) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$credentials$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$credentials$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_Enum,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Enum);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 20;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__helpers_str_plain_environment_vars_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 24;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__helpers);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_environment_vars);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 25;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 26;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_89dd279f9e5fd0656a49ae6d17bd2bec;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__BaseCredentials_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 27;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain__BaseCredentials,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__BaseCredentials);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__BaseCredentials, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_43931243ad2fc21968dbe1681afeeba4;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$credentials;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_RefreshThreadManager_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$credentials->m_frame.f_lineno = 28;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$credentials,
        mod_consts.const_str_plain_RefreshThreadManager,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_RefreshThreadManager);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_RefreshThreadManager, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c;
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_LIST_EMPTY(tstate, 0);
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_1 = module_var_accessor_google$auth$credentials$List(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_List);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_google$auth$credentials$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_LOCATIONS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_plain_0x0;
UPDATE_STRING_DICT0(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_OP_TRUST_BOUNDARY_ENCODED_LOCATIONS, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$credentials$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 34;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_66e1490e3bfd83366eddbd0e98398fad_tuple, 0)
);

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_20);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_google$auth$credentials$_BaseCredentials(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__BaseCredentials);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto try_except_handler_2;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_24;
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


exception_lineno = 37;

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
PyObject *tmp_assign_source_25;
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


exception_lineno = 37;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Credentials;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 37;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
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


exception_lineno = 37;

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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
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


exception_lineno = 37;

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


exception_lineno = 37;

    goto try_except_handler_2;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 37;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$credentials$$$class__1_Credentials_37 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_e4deca07a1c14a4199eedcceb6c931a7;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_37;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
frame_frame_google$auth$credentials$$$class__1_Credentials_2 = MAKE_CLASS_FRAME(tstate, code_objects_9e2e635a75d779a72168c2f5968cca96, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__1_Credentials_2);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__1_Credentials_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$credentials$$$function__2_expired(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 75;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_expired, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$credentials$$$function__3_valid(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 93;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_valid, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$credentials$$$function__4_token_state(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 105;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_token_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$auth$credentials$$$function__5_quota_project_id(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_quota_project_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_google$auth$credentials$$$function__6_universe_domain(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 132;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_universe_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__7_get_cred_info(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_get_cred_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = PyObject_GetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$credentials$$$function__8_refresh(tstate);

frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame.f_lineno = 148;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__9__metric_header_for_usage(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain__metric_header_for_usage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__10_apply(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__11__blocking_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain__blocking_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__12__non_blocking_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain__non_blocking_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__13_before_request(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_before_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__14_with_non_blocking_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain_with_non_blocking_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__1_Credentials_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__1_Credentials_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__1_Credentials_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_37f36ccc7cd065108115ad40b2b7fcf5_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

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


exception_lineno = 37;

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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__1_Credentials_37, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Credentials;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$auth$credentials$$$class__1_Credentials_37;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 37;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_28);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_27 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_google$auth$credentials$$$class__1_Credentials_37);
locals_google$auth$credentials$$$class__1_Credentials_37 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__1_Credentials_37);
locals_google$auth$credentials$$$class__1_Credentials_37 = NULL;
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
exception_lineno = 37;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_27);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto try_except_handler_5;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_CredentialsWithQuotaProject;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 239;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_5;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 239;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
}
branch_end_4:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_09800bca7f050c2f17e8de5c91133414;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_CredentialsWithQuotaProject;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_239;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3 = MAKE_CLASS_FRAME(tstate, code_objects_e003ca388271313ae1d3f788bedab6a9, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__15_with_quota_project(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__16_with_quota_project_from_environment(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain_with_quota_project_from_environment, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
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


exception_lineno = 239;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_CredentialsWithQuotaProject;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 239;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_36;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_35 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239);
locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239);
locals_google$auth$credentials$$$class__2_CredentialsWithQuotaProject_239 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 239;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialsWithQuotaProject, tmp_assign_source_35);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto try_except_handler_8;
}
tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_4, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_40;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_CredentialsWithTokenUri;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 261;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
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
PyObject *tmp_expression_value_18;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_11, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_8;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 261;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 261;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_42;
}
branch_end_7:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_1aa81c9eabcc0398d790ff7f84d2465e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_CredentialsWithTokenUri;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_261;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4 = MAKE_CLASS_FRAME(tstate, code_objects_1de817399c7fbfeac3d6234dc4dec385, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__17_with_token_uri(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, mod_consts.const_str_plain_with_token_uri, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__3_CredentialsWithTokenUri_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
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


exception_lineno = 261;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_CredentialsWithTokenUri;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 261;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_43 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261);
locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261);
locals_google$auth$credentials$$$class__3_CredentialsWithTokenUri_261 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 261;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialsWithTokenUri, tmp_assign_source_43);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_45;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;

    goto try_except_handler_11;
}
tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_20 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_5, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_48;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_CredentialsWithUniverseDomain;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 276;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_49;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_23 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_24;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_24, tmp_name_value_12, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_25;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_11;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 276;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 276;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
branch_end_10:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_19a531db29f1cda9ba3373f6ecc828c4;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_CredentialsWithUniverseDomain;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_276;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5 = MAKE_CLASS_FRAME(tstate, code_objects_328adac43d3845d76f0d09e85bc55759, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__18_with_universe_domain(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, mod_consts.const_str_plain_with_universe_domain, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_13;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
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


exception_lineno = 276;

    goto try_except_handler_13;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_CredentialsWithUniverseDomain;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 276;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_51 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276);
locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276);
locals_google$auth$credentials$$$class__4_CredentialsWithUniverseDomain_276 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 276;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialsWithUniverseDomain, tmp_assign_source_51);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_53;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;

    goto try_except_handler_14;
}
tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_26 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_6, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_56;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_CredentialsWithTrustBoundary;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 293;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_57;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_29 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_30;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_13, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_14;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 293;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 293;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_58;
}
branch_end_13:;
{
PyObject *tmp_assign_source_59;
outline_4_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_afb877e277ab3f37c6e33e85251784b3;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_CredentialsWithTrustBoundary;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_293;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6 = MAKE_CLASS_FRAME(tstate, code_objects_9e2f93969d09ebeb93cc191fc084620a, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6) == 2);

// Framed code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = PyObject_GetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_google$auth$credentials$$$function__19__perform_refresh_token(tstate);

frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6->m_frame.f_lineno = 296;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__perform_refresh_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__20_with_trust_boundary(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain_with_trust_boundary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__21__is_trust_boundary_lookup_required(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__is_trust_boundary_lookup_required, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__22__get_trust_boundary_header(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__get_trust_boundary_header, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_defaults_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);
tmp_closure_1[0] = outline_4_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__23_apply(tstate, tmp_defaults_2, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain_apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__24_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__25__refresh_trust_boundary(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__refresh_trust_boundary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__26__lookup_trust_boundary(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__lookup_trust_boundary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
tmp_called_instance_4 = PyObject_GetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}


tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$credentials$$$function__27__build_trust_boundary_lookup_url(tstate);

frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6->m_frame.f_lineno = 421;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__build_trust_boundary_lookup_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__28__has_no_op_trust_boundary(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain__has_no_op_trust_boundary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_2 = "c";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_16;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__trust_boundary_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
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


exception_lineno = 293;

    goto try_except_handler_16;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
branch_no_15:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_CredentialsWithTrustBoundary;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 293;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto try_except_handler_16;
}
assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
Nuitka_Cell_SET(outline_4_var___class__, tmp_assign_source_60);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
tmp_assign_source_59 = Nuitka_Cell_GET(outline_4_var___class__);
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293);
locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293);
locals_google$auth$credentials$$$class__5_CredentialsWithTrustBoundary_293 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 293;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_CredentialsWithTrustBoundary, tmp_assign_source_59);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
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
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_google$auth$credentials$Credentials(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;

    goto try_except_handler_17;
}
tmp_assign_source_61 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_62 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_32 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_7, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_64;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
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
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_AnonymousCredentials;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 448;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_65;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_14, tmp_default_value_6);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_17;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 448;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 448;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_66;
}
branch_end_16:;
{
PyObject *tmp_assign_source_67;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_google$auth$credentials$$$class__6_AnonymousCredentials_448 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_digest_0b0550a7be290e407a635d33c68e0e09;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_AnonymousCredentials;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_448;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7 = MAKE_CLASS_FRAME(tstate, code_objects_4cb3e1f265bf4e036525cea80d8ae85c, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7) == 2);

// Framed code:
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_9;
tmp_called_value_17 = PyObject_GetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}


tmp_args_element_value_9 = MAKE_FUNCTION_google$auth$credentials$$$function__29_expired(tstate);

frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7->m_frame.f_lineno = 455;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_expired, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_10;
tmp_called_value_18 = PyObject_GetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}


tmp_args_element_value_10 = MAKE_FUNCTION_google$auth$credentials$$$function__30_valid(tstate);

frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7->m_frame.f_lineno = 460;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_valid, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__31_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__32_apply(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__33_before_request(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain_before_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_2 = "o";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__6_AnonymousCredentials_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_19;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
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


exception_lineno = 448;

    goto try_except_handler_19;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
branch_no_18:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain_AnonymousCredentials;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_google$auth$credentials$$$class__6_AnonymousCredentials_448;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 448;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;

    goto try_except_handler_19;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_68;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_67 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_67);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448);
locals_google$auth$credentials$$$class__6_AnonymousCredentials_448 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__6_AnonymousCredentials_448);
locals_google$auth$credentials$$$class__6_AnonymousCredentials_448 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 448;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_AnonymousCredentials, tmp_assign_source_67);
}
goto try_end_7;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
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
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_69;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_38;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_38 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_assign_source_69 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
bool tmp_condition_result_25;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_25 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_70 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_70 == NULL) {
    tmp_assign_source_70 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_70);
}
assert(!(tmp_assign_source_70 == NULL));
goto condexpr_end_7;
condexpr_false_7:;
tmp_assign_source_70 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_70);
condexpr_end_7:;
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_70;
}
{
bool tmp_condition_result_26;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_7__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
branch_no_19:;
{
bool tmp_condition_result_27;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_condition_result_27 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_13;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_args_value_13 = mod_consts.const_tuple_str_plain_ReadOnlyScoped_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 485;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_71;
}
{
bool tmp_condition_result_28;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_28 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_15, tmp_default_value_7);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_13;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_13 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_13);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_20;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 485;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 485;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_20;
}
branch_no_21:;
goto branch_end_20;
branch_no_20:;
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_72;
}
branch_end_20:;
{
PyObject *tmp_assign_source_73;
outline_6_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_digest_feeff03b45469a784de8e79197a87290;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_plain_ReadOnlyScoped;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_int_pos_485;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8 = MAKE_CLASS_FRAME(tstate, code_objects_a5e8b507da4bc245125b30759d23cb2d, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__34___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_11;
tmp_called_value_21 = PyObject_GetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_property);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}


tmp_args_element_value_11 = MAKE_FUNCTION_google$auth$credentials$$$function__35_scopes(tstate);

frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8->m_frame.f_lineno = 519;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_12;
tmp_called_value_22 = PyObject_GetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}


tmp_args_element_value_12 = MAKE_FUNCTION_google$auth$credentials$$$function__36_default_scopes(tstate);

frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8->m_frame.f_lineno = 524;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_default_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_13;
tmp_called_instance_5 = PyObject_GetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}


tmp_args_element_value_13 = MAKE_FUNCTION_google$auth$credentials$$$function__37_requires_scopes(tstate);

frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8->m_frame.f_lineno = 529;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractproperty, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_requires_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_2 = "c";
    goto frame_exception_exit_8;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$credentials$$$function__38_has_scopes(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain_has_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_2 = "c";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__7_ReadOnlyScoped_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_22;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__scopes_str_plain__default_scopes_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain_ReadOnlyScoped;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 485;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;

    goto try_except_handler_22;
}
assert(Nuitka_Cell_GET(outline_6_var___class__) == NULL);
Nuitka_Cell_SET(outline_6_var___class__, tmp_assign_source_74);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_6_var___class__));
tmp_assign_source_73 = Nuitka_Cell_GET(outline_6_var___class__);
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485);
locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485);
locals_google$auth$credentials$$$class__7_ReadOnlyScoped_485 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 485;
goto try_except_handler_20;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadOnlyScoped, tmp_assign_source_73);
}
goto try_end_8;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_google$auth$credentials$ReadOnlyScoped(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadOnlyScoped);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 552;

    goto try_except_handler_23;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_7;
PyObject *tmp_type_arg_14;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
tmp_condition_result_29 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_8, 0);
if (tmp_type_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_14);
CHECK_OBJECT(tmp_type_arg_14);
Py_DECREF(tmp_type_arg_14);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
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
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
tmp_tuple_element_28 = mod_consts.const_str_plain_Scoped;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 552;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
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
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_16, tmp_default_value_8);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_15;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_15 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_15);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_23;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_23;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 552;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 552;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_23;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_80;
}
branch_end_22:;
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_google$auth$credentials$$$class__8_Scoped_552 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_digest_a1aabd1957b5d3aef9a8ac9d28ba6040;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_plain_Scoped;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_int_pos_552;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
frame_frame_google$auth$credentials$$$class__8_Scoped_9 = MAKE_CLASS_FRAME(tstate, code_objects_491c02d7813b8c54061e73f94d62fcf7, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__8_Scoped_9);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__8_Scoped_9) == 2);

// Framed code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_4;
tmp_called_instance_6 = PyObject_GetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 581;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_14 = MAKE_FUNCTION_google$auth$credentials$$$function__39_with_scopes(tstate, tmp_defaults_4);

frame_frame_google$auth$credentials$$$class__8_Scoped_9->m_frame.f_lineno = 581;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain_with_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__8_Scoped_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__8_Scoped_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__8_Scoped_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__8_Scoped_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__8_Scoped_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_25;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
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
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__8_Scoped_552, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
branch_no_24:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_30 = mod_consts.const_str_plain_Scoped;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_30);
tmp_tuple_element_30 = locals_google$auth$credentials$$$class__8_Scoped_552;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 552;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;

    goto try_except_handler_25;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_82;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_81 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_google$auth$credentials$$$class__8_Scoped_552);
locals_google$auth$credentials$$$class__8_Scoped_552 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__8_Scoped_552);
locals_google$auth$credentials$$$class__8_Scoped_552 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_24;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 552;
goto try_except_handler_23;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Scoped, tmp_assign_source_81);
}
goto try_end_9;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
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
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_83;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_83 = MAKE_FUNCTION_google$auth$credentials$$$function__40_with_scopes_if_required(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_with_scopes_if_required, tmp_assign_source_83);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_84;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_50;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_50 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_assign_source_84 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_84, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
bool tmp_condition_result_33;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_dict_arg_value_4 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_33 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_33 != false) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_dict_arg_value_5 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_85 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_85 == NULL) {
    tmp_assign_source_85 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_85);
}
assert(!(tmp_assign_source_85 == NULL));
goto condexpr_end_9;
condexpr_false_9:;
tmp_assign_source_85 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_85);
condexpr_end_9:;
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_85;
}
{
bool tmp_condition_result_34;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_6;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_9__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
branch_no_25:;
{
bool tmp_condition_result_35;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_condition_result_35 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_17;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_args_value_17 = mod_consts.const_tuple_str_plain_Signing_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 625;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_86;
}
{
bool tmp_condition_result_36;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_53 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_36 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_36 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_17, tmp_default_value_9);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_26;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 625;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 625;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_26;
}
branch_no_27:;
goto branch_end_26;
branch_no_26:;
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_87;
}
branch_end_26:;
{
PyObject *tmp_assign_source_88;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_google$auth$credentials$$$class__9_Signing_625 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_digest_93907ea435bfa672e7d21dcb4e468850;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_plain_Signing;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_int_pos_625;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
frame_frame_google$auth$credentials$$$class__9_Signing_10 = MAKE_CLASS_FRAME(tstate, code_objects_bdffab74d552c5c0319047fc91cb82fb, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__9_Signing_10);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__9_Signing_10) == 2);

// Framed code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_15;
tmp_called_instance_7 = PyObject_GetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_abc);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}


tmp_args_element_value_15 = MAKE_FUNCTION_google$auth$credentials$$$function__41_sign_bytes(tstate);

frame_frame_google$auth$credentials$$$class__9_Signing_10->m_frame.f_lineno = 628;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_sign_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_16;
tmp_called_instance_8 = PyObject_GetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_abc);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_8 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 642;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}


tmp_args_element_value_16 = MAKE_FUNCTION_google$auth$credentials$$$function__42_signer_email(tstate);

frame_frame_google$auth$credentials$$$class__9_Signing_10->m_frame.f_lineno = 642;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_abstractproperty, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_signer_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_17;
tmp_called_instance_9 = PyObject_GetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_abc);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_9 = module_var_accessor_google$auth$credentials$abc(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 649;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}


tmp_args_element_value_17 = MAKE_FUNCTION_google$auth$credentials$$$function__43_signer(tstate);

frame_frame_google$auth$credentials$$$class__9_Signing_10->m_frame.f_lineno = 649;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_abstractproperty, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain_signer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__9_Signing_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__9_Signing_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__9_Signing_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__9_Signing_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__9_Signing_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_28;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__9_Signing_625, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_27;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_27 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_32 = mod_consts.const_str_plain_Signing;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_google$auth$credentials$$$class__9_Signing_625;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 625;
tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;

    goto try_except_handler_28;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_89;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_88 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_88);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
Py_DECREF(locals_google$auth$credentials$$$class__9_Signing_625);
locals_google$auth$credentials$$$class__9_Signing_625 = NULL;
goto try_return_handler_27;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__9_Signing_625);
locals_google$auth$credentials$$$class__9_Signing_625 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_27;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 625;
goto try_except_handler_26;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Signing, tmp_assign_source_88);
}
goto try_end_10;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_90;
PyObject *tmp_tuple_element_33;
tmp_tuple_element_33 = module_var_accessor_google$auth$credentials$Enum(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Enum);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 657;

    goto try_except_handler_29;
}
tmp_assign_source_90 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_90, 0, tmp_tuple_element_33);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_91 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_8;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
tmp_condition_result_37 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_56 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_93;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_57;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
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
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_58;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
tmp_tuple_element_34 = mod_consts.const_str_plain_TokenState;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 657;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_94;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_59 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
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
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_60;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_60, tmp_name_value_18, tmp_default_value_10);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_61;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_61 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_61 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_61);
Py_DECREF(tmp_expression_value_61);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_35);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_29;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_29;
}
frame_frame_google$auth$credentials->m_frame.f_lineno = 657;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 657;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_29;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_95;
}
branch_end_28:;
{
PyObject *tmp_assign_source_96;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_google$auth$credentials$$$class__10_TokenState_657 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_str_digest_aa82344b4a89e470a33996674039b832;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_str_plain_TokenState;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_int_pos_657;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
frame_frame_google$auth$credentials$$$class__10_TokenState_11 = MAKE_CLASS_FRAME(tstate, code_objects_8700ecb537dfcd4e22403ba41b78f769, module_google$auth$credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$credentials$$$class__10_TokenState_11);
assert(Py_REFCNT(frame_frame_google$auth$credentials$$$class__10_TokenState_11) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain_FRESH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain_STALE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain_INVALID, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_2 = "o";
    goto frame_exception_exit_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials$$$class__10_TokenState_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials$$$class__10_TokenState_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials$$$class__10_TokenState_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$credentials$$$class__10_TokenState_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_google$auth$credentials$$$class__10_TokenState_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_31;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$credentials$$$class__10_TokenState_657, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
branch_no_30:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_29;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_29 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_36 = mod_consts.const_str_plain_TokenState;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = locals_google$auth$credentials$$$class__10_TokenState_657;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_google$auth$credentials->m_frame.f_lineno = 657;
tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;

    goto try_except_handler_31;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_97;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_96 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_96);
goto try_return_handler_31;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
Py_DECREF(locals_google$auth$credentials$$$class__10_TokenState_657);
locals_google$auth$credentials$$$class__10_TokenState_657 = NULL;
goto try_return_handler_30;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$credentials$$$class__10_TokenState_657);
locals_google$auth$credentials$$$class__10_TokenState_657 = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_30;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 657;
goto try_except_handler_29;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_google$auth$credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenState, tmp_assign_source_96);
}
goto try_end_11;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
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
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_11:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$credentials", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.credentials" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$credentials);
    return module_google$auth$credentials;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$credentials, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$credentials", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

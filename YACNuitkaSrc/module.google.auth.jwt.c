/* Generated code for Python module 'google$auth$jwt'
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



/* The "module_google$auth$jwt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$jwt;
PyDictObject *moduledict_google$auth$jwt;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_key_id;
PyObject *const_str_plain_update;
PyObject *const_dict_10d432d42df2c418b5d45ffb8061747b;
PyObject *const_str_plain_alg;
PyObject *const_str_plain_es;
PyObject *const_str_plain_EsSigner;
PyObject *const_str_plain_algorithm;
PyObject *const_dict_0a188a036260a3810dfac5e873b4fc46;
PyObject *const_str_plain_kid;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_unpadded_urlsafe_b64encode;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_bytes_chr_46;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_22cd38659bca9b2cdb275000bacaa7aa;
PyObject *const_str_plain_padded_urlsafe_b64decode;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_MalformedError;
PyObject *const_str_digest_f7a29d07b63bd84ba26a024f69b0b973;
PyObject *const_str_digest_57e2e645a92d0ae6278b1fcb26344e8e;
PyObject *const_str_plain_to_bytes;
PyObject *const_str_plain_count;
PyObject *const_tuple_bytes_chr_46_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_digest_ef7d825d98bd52772abe259f27d9eff2;
PyObject *const_str_plain__decode_jwt_segment;
PyObject *const_str_plain_Mapping;
PyObject *const_str_digest_5ff490769e4939e00584e6fe555779ae;
PyObject *const_str_digest_b4f0c3eae2514b2a66230d4d3e8656b1;
PyObject *const_str_digest_8bb56471835749d983475a92dcd22337;
PyObject *const_str_plain__unverified_decode;
PyObject *const_str_digest_5238fb3b57ebe43d78f807224c5cfadb;
PyObject *const_str_plain_datetime_to_secs;
PyObject *const_str_plain_utcnow;
PyObject *const_tuple_str_plain_iat_str_plain_exp_tuple;
PyObject *const_str_digest_ec413d3a5eaf72d6bb62ef2c57cb5d3f;
PyObject *const_str_plain_iat;
PyObject *const_str_plain_InvalidValue;
PyObject *const_str_digest_73e2390f6f0c2a25f56fc527319e5ff3;
PyObject *const_str_plain_exp;
PyObject *const_str_digest_527fe54cb21fe682640835f548ef6aaf;
PyObject *const_str_digest_119169f1810f53a85c16a93d252f3dbd;
PyObject *const_tuple_str_plain_alg_tuple;
PyObject *const_tuple_str_plain_kid_tuple;
PyObject *const_str_plain__ALGORITHM_TO_VERIFIER_CLASS;
PyObject *const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS;
PyObject *const_str_digest_7b82e43c632c781a97fd5e085662f8b3;
PyObject *const_str_digest_476c6a97940b771fc8326f7f8aa24875;
PyObject *const_str_digest_c2edf5cd61c7fd01c2a61628260941cd;
PyObject *const_str_plain_values;
PyObject *const_str_plain_crypt;
PyObject *const_str_plain_verify_signature;
PyObject *const_tuple_str_digest_597e62bff8283772ca2a9fc8792abaa0_tuple;
PyObject *const_str_plain__verify_iat_and_exp;
PyObject *const_tuple_str_plain_aud_tuple;
PyObject *const_str_digest_0dfadd413ee77429870f98fbbe8f2bef;
PyObject *const_str_digest_dcaaacab52afa99c94fbf63c4df8899c;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain__signer;
PyObject *const_str_plain__issuer;
PyObject *const_str_plain__subject;
PyObject *const_str_plain__audience;
PyObject *const_str_plain__token_lifetime;
PyObject *const_str_plain__quota_project_id;
PyObject *const_str_plain__additional_claims;
PyObject *const_str_digest_37deeba6f439e03782e4883f5d3e66cf;
PyObject *const_str_plain_subject;
PyObject *const_str_plain_client_email;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_issuer;
PyObject *const_str_digest_5bd7cf65e2f301ce401726104756aaa2;
PyObject *const_str_plain__service_account_info;
PyObject *const_str_plain_from_dict;
PyObject *const_dict_02578fdb846418814fa202b83fb5c934;
PyObject *const_str_plain__from_signer_and_info;
PyObject *const_str_digest_1d9d9b26cd0b68b0e0511a0d17ff0657;
PyObject *const_str_plain_from_filename;
PyObject *const_str_digest_7121436befb1ade7968840c1739eddc9;
PyObject *const_str_plain_signer_email;
PyObject *const_str_plain_signer;
PyObject *const_str_plain_audience;
PyObject *const_str_digest_42ed73a5daf19314bc5bcdd261b30512;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_deepcopy;
PyObject *const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple;
PyObject *const_str_digest_56855387da29c7ef1a6ded28685ff89e;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_timedelta;
PyObject *const_tuple_str_plain_seconds_tuple;
PyObject *const_str_plain_iss;
PyObject *const_str_plain_sub;
PyObject *const_str_plain_aud;
PyObject *const_str_digest_0b27d7470d9b65ef4fc9e7d687065629;
PyObject *const_str_plain__make_jwt;
PyObject *const_str_plain_token;
PyObject *const_str_plain_expiry;
PyObject *const_str_digest_70abf153b0c87cfb102440adc12ef52d;
PyObject *const_str_digest_41e59ed9534d6546e6c597bb6fe91c08;
PyObject *const_str_plain_OnDemandCredentials;
PyObject *const_str_plain__cache;
PyObject *const_str_plain_LRUCache;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_str_digest_f9c5d9d5436d75554f9b5b119bf41ede;
PyObject *const_str_digest_49022ed560c549a77afb5815fdec4a60;
PyObject *const_str_digest_7cb8869e253234c2df9a7986e6171b94;
PyObject *const_str_digest_01c161557bccfaf8dcf38738deb3ed9e;
PyObject *const_str_digest_331c2c5ef4883937fc15538bba700653;
PyObject *const_str_plain_maxsize;
PyObject *const_tuple_84deb651831fccebecb6ee42c5966e01_tuple;
PyObject *const_str_digest_ee2de9bf6375fed2f29a8350ec367b6d;
PyObject *const_str_digest_30a504b4a001a18fa0843a6592366d1d;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain__make_jwt_for_audience;
PyObject *const_str_digest_e9cf6a52c2b6fe767b4481b3007d851b;
PyObject *const_str_plain_RefreshError;
PyObject *const_tuple_str_digest_0a3471d50f4b8fc03e2efdcc051996ab_tuple;
PyObject *const_str_digest_c49a760ad76664fc41e88c9d2f13c805;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlsplit;
PyObject *const_str_plain_urlunsplit;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_netloc;
PyObject *const_str_plain__get_jwt_for_audience;
PyObject *const_str_plain_apply;
PyObject *const_tuple_str_plain_token_tuple;
PyObject *const_str_digest_884912dcc09adf6961dc7dd2be2ef4a7;
PyObject *const_str_digest_c31147e37901f02e4a7fbf1dd4eea0c2;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Mapping_tuple;
PyObject *const_str_plain_collections;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__cache_tuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain__service_account_info_tuple;
PyObject *const_tuple_str_plain_crypt_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
PyObject *const_str_plain_google;
PyObject *const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
PyObject *const_tuple_str_plain_es_tuple;
PyObject *const_int_pos_3600;
PyObject *const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS;
PyObject *const_int_pos_10;
PyObject *const_str_plain__DEFAULT_MAX_CACHE_SIZE;
PyObject *const_str_plain_RS256;
PyObject *const_str_plain_RSAVerifier;
PyObject *const_frozenset_6eca77a106d4d7727a0b1d306c40c05c;
PyObject *const_str_plain_EsVerifier;
PyObject *const_str_plain_ES256;
PyObject *const_str_plain_ES384;
PyObject *const_str_plain_decode_header;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_none_true_none_int_0_tuple;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_Signing;
PyObject *const_str_plain_CredentialsWithQuotaProject;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ff7ab06ae7531c603795c894817357d3;
PyObject *const_str_digest_0ff273d8ff860c64875490d0ad223000;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_319;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_digest_ea68e244f7a2343015e41deffd8e8155;
PyObject *const_str_plain_from_service_account_info;
PyObject *const_str_digest_385fd69348121e7e89560dc227484d21;
PyObject *const_str_plain_from_service_account_file;
PyObject *const_str_digest_fd078ae67f9dce058013aea5349559d5;
PyObject *const_str_plain_from_signing_credentials;
PyObject *const_str_digest_ba8c59f48a052d5aaf1c55605a16331d;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_str_plain_with_claims;
PyObject *const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_plain_with_quota_project;
PyObject *const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513;
PyObject *const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1;
PyObject *const_str_plain_refresh;
PyObject *const_str_digest_b8d96327bb876dc140fac3cfa41e9d75;
PyObject *const_str_plain_sign_bytes;
PyObject *const_str_digest_28c602ce6311178ae3445fd4d5291753;
PyObject *const_str_plain_property;
PyObject *const_str_digest_9f6780cc9cc369f8216839829b6eed5b;
PyObject *const_str_digest_2d28140646409296c1a41f5f2f1c82dd;
PyObject *const_str_plain_additional_claims;
PyObject *const_str_digest_acd2624aee3df778a883ffb18a116f71;
PyObject *const_tuple_b8095ada59ef9a662da813362f58864f_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_cee2a5a7ddb896a8d7c32f0ae5214f09;
PyObject *const_int_pos_592;
PyObject *const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d;
PyObject *const_str_digest_c458cbc97cad6954cd7c31920b26ab48;
PyObject *const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3;
PyObject *const_str_digest_5ec67ada53a9ff6548120c02f988cba5;
PyObject *const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_d9a0159ee386409d654743268f21c538;
PyObject *const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985;
PyObject *const_str_digest_3fe526209dbb356270cb75e9b181c349;
PyObject *const_str_plain_valid;
PyObject *const_str_digest_47d21d1385c22f1e9193d668bf2de747;
PyObject *const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df;
PyObject *const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a;
PyObject *const_str_digest_e762543aad737606f88f93df78eba4c4;
PyObject *const_str_plain_before_request;
PyObject *const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229;
PyObject *const_str_digest_1542da286df2601fc966d0cbe058b7ed;
PyObject *const_str_digest_89a7d43cd7f9a3496d46437e0399b739;
PyObject *const_str_digest_ef8debbabce071b55febaaac2c1d123f;
PyObject *const_tuple_3b75f26ec2e160770f26b022b8741237_tuple;
PyObject *const_str_digest_42a1620eb211dfe98dc723b67abc3288;
PyObject *const_str_digest_8ef6e38643b3577693e441d1fd32026d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_aafc5b7c16c188ff02d11042140da430_tuple;
PyObject *const_tuple_af99b23b3ea367013924751876994ca9_tuple;
PyObject *const_tuple_771f10b77798fef5ae741dcb007392f1_tuple;
PyObject *const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple;
PyObject *const_tuple_a3cf09b08aec1a9b71762ec9177d4e3f_tuple;
PyObject *const_tuple_2e7544fc6ceb6c9b60c6944e36e25d70_tuple;
PyObject *const_tuple_3cdd9849738844110d31e125b85d1c96_tuple;
PyObject *const_tuple_d77945e3f590e303c0a28125ab54ef3b_tuple;
PyObject *const_tuple_898af32850ae5011130ad175fc7655d2_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2e6dc016b7d4efdca5c379befb9affb6_tuple;
PyObject *const_tuple_21abc4b0a06716b52bfd7c7445eff5ba_tuple;
PyObject *const_tuple_str_plain_token_str_plain_header_str_underscore_tuple;
PyObject *const_tuple_086b063dbca5052a007089f1ee707fe7_tuple;
PyObject *const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple;
PyObject *const_tuple_0230d2628db400b22f286c097e4b281a_tuple;
PyObject *const_tuple_a38dac4a5970a359bbacc1a88e410bcc_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_credentials_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_2da75ca8a648f7a0767db507334a1127_tuple;
PyObject *const_tuple_d29dfb5f8cf771229a69949e195df277_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[249];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.jwt"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_id);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_dict_10d432d42df2c418b5d45ffb8061747b);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_alg);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_es);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_EsSigner);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_dict_0a188a036260a3810dfac5e873b4fc46);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_kid);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpadded_urlsafe_b64encode);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_46);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_22cd38659bca9b2cdb275000bacaa7aa);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_padded_urlsafe_b64decode);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7a29d07b63bd84ba26a024f69b0b973);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_57e2e645a92d0ae6278b1fcb26344e8e);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_46_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef7d825d98bd52772abe259f27d9eff2);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_jwt_segment);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ff490769e4939e00584e6fe555779ae);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4f0c3eae2514b2a66230d4d3e8656b1);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bb56471835749d983475a92dcd22337);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__unverified_decode);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_5238fb3b57ebe43d78f807224c5cfadb);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime_to_secs);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iat_str_plain_exp_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec413d3a5eaf72d6bb62ef2c57cb5d3f);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_iat);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_73e2390f6f0c2a25f56fc527319e5ff3);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_527fe54cb21fe682640835f548ef6aaf);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_119169f1810f53a85c16a93d252f3dbd);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alg_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kid_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b82e43c632c781a97fd5e085662f8b3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_476c6a97940b771fc8326f7f8aa24875);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2edf5cd61c7fd01c2a61628260941cd);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypt);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_signature);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_597e62bff8283772ca2a9fc8792abaa0_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__verify_iat_and_exp);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aud_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dfadd413ee77429870f98fbbe8f2bef);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcaaacab52afa99c94fbf63c4df8899c);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__signer);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__issuer);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__subject);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__audience);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_lifetime);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__additional_claims);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_37deeba6f439e03782e4883f5d3e66cf);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_email);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_issuer);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bd7cf65e2f301ce401726104756aaa2);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__service_account_info);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_dict);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_signer_and_info);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d9d9b26cd0b68b0e0511a0d17ff0657);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_filename);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_7121436befb1ade7968840c1739eddc9);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_42ed73a5daf19314bc5bcdd261b30512);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_56855387da29c7ef1a6ded28685ff89e);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_iss);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_aud);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b27d7470d9b65ef4fc9e7d687065629);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_jwt);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_expiry);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_70abf153b0c87cfb102440adc12ef52d);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_41e59ed9534d6546e6c597bb6fe91c08);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_OnDemandCredentials);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__cache);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_LRUCache);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9c5d9d5436d75554f9b5b119bf41ede);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_49022ed560c549a77afb5815fdec4a60);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb8869e253234c2df9a7986e6171b94);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_01c161557bccfaf8dcf38738deb3ed9e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_331c2c5ef4883937fc15538bba700653);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_84deb651831fccebecb6ee42c5966e01_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee2de9bf6375fed2f29a8350ec367b6d);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_30a504b4a001a18fa0843a6592366d1d);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_jwt_for_audience);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9cf6a52c2b6fe767b4481b3007d851b);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0a3471d50f4b8fc03e2efdcc051996ab_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_c49a760ad76664fc41e88c9d2f13c805);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsplit);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlunsplit);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_jwt_for_audience);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_884912dcc09adf6961dc7dd2be2ef4a7);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_c31147e37901f02e4a7fbf1dd4eea0c2);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cache_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__service_account_info_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypt_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_google);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_3600);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_RS256);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_frozenset_6eca77a106d4d7727a0b1d306c40c05c);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_EsVerifier);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_ES256);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_ES384);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode_header);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_none_int_0_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signing);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff7ab06ae7531c603795c894817357d3);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ff273d8ff860c64875490d0ad223000);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_319);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea68e244f7a2343015e41deffd8e8155);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_385fd69348121e7e89560dc227484d21);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_file);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd078ae67f9dce058013aea5349559d5);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_signing_credentials);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba8c59f48a052d5aaf1c55605a16331d);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_claims);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_additional_claims);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_acd2624aee3df778a883ffb18a116f71);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_b8095ada59ef9a662da813362f58864f_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_cee2a5a7ddb896a8d7c32f0ae5214f09);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_int_pos_592);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_c458cbc97cad6954cd7c31920b26ab48);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ec67ada53a9ff6548120c02f988cba5);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9a0159ee386409d654743268f21c538);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fe526209dbb356270cb75e9b181c349);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_valid);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_47d21d1385c22f1e9193d668bf2de747);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_e762543aad737606f88f93df78eba4c4);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_request);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_1542da286df2601fc966d0cbe058b7ed);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_89a7d43cd7f9a3496d46437e0399b739);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef8debbabce071b55febaaac2c1d123f);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_3b75f26ec2e160770f26b022b8741237_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_42a1620eb211dfe98dc723b67abc3288);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ef6e38643b3577693e441d1fd32026d);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_aafc5b7c16c188ff02d11042140da430_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_af99b23b3ea367013924751876994ca9_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_771f10b77798fef5ae741dcb007392f1_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_a3cf09b08aec1a9b71762ec9177d4e3f_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_2e7544fc6ceb6c9b60c6944e36e25d70_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_3cdd9849738844110d31e125b85d1c96_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_d77945e3f590e303c0a28125ab54ef3b_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_898af32850ae5011130ad175fc7655d2_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_2e6dc016b7d4efdca5c379befb9affb6_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_21abc4b0a06716b52bfd7c7445eff5ba_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_header_str_underscore_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_086b063dbca5052a007089f1ee707fe7_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_0230d2628db400b22f286c097e4b281a_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_a38dac4a5970a359bbacc1a88e410bcc_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_credentials_str_plain_kwargs_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_2da75ca8a648f7a0767db507334a1127_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_d29dfb5f8cf771229a69949e195df277_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
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
void checkModuleConstants_google$auth$jwt(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_id);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_dict_10d432d42df2c418b5d45ffb8061747b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_10d432d42df2c418b5d45ffb8061747b);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_alg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alg);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_es));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_es);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_EsSigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EsSigner);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_algorithm);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_dict_0a188a036260a3810dfac5e873b4fc46));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0a188a036260a3810dfac5e873b4fc46);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_kid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kid);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpadded_urlsafe_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unpadded_urlsafe_b64encode);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_46));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_46);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_22cd38659bca9b2cdb275000bacaa7aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22cd38659bca9b2cdb275000bacaa7aa);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_padded_urlsafe_b64decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padded_urlsafe_b64decode);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7a29d07b63bd84ba26a024f69b0b973));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7a29d07b63bd84ba26a024f69b0b973);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_57e2e645a92d0ae6278b1fcb26344e8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57e2e645a92d0ae6278b1fcb26344e8e);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_bytes);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_46_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef7d825d98bd52772abe259f27d9eff2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef7d825d98bd52772abe259f27d9eff2);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_jwt_segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_jwt_segment);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ff490769e4939e00584e6fe555779ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ff490769e4939e00584e6fe555779ae);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4f0c3eae2514b2a66230d4d3e8656b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4f0c3eae2514b2a66230d4d3e8656b1);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bb56471835749d983475a92dcd22337));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bb56471835749d983475a92dcd22337);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__unverified_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unverified_decode);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_5238fb3b57ebe43d78f807224c5cfadb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5238fb3b57ebe43d78f807224c5cfadb);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime_to_secs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime_to_secs);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iat_str_plain_exp_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_iat_str_plain_exp_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec413d3a5eaf72d6bb62ef2c57cb5d3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec413d3a5eaf72d6bb62ef2c57cb5d3f);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_iat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iat);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_73e2390f6f0c2a25f56fc527319e5ff3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73e2390f6f0c2a25f56fc527319e5ff3);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_527fe54cb21fe682640835f548ef6aaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_527fe54cb21fe682640835f548ef6aaf);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_119169f1810f53a85c16a93d252f3dbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_119169f1810f53a85c16a93d252f3dbd);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_alg_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kid_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kid_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b82e43c632c781a97fd5e085662f8b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b82e43c632c781a97fd5e085662f8b3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_476c6a97940b771fc8326f7f8aa24875));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_476c6a97940b771fc8326f7f8aa24875);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2edf5cd61c7fd01c2a61628260941cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2edf5cd61c7fd01c2a61628260941cd);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypt);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify_signature);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_597e62bff8283772ca2a9fc8792abaa0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_597e62bff8283772ca2a9fc8792abaa0_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__verify_iat_and_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__verify_iat_and_exp);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aud_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_aud_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dfadd413ee77429870f98fbbe8f2bef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0dfadd413ee77429870f98fbbe8f2bef);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcaaacab52afa99c94fbf63c4df8899c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcaaacab52afa99c94fbf63c4df8899c);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__signer);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__issuer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__issuer);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__subject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subject);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__audience);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_lifetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_lifetime);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quota_project_id);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__additional_claims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__additional_claims);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_37deeba6f439e03782e4883f5d3e66cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37deeba6f439e03782e4883f5d3e66cf);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_email);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_issuer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issuer);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bd7cf65e2f301ce401726104756aaa2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bd7cf65e2f301ce401726104756aaa2);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__service_account_info);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_dict);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934));
CHECK_OBJECT_DEEP(mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_signer_and_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_signer_and_info);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d9d9b26cd0b68b0e0511a0d17ff0657));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d9d9b26cd0b68b0e0511a0d17ff0657);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_filename);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_7121436befb1ade7968840c1739eddc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7121436befb1ade7968840c1739eddc9);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer_email);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_42ed73a5daf19314bc5bcdd261b30512));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42ed73a5daf19314bc5bcdd261b30512);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_56855387da29c7ef1a6ded28685ff89e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56855387da29c7ef1a6ded28685ff89e);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_iss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iss);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_aud));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aud);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b27d7470d9b65ef4fc9e7d687065629));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b27d7470d9b65ef4fc9e7d687065629);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_jwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_jwt);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expiry);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_70abf153b0c87cfb102440adc12ef52d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70abf153b0c87cfb102440adc12ef52d);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_41e59ed9534d6546e6c597bb6fe91c08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41e59ed9534d6546e6c597bb6fe91c08);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_OnDemandCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OnDemandCredentials);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cache);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_LRUCache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LRUCache);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9c5d9d5436d75554f9b5b119bf41ede));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9c5d9d5436d75554f9b5b119bf41ede);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_49022ed560c549a77afb5815fdec4a60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_49022ed560c549a77afb5815fdec4a60);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb8869e253234c2df9a7986e6171b94));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb8869e253234c2df9a7986e6171b94);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_01c161557bccfaf8dcf38738deb3ed9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01c161557bccfaf8dcf38738deb3ed9e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_331c2c5ef4883937fc15538bba700653));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_331c2c5ef4883937fc15538bba700653);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxsize);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_84deb651831fccebecb6ee42c5966e01_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_84deb651831fccebecb6ee42c5966e01_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee2de9bf6375fed2f29a8350ec367b6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee2de9bf6375fed2f29a8350ec367b6d);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_30a504b4a001a18fa0843a6592366d1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30a504b4a001a18fa0843a6592366d1d);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_jwt_for_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_jwt_for_audience);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9cf6a52c2b6fe767b4481b3007d851b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9cf6a52c2b6fe767b4481b3007d851b);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0a3471d50f4b8fc03e2efdcc051996ab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0a3471d50f4b8fc03e2efdcc051996ab_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_c49a760ad76664fc41e88c9d2f13c805));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c49a760ad76664fc41e88c9d2f13c805);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsplit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlsplit);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlunsplit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlunsplit);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_jwt_for_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_jwt_for_audience);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_token_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_884912dcc09adf6961dc7dd2be2ef4a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_884912dcc09adf6961dc7dd2be2ef4a7);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_c31147e37901f02e4a7fbf1dd4eea0c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c31147e37901f02e4a7fbf1dd4eea0c2);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Mapping_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cache_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__service_account_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__service_account_info_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_crypt_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_es_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_3600));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3600);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_RS256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RS256);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RSAVerifier);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_frozenset_6eca77a106d4d7727a0b1d306c40c05c));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_6eca77a106d4d7727a0b1d306c40c05c);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_EsVerifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EsVerifier);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_ES256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ES256);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_ES384));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ES384);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode_header);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_none_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_true_none_int_0_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signing);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithQuotaProject);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff7ab06ae7531c603795c894817357d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff7ab06ae7531c603795c894817357d3);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ff273d8ff860c64875490d0ad223000));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ff273d8ff860c64875490d0ad223000);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_319));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_319);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea68e244f7a2343015e41deffd8e8155));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea68e244f7a2343015e41deffd8e8155);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_service_account_info);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_385fd69348121e7e89560dc227484d21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_385fd69348121e7e89560dc227484d21);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_service_account_file);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd078ae67f9dce058013aea5349559d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd078ae67f9dce058013aea5349559d5);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_signing_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_signing_credentials);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba8c59f48a052d5aaf1c55605a16331d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba8c59f48a052d5aaf1c55605a16331d);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_claims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_claims);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_quota_project);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign_bytes);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_additional_claims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_additional_claims);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_acd2624aee3df778a883ffb18a116f71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acd2624aee3df778a883ffb18a116f71);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_b8095ada59ef9a662da813362f58864f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b8095ada59ef9a662da813362f58864f_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_cee2a5a7ddb896a8d7c32f0ae5214f09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cee2a5a7ddb896a8d7c32f0ae5214f09);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_int_pos_592));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_592);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_c458cbc97cad6954cd7c31920b26ab48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c458cbc97cad6954cd7c31920b26ab48);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ec67ada53a9ff6548120c02f988cba5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ec67ada53a9ff6548120c02f988cba5);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9a0159ee386409d654743268f21c538));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9a0159ee386409d654743268f21c538);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fe526209dbb356270cb75e9b181c349));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fe526209dbb356270cb75e9b181c349);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_valid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_valid);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_47d21d1385c22f1e9193d668bf2de747));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47d21d1385c22f1e9193d668bf2de747);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_e762543aad737606f88f93df78eba4c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e762543aad737606f88f93df78eba4c4);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_request);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_1542da286df2601fc966d0cbe058b7ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1542da286df2601fc966d0cbe058b7ed);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_89a7d43cd7f9a3496d46437e0399b739));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89a7d43cd7f9a3496d46437e0399b739);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef8debbabce071b55febaaac2c1d123f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef8debbabce071b55febaaac2c1d123f);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_3b75f26ec2e160770f26b022b8741237_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3b75f26ec2e160770f26b022b8741237_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_42a1620eb211dfe98dc723b67abc3288));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42a1620eb211dfe98dc723b67abc3288);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ef6e38643b3577693e441d1fd32026d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ef6e38643b3577693e441d1fd32026d);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_aafc5b7c16c188ff02d11042140da430_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aafc5b7c16c188ff02d11042140da430_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_af99b23b3ea367013924751876994ca9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_af99b23b3ea367013924751876994ca9_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_771f10b77798fef5ae741dcb007392f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_771f10b77798fef5ae741dcb007392f1_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_a3cf09b08aec1a9b71762ec9177d4e3f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a3cf09b08aec1a9b71762ec9177d4e3f_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_2e7544fc6ceb6c9b60c6944e36e25d70_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2e7544fc6ceb6c9b60c6944e36e25d70_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_3cdd9849738844110d31e125b85d1c96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3cdd9849738844110d31e125b85d1c96_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_d77945e3f590e303c0a28125ab54ef3b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d77945e3f590e303c0a28125ab54ef3b_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_898af32850ae5011130ad175fc7655d2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_898af32850ae5011130ad175fc7655d2_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_2e6dc016b7d4efdca5c379befb9affb6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2e6dc016b7d4efdca5c379befb9affb6_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_21abc4b0a06716b52bfd7c7445eff5ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21abc4b0a06716b52bfd7c7445eff5ba_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_header_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_token_str_plain_header_str_underscore_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_086b063dbca5052a007089f1ee707fe7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_086b063dbca5052a007089f1ee707fe7_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_0230d2628db400b22f286c097e4b281a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0230d2628db400b22f286c097e4b281a_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_a38dac4a5970a359bbacc1a88e410bcc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a38dac4a5970a359bbacc1a88e410bcc_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_credentials_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_credentials_str_plain_kwargs_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_2da75ca8a648f7a0767db507334a1127_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2da75ca8a648f7a0767db507334a1127_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_d29dfb5f8cf771229a69949e195df277_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d29dfb5f8cf771229a69949e195df277_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_google$auth$jwt$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$OnDemandCredentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_OnDemandCredentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OnDemandCredentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OnDemandCredentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OnDemandCredentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OnDemandCredentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_OnDemandCredentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_OnDemandCredentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OnDemandCredentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_ALGORITHM_TO_VERIFIER_CLASS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_CRYPTOGRAPHY_BASED_ALGORITHMS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_DEFAULT_MAX_CACHE_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_DEFAULT_TOKEN_LIFETIME_SECS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__cache);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_decode_jwt_segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_jwt_segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decode_jwt_segment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decode_jwt_segment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decode_jwt_segment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decode_jwt_segment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_jwt_segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_jwt_segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_jwt_segment);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_service_account_info(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__service_account_info);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__service_account_info);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__service_account_info, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__service_account_info);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__service_account_info, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__service_account_info);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__service_account_info);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__service_account_info);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_unverified_decode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__unverified_decode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unverified_decode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unverified_decode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unverified_decode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unverified_decode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__unverified_decode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__unverified_decode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unverified_decode);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$_verify_iat_and_exp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_iat_and_exp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__verify_iat_and_exp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__verify_iat_and_exp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__verify_iat_and_exp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__verify_iat_and_exp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_iat_and_exp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_iat_and_exp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_iat_and_exp);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$crypt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_crypt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_crypt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_crypt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_crypt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_crypt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_crypt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_crypt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_crypt);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$encode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_encode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_encode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_encode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$es(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$google(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_google);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_google, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_google);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_google, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$jwt$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$jwt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$jwt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$jwt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b7ba44530122eace22e61184564f88f2;
static PyCodeObject *code_objects_85178ff261f3f2d1f94198f211f7b8d2;
static PyCodeObject *code_objects_fb8378cce349f3d091ea4412875e31af;
static PyCodeObject *code_objects_078dc1c144aa714df6ef9344ad96e0b9;
static PyCodeObject *code_objects_a2336484c5fe4119815df9dd657ad800;
static PyCodeObject *code_objects_e96e3e22a4e629e638cca873b6858c7b;
static PyCodeObject *code_objects_8ef58fc6ab94332e30f04cb3053412a0;
static PyCodeObject *code_objects_2428d69c028788ff8c3bd5befe73c5f2;
static PyCodeObject *code_objects_7bfb9b8bb0cb33a42cc2865d244da553;
static PyCodeObject *code_objects_b29a4c151aa3fe9506cff5f3f73da6e7;
static PyCodeObject *code_objects_51eea6050e9f68a1ff86382e128fc208;
static PyCodeObject *code_objects_22b3abff46272ee1fcea2d7bfdb0ad53;
static PyCodeObject *code_objects_e9419fee959197cdacd81e6715ffda16;
static PyCodeObject *code_objects_f6c12bbcf3de09a3a0e95fba48ce3b1d;
static PyCodeObject *code_objects_b93b7afbf6e35ff6779ac9b4ba5d7085;
static PyCodeObject *code_objects_42f51f054e9506999ffcc240d7cfc826;
static PyCodeObject *code_objects_519eb6728159cf39510f03e584d03d25;
static PyCodeObject *code_objects_53906f1a372d0008a9cb6bc7f347c7c1;
static PyCodeObject *code_objects_954536c2b7b61487fc706182b8ebd249;
static PyCodeObject *code_objects_f4701cbaa71bbf734445466cea43c452;
static PyCodeObject *code_objects_a47185d13fc804f83689a2064bd26e8e;
static PyCodeObject *code_objects_91b3885c96b5664536f2e79dd9c1e6ed;
static PyCodeObject *code_objects_1cb86b652e45f8f0b0a5247e1992e00f;
static PyCodeObject *code_objects_39beb691296fd88f427e4788da56395a;
static PyCodeObject *code_objects_55f1eea8806f131ac1ab375efb435f5a;
static PyCodeObject *code_objects_7b5c4fd314cc743039e9388ef2912b2b;
static PyCodeObject *code_objects_de6ef0170087cdd03381a6ff84421444;
static PyCodeObject *code_objects_7f4ba1f749ba970f4a946f38bf1a2b9b;
static PyCodeObject *code_objects_2d06038aba5fc8f41851e14206333e01;
static PyCodeObject *code_objects_23612047653659f51d9d845827278b27;
static PyCodeObject *code_objects_c7941926ace2308e5dbbbf30f710365c;
static PyCodeObject *code_objects_70d451d282dfe75283901610e87d4b88;
static PyCodeObject *code_objects_1bc1ecadd010620a5672b847b4ffbac2;
static PyCodeObject *code_objects_467b752490e19d003ea87ce9cfb9f1ba;
static PyCodeObject *code_objects_d3bac492e690ce10f7bf1fe6f3402674;
static PyCodeObject *code_objects_7762d1f49a8e945431baebe92f231f27;
static PyCodeObject *code_objects_5eda032b705b68d5f4508e400cbec875;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_42a1620eb211dfe98dc723b67abc3288); CHECK_OBJECT(module_filename_obj);
code_objects_b7ba44530122eace22e61184564f88f2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8ef6e38643b3577693e441d1fd32026d, mod_consts.const_str_digest_8ef6e38643b3577693e441d1fd32026d, NULL, NULL, 0, 0, 0);
code_objects_85178ff261f3f2d1f94198f211f7b8d2 = MAKE_CODE_OBJECT(module_filename_obj, 320, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fb8378cce349f3d091ea4412875e31af = MAKE_CODE_OBJECT(module_filename_obj, 593, 0, mod_consts.const_str_plain_OnDemandCredentials, mod_consts.const_str_plain_OnDemandCredentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_078dc1c144aa714df6ef9344ad96e0b9 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_aafc5b7c16c188ff02d11042140da430_tuple, NULL, 8, 0, 0);
code_objects_a2336484c5fe4119815df9dd657ad800 = MAKE_CODE_OBJECT(module_filename_obj, 612, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d, mod_consts.const_tuple_af99b23b3ea367013924751876994ca9_tuple, NULL, 8, 0, 0);
code_objects_e96e3e22a4e629e638cca873b6858c7b = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__decode_jwt_segment, mod_consts.const_str_plain__decode_jwt_segment, mod_consts.const_tuple_771f10b77798fef5ae741dcb007392f1_tuple, NULL, 1, 0, 0);
code_objects_8ef58fc6ab94332e30f04cb3053412a0 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__from_signer_and_info, mod_consts.const_str_digest_ea68e244f7a2343015e41deffd8e8155, mod_consts.const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple, NULL, 3, 0, 0);
code_objects_2428d69c028788ff8c3bd5befe73c5f2 = MAKE_CODE_OBJECT(module_filename_obj, 651, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__from_signer_and_info, mod_consts.const_str_digest_c458cbc97cad6954cd7c31920b26ab48, mod_consts.const_tuple_5f3e7f7f2f9d6c7d6d9bcf9afdd297fe_tuple, NULL, 3, 0, 0);
code_objects_7bfb9b8bb0cb33a42cc2865d244da553 = MAKE_CODE_OBJECT(module_filename_obj, 807, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_jwt_for_audience, mod_consts.const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a, mod_consts.const_tuple_a3cf09b08aec1a9b71762ec9177d4e3f_tuple, NULL, 2, 0, 0);
code_objects_b29a4c151aa3fe9506cff5f3f73da6e7 = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_jwt, mod_consts.const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1, mod_consts.const_tuple_2e7544fc6ceb6c9b60c6944e36e25d70_tuple, NULL, 1, 0, 0);
code_objects_51eea6050e9f68a1ff86382e128fc208 = MAKE_CODE_OBJECT(module_filename_obj, 780, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_jwt_for_audience, mod_consts.const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df, mod_consts.const_tuple_3cdd9849738844110d31e125b85d1c96_tuple, NULL, 2, 0, 0);
code_objects_22b3abff46272ee1fcea2d7bfdb0ad53 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__unverified_decode, mod_consts.const_str_plain__unverified_decode, mod_consts.const_tuple_d77945e3f590e303c0a28125ab54ef3b_tuple, NULL, 1, 0, 0);
code_objects_e9419fee959197cdacd81e6715ffda16 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__verify_iat_and_exp, mod_consts.const_str_plain__verify_iat_and_exp, mod_consts.const_tuple_898af32850ae5011130ad175fc7655d2_tuple, NULL, 2, 0, 0);
code_objects_f6c12bbcf3de09a3a0e95fba48ce3b1d = MAKE_CODE_OBJECT(module_filename_obj, 587, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_additional_claims, mod_consts.const_str_digest_acd2624aee3df778a883ffb18a116f71, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b93b7afbf6e35ff6779ac9b4ba5d7085 = MAKE_CODE_OBJECT(module_filename_obj, 844, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_before_request, mod_consts.const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229, mod_consts.const_tuple_2e6dc016b7d4efdca5c379befb9affb6_tuple, NULL, 5, 0, 0);
code_objects_42f51f054e9506999ffcc240d7cfc826 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decode, mod_consts.const_str_plain_decode, mod_consts.const_tuple_21abc4b0a06716b52bfd7c7445eff5ba_tuple, NULL, 5, 0, 0);
code_objects_519eb6728159cf39510f03e584d03d25 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decode_header, mod_consts.const_str_plain_decode_header, mod_consts.const_tuple_str_plain_token_str_plain_header_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_53906f1a372d0008a9cb6bc7f347c7c1 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_encode, mod_consts.const_str_plain_encode, mod_consts.const_tuple_086b063dbca5052a007089f1ee707fe7_tuple, NULL, 4, 0, 0);
code_objects_954536c2b7b61487fc706182b8ebd249 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_service_account_file, mod_consts.const_str_digest_fd078ae67f9dce058013aea5349559d5, mod_consts.const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple, NULL, 2, 0, 0);
code_objects_f4701cbaa71bbf734445466cea43c452 = MAKE_CODE_OBJECT(module_filename_obj, 689, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_service_account_file, mod_consts.const_str_digest_5ec67ada53a9ff6548120c02f988cba5, mod_consts.const_tuple_dd2b6aa40be0077e52145db648f81fc8_tuple, NULL, 2, 0, 0);
code_objects_a47185d13fc804f83689a2064bd26e8e = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_service_account_info, mod_consts.const_str_digest_385fd69348121e7e89560dc227484d21, mod_consts.const_tuple_0230d2628db400b22f286c097e4b281a_tuple, NULL, 2, 0, 0);
code_objects_91b3885c96b5664536f2e79dd9c1e6ed = MAKE_CODE_OBJECT(module_filename_obj, 671, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_service_account_info, mod_consts.const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3, mod_consts.const_tuple_0230d2628db400b22f286c097e4b281a_tuple, NULL, 2, 0, 0);
code_objects_1cb86b652e45f8f0b0a5247e1992e00f = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_signing_credentials, mod_consts.const_str_digest_ba8c59f48a052d5aaf1c55605a16331d, mod_consts.const_tuple_a38dac4a5970a359bbacc1a88e410bcc_tuple, NULL, 3, 0, 0);
code_objects_39beb691296fd88f427e4788da56395a = MAKE_CODE_OBJECT(module_filename_obj, 706, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_signing_credentials, mod_consts.const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18, mod_consts.const_tuple_str_plain_cls_str_plain_credentials_str_plain_kwargs_tuple, NULL, 2, 0, 0);
code_objects_55f1eea8806f131ac1ab375efb435f5a = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_7b5c4fd314cc743039e9388ef2912b2b = MAKE_CODE_OBJECT(module_filename_obj, 828, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_e762543aad737606f88f93df78eba4c4, mod_consts.const_tuple_str_plain_self_str_plain_request_tuple, NULL, 2, 0, 0);
code_objects_de6ef0170087cdd03381a6ff84421444 = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_bytes, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_7f4ba1f749ba970f4a946f38bf1a2b9b = MAKE_CODE_OBJECT(module_filename_obj, 866, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_bytes, mod_consts.const_str_digest_1542da286df2601fc966d0cbe058b7ed, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_2d06038aba5fc8f41851e14206333e01 = MAKE_CODE_OBJECT(module_filename_obj, 583, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_23612047653659f51d9d845827278b27 = MAKE_CODE_OBJECT(module_filename_obj, 876, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer, mod_consts.const_str_digest_ef8debbabce071b55febaaac2c1d123f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c7941926ace2308e5dbbbf30f710365c = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer_email, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_70d451d282dfe75283901610e87d4b88 = MAKE_CODE_OBJECT(module_filename_obj, 871, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer_email, mod_consts.const_str_digest_89a7d43cd7f9a3496d46437e0399b739, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1bc1ecadd010620a5672b847b4ffbac2 = MAKE_CODE_OBJECT(module_filename_obj, 772, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_valid, mod_consts.const_str_digest_47d21d1385c22f1e9193d668bf2de747, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_467b752490e19d003ea87ce9cfb9f1ba = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_claims, mod_consts.const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf, mod_consts.const_tuple_2da75ca8a648f7a0767db507334a1127_tuple, NULL, 5, 0, 0);
code_objects_d3bac492e690ce10f7bf1fe6f3402674 = MAKE_CODE_OBJECT(module_filename_obj, 733, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_claims, mod_consts.const_str_digest_d9a0159ee386409d654743268f21c538, mod_consts.const_tuple_d29dfb5f8cf771229a69949e195df277_tuple, NULL, 4, 0, 0);
code_objects_7762d1f49a8e945431baebe92f231f27 = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple, NULL, 2, 0, 0);
code_objects_5eda032b705b68d5f4508e400cbec875 = MAKE_CODE_OBJECT(module_filename_obj, 761, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__10_from_service_account_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__11_from_signing_credentials(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__12_with_claims(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__13_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__14__make_jwt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__15_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__16_sign_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__17_signer_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__18_signer(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__19_additional_claims(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__1_encode(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__20___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__21__from_signer_and_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__22_from_service_account_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__23_from_service_account_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__24_from_signing_credentials(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__25_with_claims(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__26_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__27_valid(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__28__make_jwt_for_audience(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__29__get_jwt_for_audience(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__2__decode_jwt_segment(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__30_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__31_before_request(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__32_sign_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__33_signer_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__34_signer(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__3__unverified_decode(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__4_decode_header(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__5__verify_iat_and_exp(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__6_decode(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__7___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__8__from_signer_and_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__9_from_service_account_info(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$jwt$$$function__1_encode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_signer = python_pars[0];
PyObject *par_payload = python_pars[1];
PyObject *par_header = python_pars[2];
PyObject *par_key_id = python_pars[3];
PyObject *var_segments = NULL;
PyObject *var_signing_input = NULL;
PyObject *var_signature = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__1_encode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__1_encode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_header);
tmp_cmp_expr_left_1 = par_header;
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
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = par_header;
    assert(old != NULL);
    par_header = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__1_encode)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__1_encode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__1_encode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__1_encode = MAKE_FUNCTION_FRAME(tstate, code_objects_53906f1a372d0008a9cb6bc7f347c7c1, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__1_encode->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__1_encode = cache_frame_frame_google$auth$jwt$$$function__1_encode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__1_encode);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__1_encode) == 2);

// Framed code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_key_id);
tmp_cmp_expr_left_2 = par_key_id;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_signer);
tmp_expression_value_1 = par_signer;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_key_id);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_key_id;
    assert(old != NULL);
    par_key_id = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_call_arg_element_1;
CHECK_OBJECT(par_header);
tmp_expression_value_2 = par_header;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = DICT_COPY(tstate, mod_consts.const_dict_10d432d42df2c418b5d45ffb8061747b);
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 95;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_call_arg_element_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_arg_element_1);
Py_DECREF(tmp_call_arg_element_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_alg;
CHECK_OBJECT(par_header);
tmp_cmp_expr_right_3 = par_header;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_4 = module_var_accessor_google$auth$jwt$es(tstate);
if (unlikely(tmp_cmp_expr_left_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_signer);
tmp_isinstance_inst_1 = par_signer;
tmp_expression_value_3 = module_var_accessor_google$auth$jwt$es(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_EsSigner);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_header);
tmp_expression_value_4 = par_header;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_alg;
CHECK_OBJECT(par_signer);
tmp_expression_value_5 = par_signer;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_algorithm);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 99;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_header);
tmp_expression_value_6 = par_header;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_2 = DICT_COPY(tstate, mod_consts.const_dict_0a188a036260a3810dfac5e873b4fc46);
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 101;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_call_arg_element_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_4:;
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_key_id);
tmp_cmp_expr_left_5 = par_key_id;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_key_id);
tmp_ass_subvalue_1 = par_key_id;
CHECK_OBJECT(par_header);
tmp_ass_subscribed_1 = par_header;
tmp_ass_subscript_1 = mod_consts.const_str_plain_kid;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_7 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_unpadded_urlsafe_b64encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_header);
tmp_args_element_value_3 = par_header;
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 107;
tmp_expression_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_3);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 107;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 107;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
tmp_expression_value_9 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_unpadded_urlsafe_b64encode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
tmp_called_instance_2 = module_var_accessor_google$auth$jwt$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
CHECK_OBJECT(par_payload);
tmp_args_element_value_5 = par_payload;
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 108;
tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_5);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 108;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 108;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
assert(var_segments == NULL);
var_segments = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = mod_consts.const_bytes_chr_46;
CHECK_OBJECT(var_segments);
tmp_iterable_value_1 = var_segments;
tmp_assign_source_4 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_signing_input == NULL);
var_signing_input = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_signer);
tmp_called_instance_3 = par_signer;
CHECK_OBJECT(var_signing_input);
tmp_args_element_value_6 = var_signing_input;
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 112;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_sign, tmp_args_element_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_signature == NULL);
var_signature = tmp_assign_source_5;
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_segments);
tmp_list_arg_value_1 = var_segments;
tmp_called_instance_4 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signature);
tmp_args_element_value_7 = var_signature;
frame_frame_google$auth$jwt$$$function__1_encode->m_frame.f_lineno = 113;
tmp_item_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_unpadded_urlsafe_b64encode, tmp_args_element_value_7);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_bytes_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_bytes_arg_value_2 = mod_consts.const_bytes_chr_46;
CHECK_OBJECT(var_segments);
tmp_iterable_value_2 = var_segments;
tmp_return_value = BYTES_JOIN(tstate, tmp_bytes_arg_value_2, tmp_iterable_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__1_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__1_encode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__1_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__1_encode,
    type_description_1,
    par_signer,
    par_payload,
    par_header,
    par_key_id,
    var_segments,
    var_signing_input,
    var_signature
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__1_encode == cache_frame_frame_google$auth$jwt$$$function__1_encode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__1_encode);
    cache_frame_frame_google$auth$jwt$$$function__1_encode = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__1_encode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_header);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
par_header = NULL;
CHECK_OBJECT(par_key_id);
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);
par_key_id = NULL;
CHECK_OBJECT(var_segments);
CHECK_OBJECT(var_segments);
Py_DECREF(var_segments);
var_segments = NULL;
CHECK_OBJECT(var_signing_input);
CHECK_OBJECT(var_signing_input);
Py_DECREF(var_signing_input);
var_signing_input = NULL;
CHECK_OBJECT(var_signature);
CHECK_OBJECT(var_signature);
Py_DECREF(var_signature);
var_signature = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_header);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
par_header = NULL;
Py_XDECREF(par_key_id);
par_key_id = NULL;
Py_XDECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_signing_input);
var_signing_input = NULL;
Py_XDECREF(var_signature);
var_signature = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__2__decode_jwt_segment(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_encoded_section = python_pars[0];
PyObject *var_section_bytes = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment = MAKE_FUNCTION_FRAME(tstate, code_objects_e96e3e22a4e629e638cca873b6858c7b, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment = cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_encoded_section);
tmp_args_element_value_1 = par_encoded_section;
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = 120;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_padded_urlsafe_b64decode, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_section_bytes == NULL);
var_section_bytes = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$json(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_loads);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_section_bytes);
tmp_expression_value_2 = var_section_bytes;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 122;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = 122;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 122;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = 122;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_2);
var_caught_exc = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_3 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_f7a29d07b63bd84ba26a024f69b0b973;
CHECK_OBJECT(var_section_bytes);
tmp_kw_call_arg_value_1_1 = var_section_bytes;
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 125;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = 124;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 127;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 121;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame)) {
        frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment,
    type_description_1,
    par_encoded_section,
    var_section_bytes,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment == cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment);
    cache_frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__2__decode_jwt_segment);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_section_bytes);
CHECK_OBJECT(var_section_bytes);
Py_DECREF(var_section_bytes);
var_section_bytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_section_bytes);
var_section_bytes = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_encoded_section);
Py_DECREF(par_encoded_section);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_encoded_section);
Py_DECREF(par_encoded_section);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__3__unverified_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
PyObject *var_encoded_header = NULL;
PyObject *var_encoded_payload = NULL;
PyObject *var_signature = NULL;
PyObject *var_signed_section = NULL;
PyObject *var_header = NULL;
PyObject *var_payload = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__3__unverified_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_22b3abff46272ee1fcea2d7bfdb0ad53, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__3__unverified_decode = cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__3__unverified_decode);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__3__unverified_decode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 143;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_bytes, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_token;
    assert(old != NULL);
    par_token = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_token);
tmp_expression_value_1 = par_token;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_count);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 145;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_chr_46_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_2 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_ef7d825d98bd52772abe259f27d9eff2;
CHECK_OBJECT(par_token);
tmp_kw_call_arg_value_1_1 = par_token;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 147;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 147;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 146;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_token);
tmp_expression_value_3 = par_token;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 150;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_bytes_chr_46_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_encoded_header == NULL);
Py_INCREF(tmp_assign_source_6);
var_encoded_header = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_encoded_payload == NULL);
Py_INCREF(tmp_assign_source_7);
var_encoded_payload = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
assert(var_signature == NULL);
Py_INCREF(tmp_assign_source_8);
var_signature = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_encoded_header);
tmp_add_expr_left_2 = var_encoded_header;
tmp_add_expr_right_2 = mod_consts.const_bytes_chr_46;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encoded_payload);
tmp_add_expr_right_1 = var_encoded_payload;
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_signed_section == NULL);
var_signed_section = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signature);
tmp_args_element_value_3 = var_signature;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 152;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_padded_urlsafe_b64decode, tmp_args_element_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_signature;
    assert(old != NULL);
    var_signature = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_google$auth$jwt$_decode_jwt_segment(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decode_jwt_segment);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encoded_header);
tmp_args_element_value_4 = var_encoded_header;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 155;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_header == NULL);
var_header = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_google$auth$jwt$_decode_jwt_segment(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decode_jwt_segment);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encoded_payload);
tmp_args_element_value_5 = var_encoded_payload;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 156;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload == NULL);
var_payload = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_header);
tmp_isinstance_inst_1 = var_header;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$jwt$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_4 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_5ff490769e4939e00584e6fe555779ae;
CHECK_OBJECT(var_encoded_header);
tmp_kw_call_arg_value_1_2 = var_encoded_header;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 160;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 159;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 159;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_payload);
tmp_isinstance_inst_2 = var_payload;
tmp_isinstance_cls_2 = module_var_accessor_google$auth$jwt$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
tmp_expression_value_5 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_b4f0c3eae2514b2a66230d4d3e8656b1;
CHECK_OBJECT(var_encoded_payload);
tmp_kw_call_arg_value_1_3 = var_encoded_payload;
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 165;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 165;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame.f_lineno = 164;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 164;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__3__unverified_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__3__unverified_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__3__unverified_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__3__unverified_decode,
    type_description_1,
    par_token,
    var_encoded_header,
    var_encoded_payload,
    var_signature,
    var_signed_section,
    var_header,
    var_payload
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__3__unverified_decode == cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode);
    cache_frame_frame_google$auth$jwt$$$function__3__unverified_decode = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__3__unverified_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_header);
tmp_tuple_element_1 = var_header;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_payload);
tmp_tuple_element_1 = var_payload;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_signed_section);
tmp_tuple_element_1 = var_signed_section;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_signature);
tmp_tuple_element_1 = var_signature;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_token);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
par_token = NULL;
CHECK_OBJECT(var_encoded_header);
CHECK_OBJECT(var_encoded_header);
Py_DECREF(var_encoded_header);
var_encoded_header = NULL;
CHECK_OBJECT(var_encoded_payload);
CHECK_OBJECT(var_encoded_payload);
Py_DECREF(var_encoded_payload);
var_encoded_payload = NULL;
CHECK_OBJECT(var_signature);
CHECK_OBJECT(var_signature);
Py_DECREF(var_signature);
var_signature = NULL;
CHECK_OBJECT(var_signed_section);
CHECK_OBJECT(var_signed_section);
Py_DECREF(var_signed_section);
var_signed_section = NULL;
CHECK_OBJECT(var_header);
CHECK_OBJECT(var_header);
Py_DECREF(var_header);
var_header = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_token);
par_token = NULL;
Py_XDECREF(var_encoded_header);
var_encoded_header = NULL;
Py_XDECREF(var_encoded_payload);
var_encoded_payload = NULL;
Py_XDECREF(var_signature);
var_signature = NULL;
Py_XDECREF(var_signed_section);
var_signed_section = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
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


static PyObject *impl_google$auth$jwt$$$function__4_decode_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
PyObject *var_header = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__4_decode_header;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__4_decode_header = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__4_decode_header)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__4_decode_header);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__4_decode_header == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__4_decode_header = MAKE_FUNCTION_FRAME(tstate, code_objects_519eb6728159cf39510f03e584d03d25, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__4_decode_header->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__4_decode_header = cache_frame_frame_google$auth$jwt$$$function__4_decode_header;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__4_decode_header);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__4_decode_header) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$jwt$_unverified_decode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unverified_decode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_google$auth$jwt$$$function__4_decode_header->m_frame.f_lineno = 184;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__4_decode_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__4_decode_header->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__4_decode_header, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__4_decode_header,
    type_description_1,
    par_token,
    var_header,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__4_decode_header == cache_frame_frame_google$auth$jwt$$$function__4_decode_header) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__4_decode_header);
    cache_frame_frame_google$auth$jwt$$$function__4_decode_header = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__4_decode_header);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_header == NULL);
Py_INCREF(tmp_assign_source_6);
var_header = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_7);
var__ = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_8;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_9;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

CHECK_OBJECT(var_header);
tmp_return_value = var_header;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_header);
CHECK_OBJECT(var_header);
Py_DECREF(var_header);
var_header = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__5__verify_iat_and_exp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_payload = python_pars[0];
PyObject *par_clock_skew_in_seconds = python_pars[1];
PyObject *var_now = NULL;
PyObject *var_key = NULL;
PyObject *var_iat = NULL;
PyObject *var_earliest = NULL;
PyObject *var_exp = NULL;
PyObject *var_latest = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp = MAKE_FUNCTION_FRAME(tstate, code_objects_e9419fee959197cdacd81e6715ffda16, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp = cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_datetime_to_secs);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 201;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 201;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_now == NULL);
var_now = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_iat_str_plain_exp_tuple;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
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
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 204;
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_4;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_1 = var_key;
CHECK_OBJECT(par_payload);
tmp_cmp_expr_right_1 = par_payload;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_2 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_ec413d3a5eaf72d6bb62ef2c57cb5d3f;
CHECK_OBJECT(var_key);
tmp_kw_call_arg_value_1_1 = var_key;
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 207;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 206;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooo";
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
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_payload);
tmp_expression_value_3 = par_payload;
tmp_subscript_value_1 = mod_consts.const_str_plain_iat;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_iat == NULL);
var_iat = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_iat);
tmp_sub_expr_left_1 = var_iat;
CHECK_OBJECT(par_clock_skew_in_seconds);
tmp_sub_expr_right_1 = par_clock_skew_in_seconds;
tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_earliest == NULL);
var_earliest = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_now);
tmp_cmp_expr_left_2 = var_now;
CHECK_OBJECT(var_earliest);
tmp_cmp_expr_right_2 = var_earliest;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_expression_value_4 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_73e2390f6f0c2a25f56fc527319e5ff3;
CHECK_OBJECT(var_now);
tmp_kw_call_arg_value_1_2 = var_now;
CHECK_OBJECT(var_iat);
tmp_kw_call_arg_value_2_1 = var_iat;
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 217;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 216;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 216;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_payload);
tmp_expression_value_5 = par_payload;
tmp_subscript_value_2 = mod_consts.const_str_plain_exp;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_exp == NULL);
var_exp = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_exp);
tmp_add_expr_left_1 = var_exp;
CHECK_OBJECT(par_clock_skew_in_seconds);
tmp_add_expr_right_1 = par_clock_skew_in_seconds;
tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_latest == NULL);
var_latest = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_latest);
tmp_cmp_expr_left_3 = var_latest;
CHECK_OBJECT(var_now);
tmp_cmp_expr_right_3 = var_now;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_arg_value_2_2;
tmp_expression_value_6 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_527fe54cb21fe682640835f548ef6aaf;
CHECK_OBJECT(var_latest);
tmp_kw_call_arg_value_1_3 = var_latest;
CHECK_OBJECT(var_now);
tmp_kw_call_arg_value_2_2 = var_now;
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_2};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame.f_lineno = 228;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 228;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp,
    type_description_1,
    par_payload,
    par_clock_skew_in_seconds,
    var_now,
    var_key,
    var_iat,
    var_earliest,
    var_exp,
    var_latest
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp == cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp);
    cache_frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__5__verify_iat_and_exp);

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
CHECK_OBJECT(var_now);
CHECK_OBJECT(var_now);
Py_DECREF(var_now);
var_now = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_iat);
CHECK_OBJECT(var_iat);
Py_DECREF(var_iat);
var_iat = NULL;
CHECK_OBJECT(var_earliest);
CHECK_OBJECT(var_earliest);
Py_DECREF(var_earliest);
var_earliest = NULL;
CHECK_OBJECT(var_exp);
CHECK_OBJECT(var_exp);
Py_DECREF(var_exp);
var_exp = NULL;
CHECK_OBJECT(var_latest);
CHECK_OBJECT(var_latest);
Py_DECREF(var_latest);
var_latest = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_now);
var_now = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_iat);
var_iat = NULL;
Py_XDECREF(var_earliest);
var_earliest = NULL;
Py_XDECREF(var_exp);
var_exp = NULL;
Py_XDECREF(var_latest);
var_latest = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);
CHECK_OBJECT(par_clock_skew_in_seconds);
Py_DECREF(par_clock_skew_in_seconds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);
CHECK_OBJECT(par_clock_skew_in_seconds);
Py_DECREF(par_clock_skew_in_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__6_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
PyObject *par_certs = python_pars[1];
PyObject *par_verify = python_pars[2];
PyObject *par_audience = python_pars[3];
PyObject *par_clock_skew_in_seconds = python_pars[4];
PyObject *var_header = NULL;
PyObject *var_payload = NULL;
PyObject *var_signed_section = NULL;
PyObject *var_signature = NULL;
PyObject *var_key_alg = NULL;
PyObject *var_key_id = NULL;
PyObject *var_verifier_cls = NULL;
PyObject *var_exc = NULL;
PyObject *var_certs_to_check = NULL;
PyObject *var_claim_audience = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__6_decode;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__6_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__6_decode)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__6_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__6_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__6_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_42f51f054e9506999ffcc240d7cfc826, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__6_decode->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__6_decode = cache_frame_frame_google$auth$jwt$$$function__6_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__6_decode);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__6_decode) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$jwt$_unverified_decode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__unverified_decode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 257;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_header == NULL);
Py_INCREF(tmp_assign_source_6);
var_header = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_payload == NULL);
Py_INCREF(tmp_assign_source_7);
var_payload = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
assert(var_signed_section == NULL);
Py_INCREF(tmp_assign_source_8);
var_signed_section = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
assert(var_signature == NULL);
Py_INCREF(tmp_assign_source_9);
var_signature = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_verify);
tmp_operand_value_1 = par_verify;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooooooo";
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
CHECK_OBJECT(var_payload);
tmp_return_value = var_payload;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_header);
tmp_expression_value_1 = var_header;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 264;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_alg_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_alg == NULL);
var_key_alg = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_header);
tmp_expression_value_2 = var_header;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 265;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_kid_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_id == NULL);
var_key_id = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = module_var_accessor_google$auth$jwt$_ALGORITHM_TO_VERIFIER_CLASS(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key_alg);
tmp_subscript_value_1 = var_key_alg;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
assert(var_verifier_cls == NULL);
var_verifier_cls = tmp_assign_source_12;
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__6_decode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__6_decode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
assert(var_exc == NULL);
Py_INCREF(tmp_assign_source_13);
var_exc = tmp_assign_source_13;
}
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_key_alg);
tmp_cmp_expr_left_2 = var_key_alg;
tmp_cmp_expr_right_2 = module_var_accessor_google$auth$jwt$_CRYPTOGRAPHY_BASED_ALGORITHMS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_raise_cause_1;
tmp_expression_value_4 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_7b82e43c632c781a97fd5e085662f8b3;
CHECK_OBJECT(var_key_alg);
tmp_kw_call_arg_value_1_1 = var_key_alg;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 272;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 272;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 271;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_exc);
tmp_raise_cause_1 = var_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 275;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_6;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_raise_cause_2;
tmp_expression_value_5 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_476c6a97940b771fc8326f7f8aa24875;
CHECK_OBJECT(var_key_alg);
tmp_kw_call_arg_value_1_2 = var_key_alg;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 278;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 278;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 277;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_exc);
tmp_raise_cause_2 = var_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 279;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_6;
}
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 267;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$jwt$$$function__6_decode->m_frame)) {
        frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_certs);
tmp_isinstance_inst_1 = par_certs;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$jwt$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooo";
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
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
CHECK_OBJECT(var_key_id);
tmp_truth_name_1 = CHECK_IF_TRUE(var_key_id);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooooooo";
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
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_key_id);
tmp_cmp_expr_left_3 = var_key_id;
CHECK_OBJECT(par_certs);
tmp_cmp_expr_right_3 = par_certs;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
tmp_expression_value_6 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_c2edf5cd61c7fd01c2a61628260941cd;
CHECK_OBJECT(var_key_id);
tmp_kw_call_arg_value_1_3 = var_key_id;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 286;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 286;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 285;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 285;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_certs);
tmp_expression_value_7 = par_certs;
CHECK_OBJECT(var_key_id);
tmp_subscript_value_2 = var_key_id;
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_14, 0, tmp_list_element_1);
assert(var_certs_to_check == NULL);
var_certs_to_check = tmp_assign_source_14;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_certs);
tmp_expression_value_8 = par_certs;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_values);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 291;
tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_certs_to_check == NULL);
var_certs_to_check = tmp_assign_source_15;
}
branch_end_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(par_certs);
tmp_assign_source_16 = par_certs;
assert(var_certs_to_check == NULL);
Py_INCREF(tmp_assign_source_16);
var_certs_to_check = tmp_assign_source_16;
}
branch_end_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$crypt(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_crypt);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signed_section);
tmp_args_element_value_5 = var_signed_section;
CHECK_OBJECT(var_signature);
tmp_args_element_value_6 = var_signature;
CHECK_OBJECT(var_certs_to_check);
tmp_args_element_value_7 = var_certs_to_check;
CHECK_OBJECT(var_verifier_cls);
tmp_args_element_value_8 = var_verifier_cls;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 296;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_2 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_verify_signature,
        call_args
    );
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 299;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_597e62bff8283772ca2a9fc8792abaa0_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 299;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_8 = module_var_accessor_google$auth$jwt$_verify_iat_and_exp(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__verify_iat_and_exp);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_args_element_value_9 = var_payload;
CHECK_OBJECT(par_clock_skew_in_seconds);
tmp_args_element_value_10 = par_clock_skew_in_seconds;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_audience);
tmp_cmp_expr_left_4 = par_audience;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_payload);
tmp_expression_value_9 = var_payload;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 306;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_aud_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_claim_audience == NULL);
var_claim_audience = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_audience);
tmp_isinstance_inst_2 = par_audience;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_list_element_2;
CHECK_OBJECT(par_audience);
tmp_list_element_2 = par_audience;
tmp_assign_source_18 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_18, 0, tmp_list_element_2);
{
    PyObject *old = par_audience;
    assert(old != NULL);
    par_audience = tmp_assign_source_18;
    Py_DECREF(old);
}

}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_claim_audience);
tmp_cmp_expr_left_5 = var_claim_audience;
CHECK_OBJECT(par_audience);
tmp_cmp_expr_right_5 = par_audience;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_expression_value_10 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_0dfadd413ee77429870f98fbbe8f2bef;
CHECK_OBJECT(var_claim_audience);
tmp_kw_call_arg_value_1_4 = var_claim_audience;
CHECK_OBJECT(par_audience);
tmp_kw_call_arg_value_2_1 = par_audience;
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 311;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__6_decode->m_frame.f_lineno = 310;
tmp_raise_type_input_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_raise_type_input_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_5);
CHECK_OBJECT(tmp_raise_type_input_5);
Py_DECREF(tmp_raise_type_input_5);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 310;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
branch_no_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__6_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__6_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__6_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__6_decode,
    type_description_1,
    par_token,
    par_certs,
    par_verify,
    par_audience,
    par_clock_skew_in_seconds,
    var_header,
    var_payload,
    var_signed_section,
    var_signature,
    var_key_alg,
    var_key_id,
    var_verifier_cls,
    var_exc,
    var_certs_to_check,
    var_claim_audience
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__6_decode == cache_frame_frame_google$auth$jwt$$$function__6_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__6_decode);
    cache_frame_frame_google$auth$jwt$$$function__6_decode = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__6_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_payload);
tmp_return_value = var_payload;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_audience);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
par_audience = NULL;
CHECK_OBJECT(var_header);
CHECK_OBJECT(var_header);
Py_DECREF(var_header);
var_header = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_signed_section);
CHECK_OBJECT(var_signed_section);
Py_DECREF(var_signed_section);
var_signed_section = NULL;
CHECK_OBJECT(var_signature);
CHECK_OBJECT(var_signature);
Py_DECREF(var_signature);
var_signature = NULL;
Py_XDECREF(var_key_alg);
var_key_alg = NULL;
Py_XDECREF(var_key_id);
var_key_id = NULL;
Py_XDECREF(var_verifier_cls);
var_verifier_cls = NULL;
Py_XDECREF(var_certs_to_check);
var_certs_to_check = NULL;
Py_XDECREF(var_claim_audience);
var_claim_audience = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_audience);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
par_audience = NULL;
Py_XDECREF(var_header);
var_header = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_signed_section);
var_signed_section = NULL;
Py_XDECREF(var_signature);
var_signature = NULL;
Py_XDECREF(var_key_alg);
var_key_alg = NULL;
Py_XDECREF(var_key_id);
var_key_id = NULL;
Py_XDECREF(var_verifier_cls);
var_verifier_cls = NULL;
Py_XDECREF(var_certs_to_check);
var_certs_to_check = NULL;
Py_XDECREF(var_claim_audience);
var_claim_audience = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_certs);
Py_DECREF(par_certs);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_clock_skew_in_seconds);
Py_DECREF(par_clock_skew_in_seconds);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_certs);
Py_DECREF(par_certs);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_clock_skew_in_seconds);
Py_DECREF(par_clock_skew_in_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_signer = python_pars[1];
PyObject *par_issuer = python_pars[2];
PyObject *par_subject = python_pars[3];
PyObject *par_audience = python_pars[4];
PyObject *par_additional_claims = python_pars[5];
PyObject *par_token_lifetime = python_pars[6];
PyObject *par_quota_project_id = python_pars[7];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_078dc1c144aa714df6ef9344ad96e0b9, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__7___init__->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__7___init__ = cache_frame_frame_google$auth$jwt$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__7___init__);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$jwt$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$jwt, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__7___init__->m_frame.f_lineno = 395;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_signer);
tmp_assattr_value_1 = par_signer;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__signer, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_issuer);
tmp_assattr_value_2 = par_issuer;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__issuer, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_subject);
tmp_assattr_value_3 = par_subject;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__subject, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_audience);
tmp_assattr_value_4 = par_audience;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__audience, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_token_lifetime);
tmp_assattr_value_5 = par_token_lifetime;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__token_lifetime, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_6 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_additional_claims);
tmp_cmp_expr_left_1 = par_additional_claims;
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
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = par_additional_claims;
    assert(old != NULL);
    par_additional_claims = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_additional_claims);
tmp_assattr_value_7 = par_additional_claims;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__additional_claims, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__7___init__,
    type_description_1,
    par_self,
    par_signer,
    par_issuer,
    par_subject,
    par_audience,
    par_additional_claims,
    par_token_lifetime,
    par_quota_project_id,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__7___init__ == cache_frame_frame_google$auth$jwt$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__7___init__);
    cache_frame_frame_google$auth$jwt$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__7___init__);

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
CHECK_OBJECT(par_additional_claims);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);
par_additional_claims = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_additional_claims);
par_additional_claims = NULL;
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
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_token_lifetime);
Py_DECREF(par_token_lifetime);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_token_lifetime);
Py_DECREF(par_token_lifetime);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__8__from_signer_and_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_signer = python_pars[1];
PyObject *par_info = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__8__from_signer_and_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info = MAKE_FUNCTION_FRAME(tstate, code_objects_8ef58fc6ab94332e30f04cb3053412a0, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__8__from_signer_and_info = cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__8__from_signer_and_info);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__8__from_signer_and_info) == 2);

// Framed code:
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_subject;
CHECK_OBJECT(par_info);
tmp_expression_value_1 = par_info;
tmp_subscript_value_1 = mod_consts.const_str_plain_client_email;
tmp_default_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_issuer;
CHECK_OBJECT(par_info);
tmp_expression_value_3 = par_info;
tmp_subscript_value_2 = mod_consts.const_str_plain_client_email;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__8__from_signer_and_info->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(par_signer);
tmp_tuple_element_1 = par_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__8__from_signer_and_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__8__from_signer_and_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__8__from_signer_and_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__8__from_signer_and_info,
    type_description_1,
    par_cls,
    par_signer,
    par_info,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__8__from_signer_and_info == cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info);
    cache_frame_frame_google$auth$jwt$$$function__8__from_signer_and_info = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__8__from_signer_and_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__9_from_service_account_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_signer = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__9_from_service_account_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info = MAKE_FUNCTION_FRAME(tstate, code_objects_a47185d13fc804f83689a2064bd26e8e, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__9_from_service_account_info = cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__9_from_service_account_info);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__9_from_service_account_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_service_account_info(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__service_account_info);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_dict);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_tuple_element_1 = par_info;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
frame_frame_google$auth$jwt$$$function__9_from_service_account_info->m_frame.f_lineno = 443;
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


exception_lineno = 443;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_signer == NULL);
var_signer = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__from_signer_and_info);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signer);
tmp_tuple_element_2 = var_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_info);
tmp_tuple_element_2 = par_info;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__9_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__9_from_service_account_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__9_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__9_from_service_account_info,
    type_description_1,
    par_cls,
    par_info,
    par_kwargs,
    var_signer
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__9_from_service_account_info == cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info);
    cache_frame_frame_google$auth$jwt$$$function__9_from_service_account_info = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__9_from_service_account_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_signer);
CHECK_OBJECT(var_signer);
Py_DECREF(var_signer);
var_signer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_signer);
var_signer = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__10_from_service_account_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_info = NULL;
PyObject *var_signer = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__10_from_service_account_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file = MAKE_FUNCTION_FRAME(tstate, code_objects_954536c2b7b61487fc706182b8ebd249, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__10_from_service_account_file = cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__10_from_service_account_file);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__10_from_service_account_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_service_account_info(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__service_account_info);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_filename);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
frame_frame_google$auth$jwt$$$function__10_from_service_account_file->m_frame.f_lineno = 458;
tmp_iter_arg_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_info == NULL);
Py_INCREF(tmp_assign_source_4);
var_info = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_signer == NULL);
Py_INCREF(tmp_assign_source_5);
var_signer = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__from_signer_and_info);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signer);
tmp_tuple_element_2 = var_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_info);
tmp_tuple_element_2 = var_info;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__10_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__10_from_service_account_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__10_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__10_from_service_account_file,
    type_description_1,
    par_cls,
    par_filename,
    par_kwargs,
    var_info,
    var_signer
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__10_from_service_account_file == cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file);
    cache_frame_frame_google$auth$jwt$$$function__10_from_service_account_file = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__10_from_service_account_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
CHECK_OBJECT(var_signer);
CHECK_OBJECT(var_signer);
Py_DECREF(var_signer);
var_signer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_signer);
var_signer = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__11_from_signing_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_credentials = python_pars[1];
PyObject *par_audience = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__11_from_signing_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_1cb86b652e45f8f0b0a5247e1992e00f, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__11_from_signing_credentials = cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__11_from_signing_credentials);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__11_from_signing_credentials) == 2);

// Framed code:
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_issuer;
CHECK_OBJECT(par_credentials);
tmp_expression_value_1 = par_credentials;
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_signer_email);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_subject;
CHECK_OBJECT(par_credentials);
tmp_expression_value_3 = par_credentials;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_signer_email);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 492;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__11_from_signing_credentials->m_frame.f_lineno = 492;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(par_credentials);
tmp_expression_value_4 = par_credentials;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_signer);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_audience;
CHECK_OBJECT(par_audience);
tmp_dict_value_1 = par_audience;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__11_from_signing_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__11_from_signing_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__11_from_signing_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__11_from_signing_credentials,
    type_description_1,
    par_cls,
    par_credentials,
    par_audience,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__11_from_signing_credentials == cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials);
    cache_frame_frame_google$auth$jwt$$$function__11_from_signing_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__11_from_signing_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__12_with_claims(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_issuer = python_pars[1];
PyObject *par_subject = python_pars[2];
PyObject *par_audience = python_pars[3];
PyObject *par_additional_claims = python_pars[4];
PyObject *var_new_additional_claims = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__12_with_claims;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__12_with_claims = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__12_with_claims)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__12_with_claims);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__12_with_claims == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__12_with_claims = MAKE_FUNCTION_FRAME(tstate, code_objects_467b752490e19d003ea87ce9cfb9f1ba, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__12_with_claims->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__12_with_claims = cache_frame_frame_google$auth$jwt$$$function__12_with_claims;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__12_with_claims);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__12_with_claims) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_deepcopy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__additional_claims);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__12_with_claims->m_frame.f_lineno = 514;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_new_additional_claims == NULL);
var_new_additional_claims = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(var_new_additional_claims);
tmp_expression_value_3 = var_new_additional_claims;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_additional_claims);
tmp_or_left_value_1 = par_additional_claims;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 515;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_args_element_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_2 = tmp_or_left_value_1;
or_end_1:;
frame_frame_google$auth$jwt$$$function__12_with_claims->m_frame.f_lineno = 515;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_1_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_2_1;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__signer);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 518;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_issuer);
tmp_cmp_expr_left_1 = par_issuer;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_issuer);
tmp_kw_call_dict_value_0_1 = par_issuer;
Py_INCREF(tmp_kw_call_dict_value_0_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__issuer);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 519;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_subject);
tmp_cmp_expr_left_2 = par_subject;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_subject);
tmp_kw_call_dict_value_1_1 = par_subject;
Py_INCREF(tmp_kw_call_dict_value_1_1);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__subject);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 520;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
CHECK_OBJECT(par_audience);
tmp_cmp_expr_left_3 = par_audience;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(par_audience);
tmp_kw_call_dict_value_2_1 = par_audience;
Py_INCREF(tmp_kw_call_dict_value_2_1);
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__audience);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 521;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
CHECK_OBJECT(var_new_additional_claims);
tmp_kw_call_dict_value_3_1 = var_new_additional_claims;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_dict_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 523;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__12_with_claims->m_frame.f_lineno = 517;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__12_with_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__12_with_claims->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__12_with_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__12_with_claims,
    type_description_1,
    par_self,
    par_issuer,
    par_subject,
    par_audience,
    par_additional_claims,
    var_new_additional_claims
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__12_with_claims == cache_frame_frame_google$auth$jwt$$$function__12_with_claims) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__12_with_claims);
    cache_frame_frame_google$auth$jwt$$$function__12_with_claims = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__12_with_claims);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_additional_claims);
CHECK_OBJECT(var_new_additional_claims);
Py_DECREF(var_new_additional_claims);
var_new_additional_claims = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_additional_claims);
var_new_additional_claims = NULL;
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
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__13_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__13_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_7762d1f49a8e945431baebe92f231f27, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__13_with_quota_project = cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__13_with_quota_project);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__13_with_quota_project) == 2);

// Framed code:
{
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
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__signer);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 529;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__issuer);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 530;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__subject);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 531;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__audience);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 532;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__additional_claims);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 533;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_quota_project_id);
tmp_kw_call_dict_value_4_1 = par_quota_project_id;
frame_frame_google$auth$jwt$$$function__13_with_quota_project->m_frame.f_lineno = 528;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_d87c90b7f9cd37c078b1ea1dbd66dfd6_tuple);
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
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__13_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__13_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__13_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__13_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__13_with_quota_project == cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project);
    cache_frame_frame_google$auth$jwt$$$function__13_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__13_with_quota_project);

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


static PyObject *impl_google$auth$jwt$$$function__14__make_jwt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_now = NULL;
PyObject *var_lifetime = NULL;
PyObject *var_expiry = NULL;
PyObject *var_payload = NULL;
PyObject *var_jwt = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__14__make_jwt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__14__make_jwt = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__14__make_jwt)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__14__make_jwt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__14__make_jwt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__14__make_jwt = MAKE_FUNCTION_FRAME(tstate, code_objects_b29a4c151aa3fe9506cff5f3f73da6e7, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__14__make_jwt->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__14__make_jwt = cache_frame_frame_google$auth$jwt$$$function__14__make_jwt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__14__make_jwt);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__14__make_jwt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 543;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame.f_lineno = 543;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_now == NULL);
var_now = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$datetime(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 544;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_timedelta);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__token_lifetime);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 544;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame.f_lineno = 544;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_seconds_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_lifetime == NULL);
var_lifetime = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_now);
tmp_add_expr_left_1 = var_now;
CHECK_OBJECT(var_lifetime);
tmp_add_expr_right_1 = var_lifetime;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_iss;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__issuer);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 548;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sub;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__subject);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_iat;
tmp_called_instance_2 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_now);
tmp_args_element_value_1 = var_now;
frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame.f_lineno = 550;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_exp;
tmp_called_instance_3 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 551;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_expiry);
tmp_args_element_value_2 = var_expiry;
frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame.f_lineno = 551;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_payload == NULL);
var_payload = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__audience);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 553;
type_description_1 = "oooooo";
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
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__audience);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_dictset_dict = var_payload;
tmp_dictset_key = mod_consts.const_str_plain_aud;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_payload);
tmp_dict_arg_value_1 = var_payload;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__additional_claims);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "oooooo";
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


exception_lineno = 556;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_google$auth$jwt$encode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 558;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__signer);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_args_element_value_4 = var_payload;
frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame.f_lineno = 558;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_jwt == NULL);
var_jwt = tmp_assign_source_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__14__make_jwt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__14__make_jwt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__14__make_jwt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__14__make_jwt,
    type_description_1,
    par_self,
    var_now,
    var_lifetime,
    var_expiry,
    var_payload,
    var_jwt
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__14__make_jwt == cache_frame_frame_google$auth$jwt$$$function__14__make_jwt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__14__make_jwt);
    cache_frame_frame_google$auth$jwt$$$function__14__make_jwt = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__14__make_jwt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_jwt);
tmp_tuple_element_1 = var_jwt;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_1 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_now);
CHECK_OBJECT(var_now);
Py_DECREF(var_now);
var_now = NULL;
CHECK_OBJECT(var_lifetime);
CHECK_OBJECT(var_lifetime);
Py_DECREF(var_lifetime);
var_lifetime = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_jwt);
CHECK_OBJECT(var_jwt);
Py_DECREF(var_jwt);
var_jwt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_now);
var_now = NULL;
Py_XDECREF(var_lifetime);
var_lifetime = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
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


static PyObject *impl_google$auth$jwt$$$function__15_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__15_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__15_refresh = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__15_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__15_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__15_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__15_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_55f1eea8806f131ac1ab375efb435f5a, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__15_refresh->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__15_refresh = cache_frame_frame_google$auth$jwt$$$function__15_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__15_refresh);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__15_refresh) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$jwt$$$function__15_refresh->m_frame.f_lineno = 570;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_jwt);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__15_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__15_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__15_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__15_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__15_refresh == cache_frame_frame_google$auth$jwt$$$function__15_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__15_refresh);
    cache_frame_frame_google$auth$jwt$$$function__15_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__15_refresh);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

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


static PyObject *impl_google$auth$jwt$$$function__16_sign_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__16_sign_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_de6ef0170087cdd03381a6ff84421444, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__16_sign_bytes = cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__16_sign_bytes);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__16_sign_bytes) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signer);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_google$auth$jwt$$$function__16_sign_bytes->m_frame.f_lineno = 574;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sign, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__16_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__16_sign_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__16_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__16_sign_bytes,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__16_sign_bytes == cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes);
    cache_frame_frame_google$auth$jwt$$$function__16_sign_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__16_sign_bytes);

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

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__17_signer_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__17_signer_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__17_signer_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__17_signer_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__17_signer_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__17_signer_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__17_signer_email = MAKE_FUNCTION_FRAME(tstate, code_objects_c7941926ace2308e5dbbbf30f710365c, module_google$auth$jwt, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__17_signer_email->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__17_signer_email = cache_frame_frame_google$auth$jwt$$$function__17_signer_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__17_signer_email);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__17_signer_email) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__issuer);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__17_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__17_signer_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__17_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__17_signer_email,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__17_signer_email == cache_frame_frame_google$auth$jwt$$$function__17_signer_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__17_signer_email);
    cache_frame_frame_google$auth$jwt$$$function__17_signer_email = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__17_signer_email);

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


static PyObject *impl_google$auth$jwt$$$function__18_signer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__18_signer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__18_signer = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__18_signer)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__18_signer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__18_signer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__18_signer = MAKE_FUNCTION_FRAME(tstate, code_objects_2d06038aba5fc8f41851e14206333e01, module_google$auth$jwt, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__18_signer->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__18_signer = cache_frame_frame_google$auth$jwt$$$function__18_signer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__18_signer);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__18_signer) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signer);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__18_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__18_signer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__18_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__18_signer,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__18_signer == cache_frame_frame_google$auth$jwt$$$function__18_signer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__18_signer);
    cache_frame_frame_google$auth$jwt$$$function__18_signer = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__18_signer);

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


static PyObject *impl_google$auth$jwt$$$function__19_additional_claims(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__19_additional_claims;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__19_additional_claims = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__19_additional_claims)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__19_additional_claims);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__19_additional_claims == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__19_additional_claims = MAKE_FUNCTION_FRAME(tstate, code_objects_f6c12bbcf3de09a3a0e95fba48ce3b1d, module_google$auth$jwt, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__19_additional_claims->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__19_additional_claims = cache_frame_frame_google$auth$jwt$$$function__19_additional_claims;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__19_additional_claims);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__19_additional_claims) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__additional_claims);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__19_additional_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__19_additional_claims->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__19_additional_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__19_additional_claims,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__19_additional_claims == cache_frame_frame_google$auth$jwt$$$function__19_additional_claims) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__19_additional_claims);
    cache_frame_frame_google$auth$jwt$$$function__19_additional_claims = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__19_additional_claims);

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


static PyObject *impl_google$auth$jwt$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_signer = python_pars[1];
PyObject *par_issuer = python_pars[2];
PyObject *par_subject = python_pars[3];
PyObject *par_additional_claims = python_pars[4];
PyObject *par_token_lifetime = python_pars[5];
PyObject *par_max_cache_size = python_pars[6];
PyObject *par_quota_project_id = python_pars[7];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__20___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__20___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__20___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__20___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__20___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__20___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a2336484c5fe4119815df9dd657ad800, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__20___init__->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__20___init__ = cache_frame_frame_google$auth$jwt$$$function__20___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__20___init__);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__20___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$jwt$OnDemandCredentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OnDemandCredentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$jwt, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__20___init__->m_frame.f_lineno = 637;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_signer);
tmp_assattr_value_1 = par_signer;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__signer, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_issuer);
tmp_assattr_value_2 = par_issuer;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__issuer, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_subject);
tmp_assattr_value_3 = par_subject;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__subject, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_token_lifetime);
tmp_assattr_value_4 = par_token_lifetime;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__token_lifetime, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 641;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_5 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_additional_claims);
tmp_cmp_expr_left_1 = par_additional_claims;
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
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = par_additional_claims;
    assert(old != NULL);
    par_additional_claims = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_additional_claims);
tmp_assattr_value_6 = par_additional_claims;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__additional_claims, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_assattr_target_7;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_cache(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__cache);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 648;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_LRUCache);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max_cache_size);
tmp_kw_call_value_0_1 = par_max_cache_size;
frame_frame_google$auth$jwt$$$function__20___init__->m_frame.f_lineno = 648;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assattr_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__cache, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "ooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__20___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__20___init__,
    type_description_1,
    par_self,
    par_signer,
    par_issuer,
    par_subject,
    par_additional_claims,
    par_token_lifetime,
    par_max_cache_size,
    par_quota_project_id,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__20___init__ == cache_frame_frame_google$auth$jwt$$$function__20___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__20___init__);
    cache_frame_frame_google$auth$jwt$$$function__20___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__20___init__);

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
CHECK_OBJECT(par_additional_claims);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);
par_additional_claims = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_additional_claims);
par_additional_claims = NULL;
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
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_token_lifetime);
Py_DECREF(par_token_lifetime);
CHECK_OBJECT(par_max_cache_size);
Py_DECREF(par_max_cache_size);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_token_lifetime);
Py_DECREF(par_token_lifetime);
CHECK_OBJECT(par_max_cache_size);
Py_DECREF(par_max_cache_size);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__21__from_signer_and_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_signer = python_pars[1];
PyObject *par_info = python_pars[2];
PyObject *par_kwargs = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__21__from_signer_and_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info = MAKE_FUNCTION_FRAME(tstate, code_objects_2428d69c028788ff8c3bd5befe73c5f2, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__21__from_signer_and_info = cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__21__from_signer_and_info);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__21__from_signer_and_info) == 2);

// Framed code:
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_subject;
CHECK_OBJECT(par_info);
tmp_expression_value_1 = par_info;
tmp_subscript_value_1 = mod_consts.const_str_plain_client_email;
tmp_default_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_issuer;
CHECK_OBJECT(par_info);
tmp_expression_value_3 = par_info;
tmp_subscript_value_2 = mod_consts.const_str_plain_client_email;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 667;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__21__from_signer_and_info->m_frame.f_lineno = 667;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(par_signer);
tmp_tuple_element_1 = par_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__21__from_signer_and_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__21__from_signer_and_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__21__from_signer_and_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__21__from_signer_and_info,
    type_description_1,
    par_cls,
    par_signer,
    par_info,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__21__from_signer_and_info == cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info);
    cache_frame_frame_google$auth$jwt$$$function__21__from_signer_and_info = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__21__from_signer_and_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_signer);
Py_DECREF(par_signer);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__22_from_service_account_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_signer = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__22_from_service_account_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info = MAKE_FUNCTION_FRAME(tstate, code_objects_91b3885c96b5664536f2e79dd9c1e6ed, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__22_from_service_account_info = cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__22_from_service_account_info);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__22_from_service_account_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_service_account_info(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__service_account_info);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 685;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_dict);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_tuple_element_1 = par_info;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
frame_frame_google$auth$jwt$$$function__22_from_service_account_info->m_frame.f_lineno = 685;
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


exception_lineno = 685;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_signer == NULL);
var_signer = tmp_assign_source_1;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__from_signer_and_info);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signer);
tmp_tuple_element_2 = var_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_info);
tmp_tuple_element_2 = par_info;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__22_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__22_from_service_account_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__22_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__22_from_service_account_info,
    type_description_1,
    par_cls,
    par_info,
    par_kwargs,
    var_signer
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__22_from_service_account_info == cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info);
    cache_frame_frame_google$auth$jwt$$$function__22_from_service_account_info = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__22_from_service_account_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_signer);
CHECK_OBJECT(var_signer);
Py_DECREF(var_signer);
var_signer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_signer);
var_signer = NULL;
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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__23_from_service_account_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_info = NULL;
PyObject *var_signer = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__23_from_service_account_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file = MAKE_FUNCTION_FRAME(tstate, code_objects_f4701cbaa71bbf734445466cea43c452, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__23_from_service_account_file = cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__23_from_service_account_file);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__23_from_service_account_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$_service_account_info(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__service_account_info);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_filename);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_02578fdb846418814fa202b83fb5c934);
frame_frame_google$auth$jwt$$$function__23_from_service_account_file->m_frame.f_lineno = 700;
tmp_iter_arg_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 700;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_info == NULL);
Py_INCREF(tmp_assign_source_4);
var_info = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_signer == NULL);
Py_INCREF(tmp_assign_source_5);
var_signer = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__from_signer_and_info);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signer);
tmp_tuple_element_2 = var_signer;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_info);
tmp_tuple_element_2 = var_info;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__23_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__23_from_service_account_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__23_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__23_from_service_account_file,
    type_description_1,
    par_cls,
    par_filename,
    par_kwargs,
    var_info,
    var_signer
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__23_from_service_account_file == cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file);
    cache_frame_frame_google$auth$jwt$$$function__23_from_service_account_file = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__23_from_service_account_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
CHECK_OBJECT(var_signer);
CHECK_OBJECT(var_signer);
Py_DECREF(var_signer);
var_signer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_signer);
var_signer = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__24_from_signing_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_credentials = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__24_from_signing_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_39beb691296fd88f427e4788da56395a, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__24_from_signing_credentials = cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__24_from_signing_credentials);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__24_from_signing_credentials) == 2);

// Framed code:
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_issuer;
CHECK_OBJECT(par_credentials);
tmp_expression_value_1 = par_credentials;
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_signer_email);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_capi_result_1 == NULL));
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_2 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_subject;
CHECK_OBJECT(par_credentials);
tmp_expression_value_3 = par_credentials;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_signer_email);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 730;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__24_from_signing_credentials->m_frame.f_lineno = 730;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_cls);
tmp_direct_call_arg1_1 = par_cls;
CHECK_OBJECT(par_credentials);
tmp_expression_value_4 = par_credentials;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_signer);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__24_from_signing_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__24_from_signing_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__24_from_signing_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__24_from_signing_credentials,
    type_description_1,
    par_cls,
    par_credentials,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__24_from_signing_credentials == cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials);
    cache_frame_frame_google$auth$jwt$$$function__24_from_signing_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__24_from_signing_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__25_with_claims(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_issuer = python_pars[1];
PyObject *par_subject = python_pars[2];
PyObject *par_additional_claims = python_pars[3];
PyObject *var_new_additional_claims = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__25_with_claims;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__25_with_claims = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__25_with_claims)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__25_with_claims);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__25_with_claims == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__25_with_claims = MAKE_FUNCTION_FRAME(tstate, code_objects_d3bac492e690ce10f7bf1fe6f3402674, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__25_with_claims->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__25_with_claims = cache_frame_frame_google$auth$jwt$$$function__25_with_claims;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__25_with_claims);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__25_with_claims) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 748;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_deepcopy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__additional_claims);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 748;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__25_with_claims->m_frame.f_lineno = 748;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_new_additional_claims == NULL);
var_new_additional_claims = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(var_new_additional_claims);
tmp_expression_value_3 = var_new_additional_claims;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_additional_claims);
tmp_or_left_value_1 = par_additional_claims;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 749;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_args_element_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_2 = tmp_or_left_value_1;
or_end_1:;
frame_frame_google$auth$jwt$$$function__25_with_claims->m_frame.f_lineno = 749;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_1_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 751;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__signer);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 752;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_issuer);
tmp_cmp_expr_left_1 = par_issuer;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_issuer);
tmp_kw_call_dict_value_0_1 = par_issuer;
Py_INCREF(tmp_kw_call_dict_value_0_1);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__issuer);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 753;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_subject);
tmp_cmp_expr_left_2 = par_subject;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_subject);
tmp_kw_call_dict_value_1_1 = par_subject;
Py_INCREF(tmp_kw_call_dict_value_1_1);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__subject);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 754;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
CHECK_OBJECT(var_new_additional_claims);
tmp_kw_call_dict_value_2_1 = var_new_additional_claims;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__cache);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_maxsize);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 756;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_dict_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);

exception_lineno = 757;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__25_with_claims->m_frame.f_lineno = 751;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_84deb651831fccebecb6ee42c5966e01_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 751;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__25_with_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__25_with_claims->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__25_with_claims, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__25_with_claims,
    type_description_1,
    par_self,
    par_issuer,
    par_subject,
    par_additional_claims,
    var_new_additional_claims
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__25_with_claims == cache_frame_frame_google$auth$jwt$$$function__25_with_claims) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__25_with_claims);
    cache_frame_frame_google$auth$jwt$$$function__25_with_claims = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__25_with_claims);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_new_additional_claims);
CHECK_OBJECT(var_new_additional_claims);
Py_DECREF(var_new_additional_claims);
var_new_additional_claims = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_additional_claims);
var_new_additional_claims = NULL;
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
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_issuer);
Py_DECREF(par_issuer);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_additional_claims);
Py_DECREF(par_additional_claims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__26_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__26_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_5eda032b705b68d5f4508e400cbec875, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__26_with_quota_project = cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__26_with_quota_project);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__26_with_quota_project) == 2);

// Framed code:
{
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
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__signer);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 763;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__issuer);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 764;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__subject);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 765;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__additional_claims);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 766;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__cache);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 767;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_maxsize);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 767;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_quota_project_id);
tmp_kw_call_dict_value_4_1 = par_quota_project_id;
frame_frame_google$auth$jwt$$$function__26_with_quota_project->m_frame.f_lineno = 762;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_84deb651831fccebecb6ee42c5966e01_tuple);
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
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 762;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__26_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__26_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__26_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__26_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__26_with_quota_project == cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project);
    cache_frame_frame_google$auth$jwt$$$function__26_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__26_with_quota_project);

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


static PyObject *impl_google$auth$jwt$$$function__28__make_jwt_for_audience(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_audience = python_pars[1];
PyObject *var_now = NULL;
PyObject *var_lifetime = NULL;
PyObject *var_expiry = NULL;
PyObject *var_payload = NULL;
PyObject *var_jwt = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience = MAKE_FUNCTION_FRAME(tstate, code_objects_51eea6050e9f68a1ff86382e128fc208, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience = cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 789;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame.f_lineno = 789;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 789;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_now == NULL);
var_now = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$datetime(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 790;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_timedelta);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__token_lifetime);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 790;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame.f_lineno = 790;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_seconds_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_lifetime == NULL);
var_lifetime = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_now);
tmp_add_expr_left_1 = var_now;
CHECK_OBJECT(var_lifetime);
tmp_add_expr_right_1 = var_lifetime;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_iss;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__issuer);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sub;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__subject);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 795;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_iat;
tmp_called_instance_2 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 796;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_now);
tmp_args_element_value_1 = var_now;
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame.f_lineno = 796;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_exp;
tmp_called_instance_3 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 797;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_expiry);
tmp_args_element_value_2 = var_expiry;
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame.f_lineno = 797;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 797;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_aud;
CHECK_OBJECT(par_audience);
tmp_dict_value_1 = par_audience;
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_payload == NULL);
var_payload = tmp_assign_source_4;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_payload);
tmp_dict_arg_value_1 = var_payload;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__additional_claims);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "ooooooo";
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


exception_lineno = 801;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_google$auth$jwt$encode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 803;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__signer);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_args_element_value_4 = var_payload;
frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame.f_lineno = 803;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_jwt == NULL);
var_jwt = tmp_assign_source_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience,
    type_description_1,
    par_self,
    par_audience,
    var_now,
    var_lifetime,
    var_expiry,
    var_payload,
    var_jwt
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience == cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience);
    cache_frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__28__make_jwt_for_audience);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_jwt);
tmp_tuple_element_1 = var_jwt;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_1 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_now);
CHECK_OBJECT(var_now);
Py_DECREF(var_now);
var_now = NULL;
CHECK_OBJECT(var_lifetime);
CHECK_OBJECT(var_lifetime);
Py_DECREF(var_lifetime);
var_lifetime = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_jwt);
CHECK_OBJECT(var_jwt);
Py_DECREF(var_jwt);
var_jwt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_now);
var_now = NULL;
Py_XDECREF(var_lifetime);
var_lifetime = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
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
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__29__get_jwt_for_audience(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_audience = python_pars[1];
PyObject *var_token = NULL;
PyObject *var_expiry = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience = MAKE_FUNCTION_FRAME(tstate, code_objects_7bfb9b8bb0cb33a42cc2865d244da553, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience = cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cache);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_audience);
tmp_args_element_value_1 = par_audience;
tmp_args_element_value_2 = mod_consts.const_tuple_none_none_tuple;
frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience->m_frame.f_lineno = 820;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 820;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_token == NULL);
Py_INCREF(tmp_assign_source_4);
var_token = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_expiry == NULL);
Py_INCREF(tmp_assign_source_5);
var_expiry = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_token);
tmp_cmp_expr_left_1 = var_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_expiry);
tmp_cmp_expr_left_2 = var_expiry;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 822;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience->m_frame.f_lineno = 822;
tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_audience);
tmp_args_element_value_3 = par_audience;
frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience->m_frame.f_lineno = 823;
tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__make_jwt_for_audience, tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 823;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 823;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 823;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 823;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 823;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_9;
    Py_INCREF(var_token);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_expiry;
    assert(old != NULL);
    var_expiry = tmp_assign_source_10;
    Py_INCREF(var_expiry);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_token);
tmp_tuple_element_1 = var_token;
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_1 = var_expiry;
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__cache);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 824;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_audience);
tmp_ass_subscript_1 = par_audience;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 824;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience,
    type_description_1,
    par_self,
    par_audience,
    var_token,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience == cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience);
    cache_frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__29__get_jwt_for_audience);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_token);
tmp_return_value = var_token;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_expiry);
var_expiry = NULL;
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
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__30_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__30_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__30_refresh = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__30_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__30_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__30_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__30_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_7b5c4fd314cc743039e9388ef2912b2b, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__30_refresh->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__30_refresh = cache_frame_frame_google$auth$jwt$$$function__30_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__30_refresh);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__30_refresh) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$jwt$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 840;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$jwt$$$function__30_refresh->m_frame.f_lineno = 840;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_0a3471d50f4b8fc03e2efdcc051996ab_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 840;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__30_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__30_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__30_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__30_refresh,
    type_description_1,
    par_self,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__30_refresh == cache_frame_frame_google$auth$jwt$$$function__30_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__30_refresh);
    cache_frame_frame_google$auth$jwt$$$function__30_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__30_refresh);

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


static PyObject *impl_google$auth$jwt$$$function__31_before_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *var_parts = NULL;
PyObject *var_audience = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__31_before_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__31_before_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__31_before_request)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__31_before_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__31_before_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__31_before_request = MAKE_FUNCTION_FRAME(tstate, code_objects_b93b7afbf6e35ff6779ac9b4ba5d7085, module_google$auth$jwt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__31_before_request->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__31_before_request = cache_frame_frame_google$auth$jwt$$$function__31_before_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__31_before_request);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__31_before_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 857;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_google$auth$jwt$$$function__31_before_request->m_frame.f_lineno = 857;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlsplit, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_parts == NULL);
var_parts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_google$auth$jwt$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 859;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_parse);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_urlunsplit);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_parts);
tmp_expression_value_4 = var_parts;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_scheme);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 860;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_parts);
tmp_expression_value_5 = var_parts;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_netloc);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 860;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_parts);
tmp_expression_value_6 = var_parts;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_path);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 860;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_empty;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_empty;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_google$auth$jwt$$$function__31_before_request->m_frame.f_lineno = 859;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_audience == NULL);
var_audience = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_audience);
tmp_args_element_value_3 = var_audience;
frame_frame_google$auth$jwt$$$function__31_before_request->m_frame.f_lineno = 862;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_jwt_for_audience, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 862;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_apply);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_kw_call_arg_value_0_1 = par_headers;
CHECK_OBJECT(var_token);
tmp_kw_call_dict_value_0_1 = var_token;
frame_frame_google$auth$jwt$$$function__31_before_request->m_frame.f_lineno = 863;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_token_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__31_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__31_before_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__31_before_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__31_before_request,
    type_description_1,
    par_self,
    par_request,
    par_method,
    par_url,
    par_headers,
    var_parts,
    var_audience,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__31_before_request == cache_frame_frame_google$auth$jwt$$$function__31_before_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__31_before_request);
    cache_frame_frame_google$auth$jwt$$$function__31_before_request = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__31_before_request);

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
CHECK_OBJECT(var_parts);
CHECK_OBJECT(var_parts);
Py_DECREF(var_parts);
var_parts = NULL;
CHECK_OBJECT(var_audience);
CHECK_OBJECT(var_audience);
Py_DECREF(var_audience);
var_audience = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_audience);
var_audience = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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


static PyObject *impl_google$auth$jwt$$$function__32_sign_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__32_sign_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_7f4ba1f749ba970f4a946f38bf1a2b9b, module_google$auth$jwt, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__32_sign_bytes = cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__32_sign_bytes);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__32_sign_bytes) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signer);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_google$auth$jwt$$$function__32_sign_bytes->m_frame.f_lineno = 867;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sign, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__32_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__32_sign_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__32_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__32_sign_bytes,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__32_sign_bytes == cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes);
    cache_frame_frame_google$auth$jwt$$$function__32_sign_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__32_sign_bytes);

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

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$jwt$$$function__33_signer_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__33_signer_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__33_signer_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__33_signer_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__33_signer_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__33_signer_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__33_signer_email = MAKE_FUNCTION_FRAME(tstate, code_objects_70d451d282dfe75283901610e87d4b88, module_google$auth$jwt, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__33_signer_email->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__33_signer_email = cache_frame_frame_google$auth$jwt$$$function__33_signer_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__33_signer_email);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__33_signer_email) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__issuer);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__33_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__33_signer_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__33_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__33_signer_email,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__33_signer_email == cache_frame_frame_google$auth$jwt$$$function__33_signer_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__33_signer_email);
    cache_frame_frame_google$auth$jwt$$$function__33_signer_email = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__33_signer_email);

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


static PyObject *impl_google$auth$jwt$$$function__34_signer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$function__34_signer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$jwt$$$function__34_signer = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$jwt$$$function__34_signer)) {
    Py_XDECREF(cache_frame_frame_google$auth$jwt$$$function__34_signer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$jwt$$$function__34_signer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$jwt$$$function__34_signer = MAKE_FUNCTION_FRAME(tstate, code_objects_23612047653659f51d9d845827278b27, module_google$auth$jwt, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$jwt$$$function__34_signer->m_type_description == NULL);
frame_frame_google$auth$jwt$$$function__34_signer = cache_frame_frame_google$auth$jwt$$$function__34_signer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$function__34_signer);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$function__34_signer) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signer);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 877;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$function__34_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$function__34_signer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$function__34_signer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$function__34_signer,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$jwt$$$function__34_signer == cache_frame_frame_google$auth$jwt$$$function__34_signer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$jwt$$$function__34_signer);
    cache_frame_frame_google$auth$jwt$$$function__34_signer = NULL;
}

assertFrameObject(frame_frame_google$auth$jwt$$$function__34_signer);

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



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__10_from_service_account_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__10_from_service_account_file,
        mod_consts.const_str_plain_from_service_account_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fd078ae67f9dce058013aea5349559d5,
#endif
        code_objects_954536c2b7b61487fc706182b8ebd249,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_7121436befb1ade7968840c1739eddc9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__11_from_signing_credentials(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__11_from_signing_credentials,
        mod_consts.const_str_plain_from_signing_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba8c59f48a052d5aaf1c55605a16331d,
#endif
        code_objects_1cb86b652e45f8f0b0a5247e1992e00f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_42ed73a5daf19314bc5bcdd261b30512,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__12_with_claims(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__12_with_claims,
        mod_consts.const_str_plain_with_claims,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4d10893f55a494e6aa4710c4c71a0bf,
#endif
        code_objects_467b752490e19d003ea87ce9cfb9f1ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_56855387da29c7ef1a6ded28685ff89e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__13_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__13_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513,
#endif
        code_objects_7762d1f49a8e945431baebe92f231f27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__14__make_jwt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__14__make_jwt,
        mod_consts.const_str_plain__make_jwt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a970df04b82f1ae615f805ffe9bf7a1,
#endif
        code_objects_b29a4c151aa3fe9506cff5f3f73da6e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_0b27d7470d9b65ef4fc9e7d687065629,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__15_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__15_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8d96327bb876dc140fac3cfa41e9d75,
#endif
        code_objects_55f1eea8806f131ac1ab375efb435f5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_70abf153b0c87cfb102440adc12ef52d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__16_sign_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__16_sign_bytes,
        mod_consts.const_str_plain_sign_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753,
#endif
        code_objects_de6ef0170087cdd03381a6ff84421444,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__17_signer_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__17_signer_email,
        mod_consts.const_str_plain_signer_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b,
#endif
        code_objects_c7941926ace2308e5dbbbf30f710365c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__18_signer(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__18_signer,
        mod_consts.const_str_plain_signer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd,
#endif
        code_objects_2d06038aba5fc8f41851e14206333e01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__19_additional_claims(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__19_additional_claims,
        mod_consts.const_str_plain_additional_claims,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_acd2624aee3df778a883ffb18a116f71,
#endif
        code_objects_f6c12bbcf3de09a3a0e95fba48ce3b1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_41e59ed9534d6546e6c597bb6fe91c08,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__1_encode(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__1_encode,
        mod_consts.const_str_plain_encode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_53906f1a372d0008a9cb6bc7f347c7c1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_22cd38659bca9b2cdb275000bacaa7aa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__20___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4abc761cd6aefbeb4fb55500edfb5d5d,
#endif
        code_objects_a2336484c5fe4119815df9dd657ad800,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_f9c5d9d5436d75554f9b5b119bf41ede,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__21__from_signer_and_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__21__from_signer_and_info,
        mod_consts.const_str_plain__from_signer_and_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c458cbc97cad6954cd7c31920b26ab48,
#endif
        code_objects_2428d69c028788ff8c3bd5befe73c5f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_49022ed560c549a77afb5815fdec4a60,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__22_from_service_account_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__22_from_service_account_info,
        mod_consts.const_str_plain_from_service_account_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_57d8870b1d809cf9d7b5dd5e566802a3,
#endif
        code_objects_91b3885c96b5664536f2e79dd9c1e6ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_7cb8869e253234c2df9a7986e6171b94,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__23_from_service_account_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__23_from_service_account_file,
        mod_consts.const_str_plain_from_service_account_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5ec67ada53a9ff6548120c02f988cba5,
#endif
        code_objects_f4701cbaa71bbf734445466cea43c452,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_01c161557bccfaf8dcf38738deb3ed9e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__24_from_signing_credentials(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__24_from_signing_credentials,
        mod_consts.const_str_plain_from_signing_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5bfb14276835bd78a2c0e4dd4d19de18,
#endif
        code_objects_39beb691296fd88f427e4788da56395a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_331c2c5ef4883937fc15538bba700653,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__25_with_claims(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__25_with_claims,
        mod_consts.const_str_plain_with_claims,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9a0159ee386409d654743268f21c538,
#endif
        code_objects_d3bac492e690ce10f7bf1fe6f3402674,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_ee2de9bf6375fed2f29a8350ec367b6d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__26_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__26_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cfb0306e344290bb0f3e1ff6ea2de985,
#endif
        code_objects_5eda032b705b68d5f4508e400cbec875,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__27_valid(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_valid,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47d21d1385c22f1e9193d668bf2de747,
#endif
        code_objects_1bc1ecadd010620a5672b847b4ffbac2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_3fe526209dbb356270cb75e9b181c349,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__28__make_jwt_for_audience(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__28__make_jwt_for_audience,
        mod_consts.const_str_plain__make_jwt_for_audience,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca2df33f9fda9a7f48aabb56566fc2df,
#endif
        code_objects_51eea6050e9f68a1ff86382e128fc208,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_30a504b4a001a18fa0843a6592366d1d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__29__get_jwt_for_audience(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__29__get_jwt_for_audience,
        mod_consts.const_str_plain__get_jwt_for_audience,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6f06bd8e01503a76658f7b0f9edc5a2a,
#endif
        code_objects_7bfb9b8bb0cb33a42cc2865d244da553,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_e9cf6a52c2b6fe767b4481b3007d851b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__2__decode_jwt_segment(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__2__decode_jwt_segment,
        mod_consts.const_str_plain__decode_jwt_segment,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e96e3e22a4e629e638cca873b6858c7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_57e2e645a92d0ae6278b1fcb26344e8e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__30_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__30_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e762543aad737606f88f93df78eba4c4,
#endif
        code_objects_7b5c4fd314cc743039e9388ef2912b2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_c49a760ad76664fc41e88c9d2f13c805,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__31_before_request(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__31_before_request,
        mod_consts.const_str_plain_before_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dfec8fd9bb0d653c420fdf26b2b82229,
#endif
        code_objects_b93b7afbf6e35ff6779ac9b4ba5d7085,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_884912dcc09adf6961dc7dd2be2ef4a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__32_sign_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__32_sign_bytes,
        mod_consts.const_str_plain_sign_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1542da286df2601fc966d0cbe058b7ed,
#endif
        code_objects_7f4ba1f749ba970f4a946f38bf1a2b9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__33_signer_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__33_signer_email,
        mod_consts.const_str_plain_signer_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89a7d43cd7f9a3496d46437e0399b739,
#endif
        code_objects_70d451d282dfe75283901610e87d4b88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__34_signer(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__34_signer,
        mod_consts.const_str_plain_signer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ef8debbabce071b55febaaac2c1d123f,
#endif
        code_objects_23612047653659f51d9d845827278b27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__3__unverified_decode(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__3__unverified_decode,
        mod_consts.const_str_plain__unverified_decode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_22b3abff46272ee1fcea2d7bfdb0ad53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_8bb56471835749d983475a92dcd22337,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__4_decode_header(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__4_decode_header,
        mod_consts.const_str_plain_decode_header,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_519eb6728159cf39510f03e584d03d25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_5238fb3b57ebe43d78f807224c5cfadb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__5__verify_iat_and_exp(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__5__verify_iat_and_exp,
        mod_consts.const_str_plain__verify_iat_and_exp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e9419fee959197cdacd81e6715ffda16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_119169f1810f53a85c16a93d252f3dbd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__6_decode(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__6_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42f51f054e9506999ffcc240d7cfc826,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_dcaaacab52afa99c94fbf63c4df8899c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__7___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_078dc1c144aa714df6ef9344ad96e0b9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_37deeba6f439e03782e4883f5d3e66cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__8__from_signer_and_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__8__from_signer_and_info,
        mod_consts.const_str_plain__from_signer_and_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea68e244f7a2343015e41deffd8e8155,
#endif
        code_objects_8ef58fc6ab94332e30f04cb3053412a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_5bd7cf65e2f301ce401726104756aaa2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$jwt$$$function__9_from_service_account_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$jwt$$$function__9_from_service_account_info,
        mod_consts.const_str_plain_from_service_account_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_385fd69348121e7e89560dc227484d21,
#endif
        code_objects_a47185d13fc804f83689a2064bd26e8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$jwt,
        mod_consts.const_str_digest_1d9d9b26cd0b68b0e0511a0d17ff0657,
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

static function_impl_code const function_table_google$auth$jwt[] = {
impl_google$auth$jwt$$$function__1_encode,
impl_google$auth$jwt$$$function__2__decode_jwt_segment,
impl_google$auth$jwt$$$function__3__unverified_decode,
impl_google$auth$jwt$$$function__4_decode_header,
impl_google$auth$jwt$$$function__5__verify_iat_and_exp,
impl_google$auth$jwt$$$function__6_decode,
impl_google$auth$jwt$$$function__7___init__,
impl_google$auth$jwt$$$function__8__from_signer_and_info,
impl_google$auth$jwt$$$function__9_from_service_account_info,
impl_google$auth$jwt$$$function__10_from_service_account_file,
impl_google$auth$jwt$$$function__11_from_signing_credentials,
impl_google$auth$jwt$$$function__12_with_claims,
impl_google$auth$jwt$$$function__13_with_quota_project,
impl_google$auth$jwt$$$function__14__make_jwt,
impl_google$auth$jwt$$$function__15_refresh,
impl_google$auth$jwt$$$function__16_sign_bytes,
impl_google$auth$jwt$$$function__17_signer_email,
impl_google$auth$jwt$$$function__18_signer,
impl_google$auth$jwt$$$function__19_additional_claims,
impl_google$auth$jwt$$$function__20___init__,
impl_google$auth$jwt$$$function__21__from_signer_and_info,
impl_google$auth$jwt$$$function__22_from_service_account_info,
impl_google$auth$jwt$$$function__23_from_service_account_file,
impl_google$auth$jwt$$$function__24_from_signing_credentials,
impl_google$auth$jwt$$$function__25_with_claims,
impl_google$auth$jwt$$$function__26_with_quota_project,
impl_google$auth$jwt$$$function__28__make_jwt_for_audience,
impl_google$auth$jwt$$$function__29__get_jwt_for_audience,
impl_google$auth$jwt$$$function__30_refresh,
impl_google$auth$jwt$$$function__31_before_request,
impl_google$auth$jwt$$$function__32_sign_bytes,
impl_google$auth$jwt$$$function__33_signer_email,
impl_google$auth$jwt$$$function__34_signer,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$jwt);
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
        module_google$auth$jwt,
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
        function_table_google$auth$jwt,
        sizeof(function_table_google$auth$jwt) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.jwt";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$jwt(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$jwt");

    // Store the module for future use.
    module_google$auth$jwt = module;

    moduledict_google$auth$jwt = MODULE_DICT(module_google$auth$jwt);

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
        PRINT_STRING("google$auth$jwt: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$jwt: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$jwt: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.jwt" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$jwt\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$jwt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$jwt,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$jwt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$jwt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$jwt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$jwt);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$jwt);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_google$auth$jwt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$auth$jwt$$$class__1_Credentials_320 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$class__1_Credentials_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_google$auth$jwt$$$class__2_OnDemandCredentials_593 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c31147e37901f02e4a7fbf1dd4eea0c2;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$jwt = MAKE_MODULE_FRAME(code_objects_b7ba44530122eace22e61184564f88f2, module_google$auth$jwt);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt);
assert(Py_REFCNT(frame_frame_google$auth$jwt) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$jwt$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$jwt$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Mapping_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 44;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Mapping);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Mapping_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 47;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_5);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 43;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$jwt->m_frame)) {
        frame_frame_google$auth$jwt->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 48;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 49;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 50;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_urllib;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 51;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__cache_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 53;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain__cache,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__cache);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__cache, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 54;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain__service_account_info_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 55;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain__service_account_info,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__service_account_info);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__service_account_info, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_crypt_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 56;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain_crypt,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_crypt);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_crypt, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 57;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_fd1aa31752a6af48d1df839b9d506d5e;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = Py_None;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 58;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_15);
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$auth$jwt;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_es_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_google$auth$jwt->m_frame.f_lineno = 61;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$jwt,
        mod_consts.const_str_plain_es,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_es);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_es, tmp_assign_source_16);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_es, tmp_assign_source_17);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 60;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$jwt->m_frame)) {
        frame_frame_google$auth$jwt->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_int_pos_3600;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_10;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_RS256;
tmp_expression_value_1 = module_var_accessor_google$auth$jwt$crypt(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_crypt);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_RSAVerifier);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
tmp_assign_source_20 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_frozenset_6eca77a106d4d7727a0b1d306c40c05c;
UPDATE_STRING_DICT0(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__CRYPTOGRAPHY_BASED_ALGORITHMS, tmp_assign_source_21);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = module_var_accessor_google$auth$jwt$es(tstate);
if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto frame_exception_exit_1;
}
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_2 = module_var_accessor_google$auth$jwt$es(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_EsVerifier);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_google$auth$jwt$_ALGORITHM_TO_VERIFIER_CLASS(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_ES256;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_expression_value_3 = module_var_accessor_google$auth$jwt$es(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_EsVerifier);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_2 = module_var_accessor_google$auth$jwt$_ALGORITHM_TO_VERIFIER_CLASS(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ALGORITHM_TO_VERIFIER_CLASS);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_ES384;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_google$auth$jwt$$$function__1_encode(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_encode, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_google$auth$jwt$$$function__2__decode_jwt_segment(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__decode_jwt_segment, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_google$auth$jwt$$$function__3__unverified_decode(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__unverified_decode, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_google$auth$jwt$$$function__4_decode_header(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_header, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_0_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_26 = MAKE_FUNCTION_google$auth$jwt$$$function__5__verify_iat_and_exp(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_iat_and_exp, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_true_none_int_0_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_27 = MAKE_FUNCTION_google$auth$jwt$$$function__6_decode(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_decode, tmp_assign_source_27);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_auth);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_1);
tmp_expression_value_9 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto tuple_build_exception_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_auth);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_28);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_5;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Credentials;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$jwt->m_frame.f_lineno = 320;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_5;
}
frame_frame_google$auth$jwt->m_frame.f_lineno = 320;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 320;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
branch_end_4:;
{
PyObject *tmp_assign_source_34;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$jwt$$$class__1_Credentials_320 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff7ab06ae7531c603795c894817357d3;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_0ff273d8ff860c64875490d0ad223000;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_319;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2 = MAKE_CLASS_FRAME(tstate, code_objects_85178ff261f3f2d1f94198f211f7b8d2, module_google$auth$jwt, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$class__1_Credentials_2);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$class__1_Credentials_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = Py_None;
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = module_var_accessor_google$auth$jwt$_DEFAULT_TOKEN_LIFETIME_SECS(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_defaults_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__7___init__(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain_classmethod);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$jwt$$$function__8__from_signer_and_info(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 408;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__from_signer_and_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain_classmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$jwt$$$function__9_from_service_account_info(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 428;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_from_service_account_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain_classmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$jwt$$$function__10_from_service_account_file(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 446;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_from_service_account_file, tmp_dictset_value);
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, const_str_plain_classmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$auth$jwt$$$function__11_from_signing_credentials(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 463;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_from_signing_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__12_with_claims(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_with_claims, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_6;
tmp_expression_value_16 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_19 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_google);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 526;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$jwt$$$function__13_with_quota_project(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 526;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__14__make_jwt(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__make_jwt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__15_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_8;
tmp_expression_value_20 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_23 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_google);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 572;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$jwt$$$function__16_sign_bytes(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 572;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_sign_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_11;
tmp_called_value_10 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_24 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_27 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_google);

if (tmp_expression_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_27 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_called_value_12);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_called_value_12);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_called_value_12);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_called_value_12);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 577;
tmp_called_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_11 = MAKE_FUNCTION_google$auth$jwt$$$function__17_signer_email(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 577;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 577;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 576;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_signer_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_14;
tmp_called_value_13 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_28 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_31 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_google);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_called_value_15);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_called_value_15);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_called_value_15);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_called_value_15);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 582;
tmp_called_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_14 = MAKE_FUNCTION_google$auth$jwt$$$function__18_signer(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 582;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 582;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 581;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_signer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_15;
tmp_called_value_16 = PyObject_GetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_15 = MAKE_FUNCTION_google$auth$jwt$$$function__19_additional_claims(tstate);

frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame.f_lineno = 586;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain_additional_claims, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$class__1_Credentials_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$class__1_Credentials_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$jwt$$$class__1_Credentials_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_b8095ada59ef9a662da813362f58864f_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__1_Credentials_320, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_Credentials;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_google$auth$jwt$$$class__1_Credentials_320;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$jwt->m_frame.f_lineno = 320;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto try_except_handler_7;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_35);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_34 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_google$auth$jwt$$$class__1_Credentials_320);
locals_google$auth$jwt$$$class__1_Credentials_320 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$jwt$$$class__1_Credentials_320);
locals_google$auth$jwt$$$class__1_Credentials_320 = NULL;
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
exception_lineno = 320;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_34);
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_auth);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_6);
tmp_expression_value_37 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;

    goto tuple_build_exception_4;
}
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_auth);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto tuple_build_exception_4;
}
tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto tuple_build_exception_4;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_36, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_assign_source_36);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_38 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_OnDemandCredentials;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$jwt->m_frame.f_lineno = 593;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_8;
}
frame_frame_google$auth$jwt->m_frame.f_lineno = 593;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 593;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
branch_end_7:;
{
PyObject *tmp_assign_source_42;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$jwt$$$class__2_OnDemandCredentials_593 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff7ab06ae7531c603795c894817357d3;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_cee2a5a7ddb896a8d7c32f0ae5214f09;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_OnDemandCredentials;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_592;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3 = MAKE_CLASS_FRAME(tstate, code_objects_fb8378cce349f3d091ea4412875e31af, module_google$auth$jwt, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3);
assert(Py_REFCNT(frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = Py_None;
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);

if (tmp_tuple_element_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_9 = module_var_accessor_google$auth$jwt$_DEFAULT_TOKEN_LIFETIME_SECS(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_2 = "c";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_defaults_6, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);

if (tmp_tuple_element_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_9 = module_var_accessor_google$auth$jwt$_DEFAULT_MAX_CACHE_SIZE(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_MAX_CACHE_SIZE);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 619;
type_description_2 = "c";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_9);
tmp_tuple_element_9 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 3, tmp_tuple_element_9);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__20___init__(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
tmp_called_value_19 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain_classmethod);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_16 = MAKE_FUNCTION_google$auth$jwt$$$function__21__from_signer_and_info(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 650;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__from_signer_and_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
tmp_called_value_20 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain_classmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_17 = MAKE_FUNCTION_google$auth$jwt$$$function__22_from_service_account_info(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 670;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_from_service_account_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_18;
tmp_called_value_21 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain_classmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_18 = MAKE_FUNCTION_google$auth$jwt$$$function__23_from_service_account_file(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 688;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_from_service_account_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_19;
tmp_called_value_22 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, const_str_plain_classmethod);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_19 = MAKE_FUNCTION_google$auth$jwt$$$function__24_from_signing_credentials(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 705;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_from_signing_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_7);

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__25_with_claims(tstate, tmp_defaults_7);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_with_claims, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 733;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_44;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_args_element_value_21;
tmp_expression_value_44 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_44 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_47 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_google);

if (tmp_expression_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_47 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 760;
tmp_called_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_21 = MAKE_FUNCTION_google$auth$jwt$$$function__26_with_quota_project(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 760;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 760;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_22;
tmp_called_value_25 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_property);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_22 = MAKE_FUNCTION_google$auth$jwt$$$function__27_valid(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 771;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_valid, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 772;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__28__make_jwt_for_audience(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__make_jwt_for_audience, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 780;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__29__get_jwt_for_audience(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__get_jwt_for_audience, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__30_refresh(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$jwt$$$function__31_before_request(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_before_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 844;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_48;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_element_value_24;
tmp_expression_value_48 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_48 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_51 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_google);

if (tmp_expression_value_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_51 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 865;
tmp_called_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_24 = MAKE_FUNCTION_google$auth$jwt$$$function__32_sign_bytes(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 865;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 865;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_sign_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_29;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_element_value_27;
tmp_called_value_28 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_property);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_52 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_52 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_55 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_google);

if (tmp_expression_value_55 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_55 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_called_value_30);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_55);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_called_value_30);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_called_value_30);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);
Py_DECREF(tmp_called_value_30);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 870;
tmp_called_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_27 = MAKE_FUNCTION_google$auth$jwt$$$function__33_signer_email(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 870;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 870;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 869;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_signer_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_value_32;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_56;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_element_value_30;
tmp_called_value_31 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_property);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_56 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_56 = module_var_accessor_google$auth$jwt$_helpers(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_31);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_59 = PyObject_GetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_google);

if (tmp_expression_value_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_59 = module_var_accessor_google$auth$jwt$google(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_31);
Py_DECREF(tmp_called_value_33);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_auth);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_expression_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);
Py_DECREF(tmp_called_value_33);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_credentials);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_expression_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);
Py_DECREF(tmp_called_value_33);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_Signing);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);
Py_DECREF(tmp_called_value_33);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 875;
tmp_called_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_30 = MAKE_FUNCTION_google$auth$jwt$$$function__34_signer(tstate);

frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 875;
tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 875;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame.f_lineno = 874;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 874;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain_signer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$jwt$$$class__2_OnDemandCredentials_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_3b75f26ec2e160770f26b022b8741237_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_34;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_34 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_OnDemandCredentials;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_google$auth$jwt$$$class__2_OnDemandCredentials_593;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$jwt->m_frame.f_lineno = 593;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;

    goto try_except_handler_10;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_43);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_42 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593);
locals_google$auth$jwt$$$class__2_OnDemandCredentials_593 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$jwt$$$class__2_OnDemandCredentials_593);
locals_google$auth$jwt$$$class__2_OnDemandCredentials_593 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 593;
goto try_except_handler_8;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$jwt, (Nuitka_StringObject *)mod_consts.const_str_plain_OnDemandCredentials, tmp_assign_source_42);
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$jwt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$jwt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$jwt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$jwt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$jwt", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.jwt" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$jwt);
    return module_google$auth$jwt;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$jwt, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$jwt", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

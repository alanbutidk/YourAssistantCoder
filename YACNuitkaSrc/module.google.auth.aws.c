/* Generated code for Python module 'google$auth$aws'
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



/* The "module_google$auth$aws" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$aws;
PyDictObject *moduledict_google$auth$aws;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__region_name;
PyObject *const_str_digest_1bcd82c34922ba9bce62bee8b37afc4b;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlparse;
PyObject *const_str_plain_urljoin;
PyObject *const_str_plain_hostname;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain_https;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_InvalidResource;
PyObject *const_tuple_str_digest_e83b30ccffb5220c6f35bdbad4b6a637_tuple;
PyObject *const_str_plain__generate_authentication_header_map;
PyObject *const_str_plain__get_canonical_querystring;
PyObject *const_str_plain_query;
PyObject *const_tuple_585d2f05b9704c19ddcd6f3d57888cdd_tuple;
PyObject *const_str_plain_Authorization;
PyObject *const_tuple_str_plain_authorization_header_tuple;
PyObject *const_str_plain_host;
PyObject *const_str_plain_amz_date;
PyObject *const_tuple_str_plain_amz_date_tuple;
PyObject *const_str_plain__AWS_DATE_HEADER;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_session_token;
PyObject *const_str_plain__AWS_SECURITY_TOKEN_HEADER;
PyObject *const_str_plain_url;
PyObject *const_str_plain_method;
PyObject *const_str_plain_data;
PyObject *const_str_digest_7d7b40f3298487ab2b732e6d2273b400;
PyObject *const_str_plain_parse_qs;
PyObject *const_str_plain_quote;
PyObject *const_dict_110b48a474b410fcae89a19737f0c571;
PyObject *const_str_plain_querystring_encoded_map;
PyObject *const_str_plain_append;
PyObject *const_str_plain_sort;
PyObject *const_str_plain_querystring_encoded_pairs;
PyObject *const_str_digest_52d99877edb3108f4f38d3f9473b9b9b;
PyObject *const_str_chr_38;
PyObject *const_str_digest_c3af2c51f38d8934606cc7197521315d;
PyObject *const_str_plain_hmac;
PyObject *const_str_plain_new;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_sha256;
PyObject *const_str_plain_digest;
PyObject *const_str_digest_4b661685eb2a43d44d01ee322c34777f;
PyObject *const_str_plain__sign;
PyObject *const_str_plain_AWS4;
PyObject *const_str_plain_aws4_request;
PyObject *const_str_digest_a609b022030a3082fc71545ffa049143;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_utcnow;
PyObject *const_str_plain_strftime;
PyObject *const_tuple_str_digest_bece2bd3c5a82595198431f08195a192_tuple;
PyObject *const_tuple_str_digest_3815d7b0380c036a6bbd263cd8173bc1_tuple;
PyObject *const_str_plain_full_headers;
PyObject *const_str_plain_date;
PyObject *const_str_digest_4eabbfbbdbce5ed29b9d8dc3c39a5d46;
PyObject *const_str_plain_canonical_headers;
PyObject *const_str_chr_59;
PyObject *const_str_plain_hexdigest;
PyObject *const_str_digest_9ad940bdd42e8c0f877f7bc42c484b5b;
PyObject *const_str_digest_68563df8096b3070ca948a96a4033220;
PyObject *const_str_plain__AWS_REQUEST_TYPE;
PyObject *const_str_digest_87be9191f756807991d682fcb7beb241;
PyObject *const_str_plain__AWS_ALGORITHM;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain__get_signing_key;
PyObject *const_str_plain_secret_access_key;
PyObject *const_str_digest_094282026a91cc14732554a0586756f4;
PyObject *const_str_plain_access_key_id;
PyObject *const_str_plain_authorization_header;
PyObject *const_str_digest_b0b04ceddbb7c6e4281a81e193c2ee1b;
PyObject *const_str_digest_d94e7939f2618d46aee897b8cad73faa;
PyObject *const_str_digest_f7e2c81ca3ebd5a254ee1141ccda99ca;
PyObject *const_tuple_str_plain_region_url_tuple;
PyObject *const_str_plain__region_url;
PyObject *const_tuple_str_plain_url_tuple;
PyObject *const_str_plain__security_credentials_url;
PyObject *const_tuple_str_plain_imdsv2_session_token_url_tuple;
PyObject *const_str_plain__imdsv2_session_token_url;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_AWS_ACCESS_KEY_ID;
PyObject *const_str_plain_AWS_SECRET_ACCESS_KEY;
PyObject *const_str_plain_AWS_SESSION_TOKEN;
PyObject *const_str_plain_AwsSecurityCredentials;
PyObject *const_str_plain__get_imdsv2_session_token;
PyObject *const_str_plain__get_metadata_role_name;
PyObject *const_str_plain__get_metadata_security_credentials;
PyObject *const_tuple_str_plain_AccessKeyId_tuple;
PyObject *const_tuple_str_plain_SecretAccessKey_tuple;
PyObject *const_tuple_str_plain_Token_tuple;
PyObject *const_str_plain_AWS_REGION;
PyObject *const_str_plain_AWS_DEFAULT_REGION;
PyObject *const_str_plain_RefreshError;
PyObject *const_tuple_str_digest_5943970e14eccb15a07d6ab30148e6fb_tuple;
PyObject *const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e;
PyObject *const_str_plain_GET;
PyObject *const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_status;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_OK;
PyObject *const_str_digest_42ec356c71b83a15b86e610c746c8860;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_digest_0e47daa4c0bcfd8c7e0303654140765c;
PyObject *const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS;
PyObject *const_str_plain_PUT;
PyObject *const_str_digest_c59a09c312ef10dcfb9647347eb84d6d;
PyObject *const_str_digest_fd005b348a64593f09cc040bfd9806ee;
PyObject *const_str_digest_4da2e9b1e490396712a88f17f26d9d2e;
PyObject *const_str_plain_json;
PyObject *const_str_plain_loads;
PyObject *const_str_digest_783389783839766daf072303a8754953;
PyObject *const_tuple_str_digest_1067f26c6bf3b4df4feaa45aac601dbf_tuple;
PyObject *const_str_digest_b49a318721a2a3959e6414d18e3c8e13;
PyObject *const_str_digest_cea96adb25b9ddac9c29d7f0d9eb1bc7;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_audience;
PyObject *const_str_plain_subject_token_type;
PyObject *const_str_plain_token_url;
PyObject *const_str_plain_credential_source;
PyObject *const_str_plain_InvalidValue;
PyObject *const_tuple_str_digest_657774c19614cce5955dfb9fa009ba39_tuple;
PyObject *const_tuple_str_digest_782dab3386fd2d95f3ac238fdf3e90ed_tuple;
PyObject *const_str_plain__aws_security_credentials_supplier;
PyObject *const_str_digest_c70cb11b4463b2de2902969c4333d5fc;
PyObject *const_str_plain__cred_verification_url;
PyObject *const_tuple_str_plain_environment_id_tuple;
PyObject *const_str_plain__DefaultAwsSecurityCredentialsSupplier;
PyObject *const_tuple_str_plain_regional_cred_verification_url_tuple;
PyObject *const_str_plain_re;
PyObject *const_str_plain_match;
PyObject *const_str_digest_5959ff037b3ad84868bb89065e64980a;
PyObject *const_str_plain_groups;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain_aws;
PyObject *const_tuple_str_digest_3debe8b6b1a78bdca25e1c11d9b9efae_tuple;
PyObject *const_str_digest_3a9a0e13841f11de235984bd1d99f0fb;
PyObject *const_str_plain__target_resource;
PyObject *const_str_plain__request_signer;
PyObject *const_str_digest_9e8031b02e0997eb525f7cdece48fe0e;
PyObject *const_str_plain_get_aws_region;
PyObject *const_str_plain__supplier_context;
PyObject *const_str_plain__region;
PyObject *const_str_plain_RequestSigner;
PyObject *const_str_plain_get_aws_security_credentials;
PyObject *const_str_plain_get_request_options;
PyObject *const_str_plain_replace;
PyObject *const_str_digest_1ba278cf5508f02581f5cd5f4867e87a;
PyObject *const_str_plain_POST;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_digest_60b4bc1bf5c25a1d262848c7ea196703;
PyObject *const_tuple_str_plain_method_tuple;
PyObject *const_str_plain_key;
PyObject *const_str_plain_value;
PyObject *const_str_plain_dumps;
PyObject *const_dict_cc4bbbe542a9abe47a32e1b7fea52246;
PyObject *const_str_digest_26a6155808afeed9ffef7910eb05c1ed;
PyObject *const_str_plain__create_default_metrics_options;
PyObject *const_str_plain_source;
PyObject *const_str_plain__has_custom_supplier;
PyObject *const_str_plain_programmatic;
PyObject *const_str_plain__credential_source;
PyObject *const_str_plain__constructor_args;
PyObject *const_str_plain_update;
PyObject *const_str_plain_aws_security_credentials_supplier;
PyObject *const_tuple_str_plain_aws_security_credentials_supplier_tuple;
PyObject *const_str_plain_from_info;
PyObject *const_str_digest_c7983d2f447fa559b6b0c313ebcf99d2;
PyObject *const_str_plain_from_file;
PyObject *const_str_digest_e002fa3d0754cb34b132d37bb270838e;
PyObject *const_str_digest_4ba040d3eeea161027510c0216b6dd1c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_plain_os;
PyObject *const_str_plain_posixpath;
PyObject *const_str_plain_Optional;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urljoin_tuple;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_external_account_tuple;
PyObject *const_str_plain_external_account;
PyObject *const_str_digest_d28e4629a1aeceb4fbcf9cfa98449559;
PyObject *const_str_digest_e864059fd838b1820c6c2e76d5ce67b7;
PyObject *const_str_digest_98cccf2c0b61e0129d25c8a8430d01b3;
PyObject *const_str_digest_71d14ce0b6a971993b0e8dcc664d090e;
PyObject *const_str_plain_300;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a16d59363d06b784339ff26fae0f137e;
PyObject *const_str_digest_8a8e7667a2354b778d6c73cb2300f20e;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_76;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_d78345715e142fad6ccd7ba8257d55ba;
PyObject *const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec;
PyObject *const_tuple_str_plain__region_name_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_4b4bb7e4c1b9f00f64525774cbef99c6;
PyObject *const_int_pos_348;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_tuple_str_plain_AwsSecurityCredentialsSupplier_tuple_empty_tuple;
PyObject *const_str_digest_d5f6d1281d82c2b0079b805ce666942f;
PyObject *const_str_plain_AwsSecurityCredentialsSupplier;
PyObject *const_int_pos_362;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367;
PyObject *const_str_digest_f414ac400ab24de3442891e76f239bfd;
PyObject *const_str_digest_db6a6564750521d4497a674f4ee82535;
PyObject *const_int_pos_409;
PyObject *const_str_digest_1f28f763b89e4482a9b08d3a9954061e;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_digest_6bccfab7d545027bef1abf5cdb3d065b;
PyObject *const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d;
PyObject *const_str_digest_1ffadb64cef0e0e834162b68ead64512;
PyObject *const_str_digest_da84bccbd0ea57ee56641432522619b5;
PyObject *const_str_digest_bac16f44b7478a9e1a33cdb819d87002;
PyObject *const_tuple_32898a605de57dac0e57ddbf51594a1d_tuple;
PyObject *const_str_digest_a460e9a77c3dc7456bc44809e9390149;
PyObject *const_int_pos_607;
PyObject *const_str_plain__DEFAULT_TOKEN_URL;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_plain_retrieve_subject_token;
PyObject *const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8;
PyObject *const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469;
PyObject *const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1;
PyObject *const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1;
PyObject *const_str_digest_235941431ecb9ca24eb20b88770edeba;
PyObject *const_str_digest_987cb2208d197b62244cc44a9c8137db;
PyObject *const_tuple_60cff2da0acbc150447c4045dd9f923f_tuple;
PyObject *const_str_digest_dd7b6424476185c24af040bb7b009030;
PyObject *const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_e89ad65ffbbceb0871e98f743d90d6cd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_region_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_credential_source_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple;
PyObject *const_tuple_f7e3137f6f553435b64289e28b2be4de_tuple;
PyObject *const_tuple_aec911ef04ad8dc564b6489b5248a490_tuple;
PyObject *const_tuple_9fea2b3c95507ca6ea158214e1b20650_tuple;
PyObject *const_tuple_63cd84001aeb2cba35357c4bc1ef95bf_tuple;
PyObject *const_tuple_36857c5765b845b599c8a2f0cafb750a_tuple;
PyObject *const_tuple_7b0f29efade9d9047634d7cce82d9f96_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_key_str_plain_msg_tuple;
PyObject *const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple;
PyObject *const_tuple_37d293c334955b777011e1d2fd892371_tuple;
PyObject *const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple;
PyObject *const_tuple_4f8f064f2d17a5a1b341a2aad7eb7840_tuple;
PyObject *const_tuple_94d9948312e07daa9cd14244f9d470b9_tuple;
PyObject *const_tuple_9aedc46d7e61d3383786b8f4076cf741_tuple;
PyObject *const_tuple_3f9285e667ba658980a04b67e2810b38_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[271];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.aws"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__region_name);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bcd82c34922ba9bce62bee8b37afc4b);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_https);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidResource);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e83b30ccffb5220c6f35bdbad4b6a637_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_authentication_header_map);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_canonical_querystring);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_585d2f05b9704c19ddcd6f3d57888cdd_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_authorization_header_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_amz_date);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_amz_date_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_DATE_HEADER);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_token);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d7b40f3298487ab2b732e6d2273b400);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_qs);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_110b48a474b410fcae89a19737f0c571);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_querystring_encoded_map);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_querystring_encoded_pairs);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_52d99877edb3108f4f38d3f9473b9b9b);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_chr_38);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3af2c51f38d8934606cc7197521315d);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_hmac);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b661685eb2a43d44d01ee322c34777f);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__sign);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS4);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_aws4_request);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_a609b022030a3082fc71545ffa049143);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_strftime);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bece2bd3c5a82595198431f08195a192_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3815d7b0380c036a6bbd263cd8173bc1_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_full_headers);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_date);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_4eabbfbbdbce5ed29b9d8dc3c39a5d46);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_canonical_headers);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_chr_59);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ad940bdd42e8c0f877f7bc42c484b5b);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_68563df8096b3070ca948a96a4033220);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_REQUEST_TYPE);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_87be9191f756807991d682fcb7beb241);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_ALGORITHM);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_signing_key);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_secret_access_key);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_094282026a91cc14732554a0586756f4);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_access_key_id);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_authorization_header);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0b04ceddbb7c6e4281a81e193c2ee1b);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_d94e7939f2618d46aee897b8cad73faa);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7e2c81ca3ebd5a254ee1141ccda99ca);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_region_url_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__region_url);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__security_credentials_url);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_imdsv2_session_token_url_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__imdsv2_session_token_url);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_ACCESS_KEY_ID);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SESSION_TOKEN);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_AwsSecurityCredentials);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_imdsv2_session_token);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_role_name);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_security_credentials);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AccessKeyId_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SecretAccessKey_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_REGION);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_DEFAULT_REGION);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5943970e14eccb15a07d6ab30148e6fb_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_42ec356c71b83a15b86e610c746c8860);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e47daa4c0bcfd8c7e0303654140765c);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_PUT);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_c59a09c312ef10dcfb9647347eb84d6d);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd005b348a64593f09cc040bfd9806ee);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_4da2e9b1e490396712a88f17f26d9d2e);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_783389783839766daf072303a8754953);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1067f26c6bf3b4df4feaa45aac601dbf_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_b49a318721a2a3959e6414d18e3c8e13);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_cea96adb25b9ddac9c29d7f0d9eb1bc7);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_url);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_657774c19614cce5955dfb9fa009ba39_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_782dab3386fd2d95f3ac238fdf3e90ed_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__aws_security_credentials_supplier);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain__cred_verification_url);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_id_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regional_cred_verification_url_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_5959ff037b3ad84868bb89065e64980a);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_groups);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_aws);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3debe8b6b1a78bdca25e1c11d9b9efae_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a9a0e13841f11de235984bd1d99f0fb);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__target_resource);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__request_signer);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e8031b02e0997eb525f7cdece48fe0e);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_aws_region);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__supplier_context);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain__region);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestSigner);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_aws_security_credentials);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_request_options);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ba278cf5508f02581f5cd5f4867e87a);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_60b4bc1bf5c25a1d262848c7ea196703);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_cc4bbbe542a9abe47a32e1b7fea52246);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_26a6155808afeed9ffef7910eb05c1ed);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_default_metrics_options);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_source);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_custom_supplier);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_programmatic);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain__constructor_args);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_aws_security_credentials_supplier);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aws_security_credentials_supplier_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_info);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7983d2f447fa559b6b0c313ebcf99d2);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_file);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_e002fa3d0754cb34b132d37bb270838e);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ba040d3eeea161027510c0216b6dd1c);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_posixpath);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_external_account);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_d28e4629a1aeceb4fbcf9cfa98449559);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_e864059fd838b1820c6c2e76d5ce67b7);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_98cccf2c0b61e0129d25c8a8430d01b3);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_71d14ce0b6a971993b0e8dcc664d090e);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_300);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a8e7667a2354b778d6c73cb2300f20e);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_int_pos_76);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_d78345715e142fad6ccd7ba8257d55ba);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__region_name_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b4bb7e4c1b9f00f64525774cbef99c6);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_int_pos_348);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AwsSecurityCredentialsSupplier_tuple_empty_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5f6d1281d82c2b0079b805ce666942f);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_int_pos_362);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_f414ac400ab24de3442891e76f239bfd);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_db6a6564750521d4497a674f4ee82535);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_int_pos_409);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f28f763b89e4482a9b08d3a9954061e);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bccfab7d545027bef1abf5cdb3d065b);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ffadb64cef0e0e834162b68ead64512);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_da84bccbd0ea57ee56641432522619b5);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_bac16f44b7478a9e1a33cdb819d87002);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_32898a605de57dac0e57ddbf51594a1d_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_a460e9a77c3dc7456bc44809e9390149);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_int_pos_607);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve_subject_token);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_60cff2da0acbc150447c4045dd9f923f_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd7b6424476185c24af040bb7b009030);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_e89ad65ffbbceb0871e98f743d90d6cd_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_region_name_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_credential_source_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_f7e3137f6f553435b64289e28b2be4de_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_aec911ef04ad8dc564b6489b5248a490_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_9fea2b3c95507ca6ea158214e1b20650_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_63cd84001aeb2cba35357c4bc1ef95bf_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_36857c5765b845b599c8a2f0cafb750a_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_7b0f29efade9d9047634d7cce82d9f96_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_msg_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_37d293c334955b777011e1d2fd892371_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_4f8f064f2d17a5a1b341a2aad7eb7840_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_94d9948312e07daa9cd14244f9d470b9_tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_9aedc46d7e61d3383786b8f4076cf741_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_3f9285e667ba658980a04b67e2810b38_tuple);
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
void checkModuleConstants_google$auth$aws(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__region_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__region_name);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bcd82c34922ba9bce62bee8b37afc4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bcd82c34922ba9bce62bee8b37afc4b);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urljoin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_https));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_https);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidResource);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e83b30ccffb5220c6f35bdbad4b6a637_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e83b30ccffb5220c6f35bdbad4b6a637_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_authentication_header_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generate_authentication_header_map);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_canonical_querystring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_canonical_querystring);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_585d2f05b9704c19ddcd6f3d57888cdd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_585d2f05b9704c19ddcd6f3d57888cdd_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_authorization_header_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_authorization_header_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_host);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_amz_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_amz_date);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_amz_date_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_amz_date_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_DATE_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AWS_DATE_HEADER);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_token);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d7b40f3298487ab2b732e6d2273b400));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d7b40f3298487ab2b732e6d2273b400);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_qs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_qs);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_110b48a474b410fcae89a19737f0c571));
CHECK_OBJECT_DEEP(mod_consts.const_dict_110b48a474b410fcae89a19737f0c571);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_querystring_encoded_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_querystring_encoded_map);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_querystring_encoded_pairs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_querystring_encoded_pairs);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_52d99877edb3108f4f38d3f9473b9b9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52d99877edb3108f4f38d3f9473b9b9b);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_chr_38));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_38);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3af2c51f38d8934606cc7197521315d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3af2c51f38d8934606cc7197521315d);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_hmac));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hmac);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_digest);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b661685eb2a43d44d01ee322c34777f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b661685eb2a43d44d01ee322c34777f);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sign);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS4);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_aws4_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aws4_request);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_a609b022030a3082fc71545ffa049143));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a609b022030a3082fc71545ffa049143);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_strftime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strftime);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_bece2bd3c5a82595198431f08195a192_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_bece2bd3c5a82595198431f08195a192_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3815d7b0380c036a6bbd263cd8173bc1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3815d7b0380c036a6bbd263cd8173bc1_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_full_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full_headers);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_date);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_4eabbfbbdbce5ed29b9d8dc3c39a5d46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4eabbfbbdbce5ed29b9d8dc3c39a5d46);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_canonical_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_canonical_headers);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_chr_59));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_59);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hexdigest);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ad940bdd42e8c0f877f7bc42c484b5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ad940bdd42e8c0f877f7bc42c484b5b);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_68563df8096b3070ca948a96a4033220));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68563df8096b3070ca948a96a4033220);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_REQUEST_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AWS_REQUEST_TYPE);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_87be9191f756807991d682fcb7beb241));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87be9191f756807991d682fcb7beb241);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__AWS_ALGORITHM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AWS_ALGORITHM);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_signing_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_signing_key);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_secret_access_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secret_access_key);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_094282026a91cc14732554a0586756f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_094282026a91cc14732554a0586756f4);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_access_key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_access_key_id);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_authorization_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authorization_header);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0b04ceddbb7c6e4281a81e193c2ee1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0b04ceddbb7c6e4281a81e193c2ee1b);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_d94e7939f2618d46aee897b8cad73faa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d94e7939f2618d46aee897b8cad73faa);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7e2c81ca3ebd5a254ee1141ccda99ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7e2c81ca3ebd5a254ee1141ccda99ca);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_region_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_region_url_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__region_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__region_url);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__security_credentials_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__security_credentials_url);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_imdsv2_session_token_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_imdsv2_session_token_url_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__imdsv2_session_token_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__imdsv2_session_token_url);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_ACCESS_KEY_ID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_ACCESS_KEY_ID);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SESSION_TOKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_SESSION_TOKEN);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_AwsSecurityCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AwsSecurityCredentials);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_imdsv2_session_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_imdsv2_session_token);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_role_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_metadata_role_name);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_security_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_metadata_security_credentials);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AccessKeyId_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AccessKeyId_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SecretAccessKey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SecretAccessKey_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Token_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_REGION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_REGION);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_DEFAULT_REGION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_DEFAULT_REGION);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5943970e14eccb15a07d6ab30148e6fb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5943970e14eccb15a07d6ab30148e6fb_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_42ec356c71b83a15b86e610c746c8860));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42ec356c71b83a15b86e610c746c8860);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e47daa4c0bcfd8c7e0303654140765c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e47daa4c0bcfd8c7e0303654140765c);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_PUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PUT);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_c59a09c312ef10dcfb9647347eb84d6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c59a09c312ef10dcfb9647347eb84d6d);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd005b348a64593f09cc040bfd9806ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd005b348a64593f09cc040bfd9806ee);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_4da2e9b1e490396712a88f17f26d9d2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4da2e9b1e490396712a88f17f26d9d2e);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_783389783839766daf072303a8754953));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_783389783839766daf072303a8754953);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1067f26c6bf3b4df4feaa45aac601dbf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1067f26c6bf3b4df4feaa45aac601dbf_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_b49a318721a2a3959e6414d18e3c8e13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b49a318721a2a3959e6414d18e3c8e13);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_cea96adb25b9ddac9c29d7f0d9eb1bc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cea96adb25b9ddac9c29d7f0d9eb1bc7);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject_token_type);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_url);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_source);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_657774c19614cce5955dfb9fa009ba39_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_657774c19614cce5955dfb9fa009ba39_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_782dab3386fd2d95f3ac238fdf3e90ed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_782dab3386fd2d95f3ac238fdf3e90ed_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__aws_security_credentials_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__aws_security_credentials_supplier);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain__cred_verification_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cred_verification_url);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_id_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_regional_cred_verification_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_regional_cred_verification_url_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_5959ff037b3ad84868bb89065e64980a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5959ff037b3ad84868bb89065e64980a);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_groups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groups);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_aws));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aws);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3debe8b6b1a78bdca25e1c11d9b9efae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3debe8b6b1a78bdca25e1c11d9b9efae_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a9a0e13841f11de235984bd1d99f0fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a9a0e13841f11de235984bd1d99f0fb);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__target_resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__target_resource);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__request_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__request_signer);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e8031b02e0997eb525f7cdece48fe0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e8031b02e0997eb525f7cdece48fe0e);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_aws_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_aws_region);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__supplier_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__supplier_context);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain__region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__region);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestSigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestSigner);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_aws_security_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_aws_security_credentials);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_request_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_request_options);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ba278cf5508f02581f5cd5f4867e87a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ba278cf5508f02581f5cd5f4867e87a);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_60b4bc1bf5c25a1d262848c7ea196703));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60b4bc1bf5c25a1d262848c7ea196703);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_method_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_cc4bbbe542a9abe47a32e1b7fea52246));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cc4bbbe542a9abe47a32e1b7fea52246);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_26a6155808afeed9ffef7910eb05c1ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26a6155808afeed9ffef7910eb05c1ed);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_default_metrics_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_default_metrics_options);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_source);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_custom_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_custom_supplier);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_programmatic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_programmatic);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_source);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain__constructor_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__constructor_args);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_aws_security_credentials_supplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aws_security_credentials_supplier);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aws_security_credentials_supplier_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_aws_security_credentials_supplier_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_info);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7983d2f447fa559b6b0c313ebcf99d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7983d2f447fa559b6b0c313ebcf99d2);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_file);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_e002fa3d0754cb34b132d37bb270838e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e002fa3d0754cb34b132d37bb270838e);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ba040d3eeea161027510c0216b6dd1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ba040d3eeea161027510c0216b6dd1c);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_posixpath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_posixpath);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urljoin_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_vars_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_external_account_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_external_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_external_account);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_d28e4629a1aeceb4fbcf9cfa98449559));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d28e4629a1aeceb4fbcf9cfa98449559);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_e864059fd838b1820c6c2e76d5ce67b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e864059fd838b1820c6c2e76d5ce67b7);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_98cccf2c0b61e0129d25c8a8430d01b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98cccf2c0b61e0129d25c8a8430d01b3);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_71d14ce0b6a971993b0e8dcc664d090e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71d14ce0b6a971993b0e8dcc664d090e);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_300));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_300);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a8e7667a2354b778d6c73cb2300f20e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a8e7667a2354b778d6c73cb2300f20e);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_int_pos_76));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_76);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_d78345715e142fad6ccd7ba8257d55ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d78345715e142fad6ccd7ba8257d55ba);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__region_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__region_name_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b4bb7e4c1b9f00f64525774cbef99c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b4bb7e4c1b9f00f64525774cbef99c6);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_int_pos_348));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_348);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AwsSecurityCredentialsSupplier_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AwsSecurityCredentialsSupplier_tuple_empty_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5f6d1281d82c2b0079b805ce666942f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5f6d1281d82c2b0079b805ce666942f);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_int_pos_362));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_362);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_f414ac400ab24de3442891e76f239bfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f414ac400ab24de3442891e76f239bfd);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_db6a6564750521d4497a674f4ee82535));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db6a6564750521d4497a674f4ee82535);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_int_pos_409));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_409);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f28f763b89e4482a9b08d3a9954061e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f28f763b89e4482a9b08d3a9954061e);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bccfab7d545027bef1abf5cdb3d065b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bccfab7d545027bef1abf5cdb3d065b);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ffadb64cef0e0e834162b68ead64512));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ffadb64cef0e0e834162b68ead64512);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_da84bccbd0ea57ee56641432522619b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da84bccbd0ea57ee56641432522619b5);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_bac16f44b7478a9e1a33cdb819d87002));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bac16f44b7478a9e1a33cdb819d87002);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_32898a605de57dac0e57ddbf51594a1d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_32898a605de57dac0e57ddbf51594a1d_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_a460e9a77c3dc7456bc44809e9390149));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a460e9a77c3dc7456bc44809e9390149);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_int_pos_607));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_607);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieve_subject_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieve_subject_token);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_60cff2da0acbc150447c4045dd9f923f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_60cff2da0acbc150447c4045dd9f923f_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd7b6424476185c24af040bb7b009030));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd7b6424476185c24af040bb7b009030);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_e89ad65ffbbceb0871e98f743d90d6cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e89ad65ffbbceb0871e98f743d90d6cd_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_region_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_region_name_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_credential_source_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_credential_source_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_f7e3137f6f553435b64289e28b2be4de_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f7e3137f6f553435b64289e28b2be4de_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_aec911ef04ad8dc564b6489b5248a490_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aec911ef04ad8dc564b6489b5248a490_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_9fea2b3c95507ca6ea158214e1b20650_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9fea2b3c95507ca6ea158214e1b20650_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_63cd84001aeb2cba35357c4bc1ef95bf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_63cd84001aeb2cba35357c4bc1ef95bf_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_36857c5765b845b599c8a2f0cafb750a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_36857c5765b845b599c8a2f0cafb750a_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_7b0f29efade9d9047634d7cce82d9f96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7b0f29efade9d9047634d7cce82d9f96_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_str_plain_msg_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_37d293c334955b777011e1d2fd892371_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_37d293c334955b777011e1d2fd892371_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_4f8f064f2d17a5a1b341a2aad7eb7840_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f8f064f2d17a5a1b341a2aad7eb7840_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_94d9948312e07daa9cd14244f9d470b9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_94d9948312e07daa9cd14244f9d470b9_tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_9aedc46d7e61d3383786b8f4076cf741_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9aedc46d7e61d3383786b8f4076cf741_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_3f9285e667ba658980a04b67e2810b38_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3f9285e667ba658980a04b67e2810b38_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 30
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
static PyObject *module_var_accessor_google$auth$aws$AwsSecurityCredentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AwsSecurityCredentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AwsSecurityCredentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AwsSecurityCredentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AwsSecurityCredentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$AwsSecurityCredentialsSupplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$RequestSigner(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestSigner);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestSigner);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestSigner, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestSigner);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestSigner, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestSigner);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestSigner);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestSigner);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_AWS_ALGORITHM(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_ALGORITHM);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_ALGORITHM);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_ALGORITHM, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_ALGORITHM);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_ALGORITHM, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_ALGORITHM);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_ALGORITHM);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_ALGORITHM);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_AWS_DATE_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_DATE_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_DATE_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_DATE_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_DATE_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_DATE_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_DATE_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_DATE_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_DATE_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_AWS_REQUEST_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_REQUEST_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_REQUEST_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_REQUEST_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_REQUEST_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_REQUEST_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_REQUEST_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_REQUEST_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_REQUEST_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_AWS_SECURITY_TOKEN_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_DEFAULT_AWS_REGIONAL_CREDENTIAL_VERIFICATION_URL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_DefaultAwsSecurityCredentialsSupplier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_IMDSV2_SESSION_TOKEN_TTL_SECONDS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_generate_authentication_header_map(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_authentication_header_map);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_authentication_header_map);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_authentication_header_map, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_authentication_header_map);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_authentication_header_map, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_authentication_header_map);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_authentication_header_map);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_authentication_header_map);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_get_canonical_querystring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_canonical_querystring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_canonical_querystring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_canonical_querystring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_canonical_querystring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_canonical_querystring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_canonical_querystring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_canonical_querystring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_canonical_querystring);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_get_signing_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_signing_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_signing_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_signing_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_signing_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_signing_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_signing_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_signing_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_signing_key);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$_sign(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__sign);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sign);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sign, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sign);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sign, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__sign);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__sign);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__sign);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$external_account(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_external_account);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_external_account, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_external_account);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_external_account, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$hashlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$hmac(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$urljoin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$aws$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$aws->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$aws->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$aws->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f1f64d53b748577db1b68d9e745e5705;
static PyCodeObject *code_objects_b3ccbbe1e946c090e211e89b95975e4c;
static PyCodeObject *code_objects_b4b0b05f8b6d8c582a7331cc85f66c28;
static PyCodeObject *code_objects_02b2132cbc1d7fa659fc58713091db24;
static PyCodeObject *code_objects_7b8bfa2b46799f59ed396c70a434566a;
static PyCodeObject *code_objects_668e85a96b778f7a2fec39c28b8b604b;
static PyCodeObject *code_objects_57c08b4adc7ff360d23e92759a820475;
static PyCodeObject *code_objects_9bd3ea79d54692b9524ceee37e7728c1;
static PyCodeObject *code_objects_e023be43c1ce713c92b98b04a821ad74;
static PyCodeObject *code_objects_098d1ed197c0e046e6605c51cc7c2937;
static PyCodeObject *code_objects_eb9eea42f3602e8652ee520a0e93dc8f;
static PyCodeObject *code_objects_89be6c2b33c1b77ae47e23f76e98adc2;
static PyCodeObject *code_objects_768947fa5ce022b986ef9bcf00e1e907;
static PyCodeObject *code_objects_054c6add381873a8b461ac339ee5ecef;
static PyCodeObject *code_objects_0dab3392fe4528d978434edcacc59d9c;
static PyCodeObject *code_objects_5d3662af42b7a41e66b1bc7872a49ad6;
static PyCodeObject *code_objects_7c7fda98c3cb88c64eecef2c2dede4da;
static PyCodeObject *code_objects_a7620d97731393bbcb1d97315a5378b8;
static PyCodeObject *code_objects_196d622b4a991b59f140622115596adc;
static PyCodeObject *code_objects_ba0bb6f2cb4b99523cf5d4ddd871ac01;
static PyCodeObject *code_objects_8cedcdd2f805cac07423471322f8385e;
static PyCodeObject *code_objects_575e67b2775ec23b9577440782a305e8;
static PyCodeObject *code_objects_368abc1c7c12c4ca5dbc6d2a8350de18;
static PyCodeObject *code_objects_ce9dde1c26639ea99a425bae81d306c6;
static PyCodeObject *code_objects_962c7a1e68c4910b74b993a87aca213b;
static PyCodeObject *code_objects_7f21de43a85d4748e1be645ea0b40df7;
static PyCodeObject *code_objects_b2c9f8b6e2cd01e381f50eb42cc47ae7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dd7b6424476185c24af040bb7b009030); CHECK_OBJECT(module_filename_obj);
code_objects_f1f64d53b748577db1b68d9e745e5705 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a, mod_consts.const_str_digest_b1fd8b6755cf7be441591a34dad0ef2a, NULL, NULL, 0, 0, 0);
code_objects_b3ccbbe1e946c090e211e89b95975e4c = MAKE_CODE_OBJECT(module_filename_obj, 348, 0, mod_consts.const_str_plain_AwsSecurityCredentials, mod_consts.const_str_plain_AwsSecurityCredentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b4b0b05f8b6d8c582a7331cc85f66c28 = MAKE_CODE_OBJECT(module_filename_obj, 362, 0, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_02b2132cbc1d7fa659fc58713091db24 = MAKE_CODE_OBJECT(module_filename_obj, 607, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7b8bfa2b46799f59ed396c70a434566a = MAKE_CODE_OBJECT(module_filename_obj, 76, 0, mod_consts.const_str_plain_RequestSigner, mod_consts.const_str_plain_RequestSigner, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_668e85a96b778f7a2fec39c28b8b604b = MAKE_CODE_OBJECT(module_filename_obj, 409, 0, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_57c08b4adc7ff360d23e92759a820475 = MAKE_CODE_OBJECT(module_filename_obj, 613, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_e89ad65ffbbceb0871e98f743d90d6cd_tuple, NULL, 6, 0, 0);
code_objects_9bd3ea79d54692b9524ceee37e7728c1 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_d78345715e142fad6ccd7ba8257d55ba, mod_consts.const_tuple_str_plain_self_str_plain_region_name_tuple, NULL, 2, 0, 0);
code_objects_e023be43c1ce713c92b98b04a821ad74 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_1f28f763b89e4482a9b08d3a9954061e, mod_consts.const_tuple_str_plain_self_str_plain_credential_source_tuple, NULL, 2, 0, 0);
code_objects_098d1ed197c0e046e6605c51cc7c2937 = MAKE_CODE_OBJECT(module_filename_obj, 818, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__constructor_args, mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_eb9eea42f3602e8652ee520a0e93dc8f = MAKE_CODE_OBJECT(module_filename_obj, 808, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__create_default_metrics_options, mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469, mod_consts.const_tuple_str_plain_self_str_plain_metrics_options_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_89be6c2b33c1b77ae47e23f76e98adc2 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__generate_authentication_header_map, mod_consts.const_str_plain__generate_authentication_header_map, mod_consts.const_tuple_f7e3137f6f553435b64289e28b2be4de_tuple, NULL, 8, 0, 0);
code_objects_768947fa5ce022b986ef9bcf00e1e907 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_canonical_querystring, mod_consts.const_str_plain__get_canonical_querystring, mod_consts.const_tuple_aec911ef04ad8dc564b6489b5248a490_tuple, NULL, 1, 0, 0);
code_objects_054c6add381873a8b461ac339ee5ecef = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_imdsv2_session_token, mod_consts.const_str_digest_1ffadb64cef0e0e834162b68ead64512, mod_consts.const_tuple_9fea2b3c95507ca6ea158214e1b20650_tuple, NULL, 2, 0, 0);
code_objects_0dab3392fe4528d978434edcacc59d9c = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_metadata_role_name, mod_consts.const_str_digest_bac16f44b7478a9e1a33cdb819d87002, mod_consts.const_tuple_63cd84001aeb2cba35357c4bc1ef95bf_tuple, NULL, 3, 0, 0);
code_objects_5d3662af42b7a41e66b1bc7872a49ad6 = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_metadata_security_credentials, mod_consts.const_str_digest_da84bccbd0ea57ee56641432522619b5, mod_consts.const_tuple_36857c5765b845b599c8a2f0cafb750a_tuple, NULL, 4, 0, 0);
code_objects_7c7fda98c3cb88c64eecef2c2dede4da = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_signing_key, mod_consts.const_str_plain__get_signing_key, mod_consts.const_tuple_7b0f29efade9d9047634d7cce82d9f96_tuple, NULL, 4, 0, 0);
code_objects_a7620d97731393bbcb1d97315a5378b8 = MAKE_CODE_OBJECT(module_filename_obj, 815, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__has_custom_supplier, mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_196d622b4a991b59f140622115596adc = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sign, mod_consts.const_str_plain__sign, mod_consts.const_tuple_str_plain_key_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_ba0bb6f2cb4b99523cf5d4ddd871ac01 = MAKE_CODE_OBJECT(module_filename_obj, 853, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_file, mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db, mod_consts.const_tuple_7d97b446ddc9d50c99f487f737c1051e_tuple, NULL, 2, 0, 0);
code_objects_8cedcdd2f805cac07423471322f8385e = MAKE_CODE_OBJECT(module_filename_obj, 830, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_from_info, mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba, mod_consts.const_tuple_37d293c334955b777011e1d2fd892371_tuple, NULL, 2, 0, 0);
code_objects_575e67b2775ec23b9577440782a305e8 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_aws_region, mod_consts.const_str_digest_f414ac400ab24de3442891e76f239bfd, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple, NULL, 3, 0, 0);
code_objects_368abc1c7c12c4ca5dbc6d2a8350de18 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_aws_region, mod_consts.const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d, mod_consts.const_tuple_4f8f064f2d17a5a1b341a2aad7eb7840_tuple, NULL, 3, 0, 0);
code_objects_ce9dde1c26639ea99a425bae81d306c6 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_aws_security_credentials, mod_consts.const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367, mod_consts.const_tuple_str_plain_self_str_plain_context_str_plain_request_tuple, NULL, 3, 0, 0);
code_objects_962c7a1e68c4910b74b993a87aca213b = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_aws_security_credentials, mod_consts.const_str_digest_6bccfab7d545027bef1abf5cdb3d065b, mod_consts.const_tuple_94d9948312e07daa9cd14244f9d470b9_tuple, NULL, 3, 0, 0);
code_objects_7f21de43a85d4748e1be645ea0b40df7 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_request_options, mod_consts.const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec, mod_consts.const_tuple_9aedc46d7e61d3383786b8f4076cf741_tuple, NULL, 6, 0, 0);
code_objects_b2c9f8b6e2cd01e381f50eb42cc47ae7 = MAKE_CODE_OBJECT(module_filename_obj, 719, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_retrieve_subject_token, mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8, mod_consts.const_tuple_3f9285e667ba658980a04b67e2810b38_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__10_get_aws_security_credentials(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__11_get_aws_region(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__12__get_imdsv2_session_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__13__get_metadata_security_credentials(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__14__get_metadata_role_name(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__15___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__16_retrieve_subject_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__17__create_default_metrics_options(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__18__has_custom_supplier(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__19__constructor_args(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__20_from_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__21_from_file(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__2_get_request_options(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__3__get_canonical_querystring(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__4__sign(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__5__get_signing_key(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__6__generate_authentication_header_map(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__7_get_aws_security_credentials(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__8_get_aws_region(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__9___init__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$aws$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_region_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9bd3ea79d54692b9524ceee37e7728c1, module_google$auth$aws, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__1___init__->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__1___init__ = cache_frame_frame_google$auth$aws$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_region_name);
tmp_assattr_value_1 = par_region_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__region_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__1___init__,
    type_description_1,
    par_self,
    par_region_name
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__1___init__ == cache_frame_frame_google$auth$aws$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__1___init__);
    cache_frame_frame_google$auth$aws$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__1___init__);

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
CHECK_OBJECT(par_region_name);
Py_DECREF(par_region_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_region_name);
Py_DECREF(par_region_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__2_get_request_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_aws_security_credentials = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_method = python_pars[3];
PyObject *par_request_payload = python_pars[4];
PyObject *par_additional_headers = python_pars[5];
PyObject *var_uri = NULL;
PyObject *var_normalized_uri = NULL;
PyObject *var_header_map = NULL;
PyObject *var_headers = NULL;
PyObject *var_key = NULL;
PyObject *var_signed_request = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__2_get_request_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__2_get_request_options = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__2_get_request_options)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__2_get_request_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__2_get_request_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__2_get_request_options = MAKE_FUNCTION_FRAME(tstate, code_objects_7f21de43a85d4748e1be645ea0b40df7, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__2_get_request_options->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__2_get_request_options = cache_frame_frame_google$auth$aws$$$function__2_get_request_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__2_get_request_options);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__2_get_request_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_additional_headers);
tmp_or_left_value_1 = par_additional_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_additional_headers;
    assert(old != NULL);
    par_additional_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 120;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlparse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_uri == NULL);
var_uri = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
tmp_expression_value_3 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_parse);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_urlparse);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_google$auth$aws$urljoin(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urljoin);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
tmp_expression_value_4 = IMPORT_HARD_POSIXPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_normpath);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_uri);
tmp_expression_value_5 = var_uri;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_path);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_3);

exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 125;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 124;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_normalized_uri == NULL);
var_normalized_uri = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_uri);
tmp_expression_value_6 = var_uri;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hostname);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_uri);
tmp_expression_value_7 = var_uri;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_scheme);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_https;
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_1 = tmp_or_left_value_2;
or_end_2:;
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
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 129;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_InvalidResource,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e83b30ccffb5220c6f35bdbad4b6a637_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 129;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_1_1;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
tmp_called_value_4 = module_var_accessor_google$auth$aws$_generate_authentication_header_map(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__generate_authentication_header_map);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_uri);
tmp_expression_value_8 = var_uri;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_hostname);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_normalized_uri);
tmp_expression_value_9 = var_normalized_uri;
tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_path);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 133;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 133;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = const_str_slash;
Py_INCREF(tmp_or_right_value_3);
tmp_kw_call_value_1_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_kw_call_value_1_1 = tmp_or_left_value_3;
or_end_3:;
tmp_called_value_5 = module_var_accessor_google$auth$aws$_get_canonical_querystring(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_canonical_querystring);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_uri);
tmp_expression_value_10 = var_uri;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_query);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 134;
tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_kw_call_value_3_1 = par_method;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__region_name);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_aws_security_credentials);
tmp_kw_call_value_5_1 = par_aws_security_credentials;
CHECK_OBJECT(par_request_payload);
tmp_kw_call_value_6_1 = par_request_payload;
CHECK_OBJECT(par_additional_headers);
tmp_kw_call_value_7_1 = par_additional_headers;
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 131;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_585d2f05b9704c19ddcd6f3d57888cdd_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_header_map == NULL);
var_header_map = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
tmp_dict_key_1 = mod_consts.const_str_plain_Authorization;
CHECK_OBJECT(var_header_map);
tmp_expression_value_12 = var_header_map;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 142;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_authorization_header_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_13;
tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_host;
CHECK_OBJECT(var_uri);
tmp_expression_value_13 = var_uri;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_hostname);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_amz_date;
CHECK_OBJECT(var_header_map);
tmp_cmp_expr_right_2 = var_header_map;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_header_map);
tmp_expression_value_14 = var_header_map;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_amz_date_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = module_var_accessor_google$auth$aws$_AWS_DATE_HEADER(tstate);
if (unlikely(tmp_dictset_key == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_DATE_HEADER);
}

if (tmp_dictset_key == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_additional_headers);
tmp_iter_arg_1 = par_additional_headers;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 149;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_8;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_additional_headers);
tmp_expression_value_15 = par_additional_headers;
CHECK_OBJECT(var_key);
tmp_subscript_value_1 = var_key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
if (var_headers == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_headers;
CHECK_OBJECT(var_key);
tmp_dictset_key = var_key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooo";
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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_16 = par_aws_security_credentials;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_session_token);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_17 = par_aws_security_credentials;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_session_token);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (var_headers == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dictset_dict = var_headers;
tmp_dictset_key = module_var_accessor_google$auth$aws$_AWS_SECURITY_TOKEN_HEADER(tstate);
if (unlikely(tmp_dictset_key == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
}

if (tmp_dictset_key == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_url;
CHECK_OBJECT(par_url);
tmp_dict_value_2 = par_url;
tmp_assign_source_9 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_method;
CHECK_OBJECT(par_method);
tmp_dict_value_2 = par_method;
tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
if (var_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto dict_build_exception_2;
}

tmp_dict_value_2 = var_headers;
tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_9);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
assert(var_signed_request == NULL);
var_signed_request = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(par_request_payload);
tmp_truth_name_1 = CHECK_IF_TRUE(par_request_payload);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(par_request_payload);
tmp_dictset_value = par_request_payload;
CHECK_OBJECT(var_signed_request);
tmp_dictset_dict = var_signed_request;
tmp_dictset_key = mod_consts.const_str_plain_data;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__2_get_request_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__2_get_request_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__2_get_request_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__2_get_request_options,
    type_description_1,
    par_self,
    par_aws_security_credentials,
    par_url,
    par_method,
    par_request_payload,
    par_additional_headers,
    var_uri,
    var_normalized_uri,
    var_header_map,
    var_headers,
    var_key,
    var_signed_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__2_get_request_options == cache_frame_frame_google$auth$aws$$$function__2_get_request_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__2_get_request_options);
    cache_frame_frame_google$auth$aws$$$function__2_get_request_options = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__2_get_request_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_signed_request);
tmp_return_value = var_signed_request;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_additional_headers);
CHECK_OBJECT(par_additional_headers);
Py_DECREF(par_additional_headers);
par_additional_headers = NULL;
CHECK_OBJECT(var_uri);
CHECK_OBJECT(var_uri);
Py_DECREF(var_uri);
var_uri = NULL;
CHECK_OBJECT(var_normalized_uri);
CHECK_OBJECT(var_normalized_uri);
Py_DECREF(var_normalized_uri);
var_normalized_uri = NULL;
CHECK_OBJECT(var_header_map);
CHECK_OBJECT(var_header_map);
Py_DECREF(var_header_map);
var_header_map = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_signed_request);
CHECK_OBJECT(var_signed_request);
Py_DECREF(var_signed_request);
var_signed_request = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_additional_headers);
par_additional_headers = NULL;
Py_XDECREF(var_uri);
var_uri = NULL;
Py_XDECREF(var_normalized_uri);
var_normalized_uri = NULL;
Py_XDECREF(var_header_map);
var_header_map = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_signed_request);
var_signed_request = NULL;
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
CHECK_OBJECT(par_aws_security_credentials);
Py_DECREF(par_aws_security_credentials);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_request_payload);
Py_DECREF(par_request_payload);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_aws_security_credentials);
Py_DECREF(par_aws_security_credentials);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_request_payload);
Py_DECREF(par_request_payload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__3__get_canonical_querystring(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_query = python_pars[0];
PyObject *var_querystring = NULL;
PyObject *var_querystring_encoded_map = NULL;
PyObject *var_key = NULL;
PyObject *var_quote_key = NULL;
PyObject *var_item = NULL;
PyObject *var_sorted_keys = NULL;
PyObject *var_querystring_encoded_pairs = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__3__get_canonical_querystring;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring = MAKE_FUNCTION_FRAME(tstate, code_objects_768947fa5ce022b986ef9bcf00e1e907, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring = cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__3__get_canonical_querystring);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__3__get_canonical_querystring) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_query);
tmp_args_element_value_1 = par_query;
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 174;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_parse_qs, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_querystring == NULL);
var_querystring = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(var_querystring_encoded_map == NULL);
var_querystring_encoded_map = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_querystring);
tmp_iter_arg_1 = var_querystring;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 176;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_5;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_parse);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_110b48a474b410fcae89a19737f0c571);
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 177;
tmp_assign_source_6 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_quote_key;
    var_quote_key = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
if (var_querystring_encoded_map == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_querystring_encoded_map;
CHECK_OBJECT(var_quote_key);
tmp_dictset_key = var_quote_key;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_querystring);
tmp_expression_value_4 = var_querystring;
CHECK_OBJECT(var_key);
tmp_subscript_value_1 = var_key;
tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 180;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_9 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_9;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
if (var_querystring_encoded_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_6 = var_querystring_encoded_map;
CHECK_OBJECT(var_quote_key);
tmp_subscript_value_2 = var_quote_key;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_8 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_parse);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_item);
tmp_tuple_element_2 = var_item;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_110b48a474b410fcae89a19737f0c571);
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 183;
tmp_args_element_value_2 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 182;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_call_result_2;
if (var_querystring_encoded_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = var_querystring_encoded_map;
CHECK_OBJECT(var_quote_key);
tmp_subscript_value_3 = var_quote_key;
tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_sort);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 186;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_list_arg_1;
PyObject *tmp_dict_arg_1;
if (var_querystring_encoded_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_1 = var_querystring_encoded_map;
tmp_list_arg_1 = DICT_ITERKEYS(tstate, tmp_dict_arg_1);
assert(!(tmp_list_arg_1 == NULL));
tmp_assign_source_10 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_sorted_keys == NULL);
var_sorted_keys = tmp_assign_source_10;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_sorted_keys);
tmp_expression_value_11 = var_sorted_keys;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_sort);
assert(!(tmp_called_value_5 == NULL));
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 189;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_querystring_encoded_pairs == NULL);
var_querystring_encoded_pairs = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_sorted_keys);
tmp_iter_arg_3 = var_sorted_keys;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 192;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_14 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_14;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
if (var_querystring_encoded_map == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_map);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_12 = var_querystring_encoded_map;
CHECK_OBJECT(var_key);
tmp_subscript_value_4 = var_key;
tmp_iter_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 193;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_17 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_17;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
if (var_querystring_encoded_pairs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_pairs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_13 = var_querystring_encoded_pairs;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_52d99877edb3108f4f38d3f9473b9b9b;
CHECK_OBJECT(var_key);
tmp_kw_call_arg_value_1_1 = var_key;
CHECK_OBJECT(var_item);
tmp_kw_call_arg_value_2_1 = var_item;
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 194;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame.f_lineno = 194;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
goto loop_start_4;
loop_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_38;
if (var_querystring_encoded_pairs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_querystring_encoded_pairs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_querystring_encoded_pairs;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__3__get_canonical_querystring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__3__get_canonical_querystring->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__3__get_canonical_querystring, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__3__get_canonical_querystring,
    type_description_1,
    par_query,
    var_querystring,
    var_querystring_encoded_map,
    var_key,
    var_quote_key,
    var_item,
    var_sorted_keys,
    var_querystring_encoded_pairs
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__3__get_canonical_querystring == cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring);
    cache_frame_frame_google$auth$aws$$$function__3__get_canonical_querystring = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__3__get_canonical_querystring);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_querystring);
CHECK_OBJECT(var_querystring);
Py_DECREF(var_querystring);
var_querystring = NULL;
Py_XDECREF(var_querystring_encoded_map);
var_querystring_encoded_map = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_quote_key);
var_quote_key = NULL;
Py_XDECREF(var_item);
var_item = NULL;
CHECK_OBJECT(var_sorted_keys);
CHECK_OBJECT(var_sorted_keys);
Py_DECREF(var_sorted_keys);
var_sorted_keys = NULL;
Py_XDECREF(var_querystring_encoded_pairs);
var_querystring_encoded_pairs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_querystring);
var_querystring = NULL;
Py_XDECREF(var_querystring_encoded_map);
var_querystring_encoded_map = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_quote_key);
var_quote_key = NULL;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_sorted_keys);
var_sorted_keys = NULL;
Py_XDECREF(var_querystring_encoded_pairs);
var_querystring_encoded_pairs = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_query);
Py_DECREF(par_query);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__4__sign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *par_msg = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__4__sign;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__4__sign = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__4__sign)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__4__sign);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__4__sign == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__4__sign = MAKE_FUNCTION_FRAME(tstate, code_objects_196d622b4a991b59f140622115596adc, module_google$auth$aws, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__4__sign->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__4__sign = cache_frame_frame_google$auth$aws$$$function__4__sign;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__4__sign);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__4__sign) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_google$auth$aws$hmac(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
CHECK_OBJECT(par_msg);
tmp_expression_value_2 = par_msg;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__4__sign->m_frame.f_lineno = 209;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$aws$hashlib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sha256);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__4__sign->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__4__sign->m_frame.f_lineno = 209;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_digest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__4__sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__4__sign->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__4__sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__4__sign,
    type_description_1,
    par_key,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__4__sign == cache_frame_frame_google$auth$aws$$$function__4__sign) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__4__sign);
    cache_frame_frame_google$auth$aws$$$function__4__sign = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__4__sign);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__5__get_signing_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key = python_pars[0];
PyObject *par_date_stamp = python_pars[1];
PyObject *par_region_name = python_pars[2];
PyObject *par_service_name = python_pars[3];
PyObject *var_k_date = NULL;
PyObject *var_k_region = NULL;
PyObject *var_k_service = NULL;
PyObject *var_k_signing = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__5__get_signing_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__5__get_signing_key = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__5__get_signing_key)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__5__get_signing_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__5__get_signing_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__5__get_signing_key = MAKE_FUNCTION_FRAME(tstate, code_objects_7c7fda98c3cb88c64eecef2c2dede4da, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__5__get_signing_key->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__5__get_signing_key = cache_frame_frame_google$auth$aws$$$function__5__get_signing_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__5__get_signing_key);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__5__get_signing_key) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$auth$aws$_sign(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sign);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_str_plain_AWS4;
CHECK_OBJECT(par_key);
tmp_add_expr_right_1 = par_key;
tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame.f_lineno = 226;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_date_stamp);
tmp_args_element_value_2 = par_date_stamp;
frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_k_date == NULL);
var_k_date = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_google$auth$aws$_sign(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sign);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_k_date);
tmp_args_element_value_3 = var_k_date;
CHECK_OBJECT(par_region_name);
tmp_args_element_value_4 = par_region_name;
frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_k_region == NULL);
var_k_region = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_google$auth$aws$_sign(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sign);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_k_region);
tmp_args_element_value_5 = var_k_region;
CHECK_OBJECT(par_service_name);
tmp_args_element_value_6 = par_service_name;
frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_k_service == NULL);
var_k_service = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_google$auth$aws$_sign(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sign);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_k_service);
tmp_args_element_value_7 = var_k_service;
tmp_args_element_value_8 = mod_consts.const_str_plain_aws4_request;
frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_k_signing == NULL);
var_k_signing = tmp_assign_source_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__5__get_signing_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__5__get_signing_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__5__get_signing_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__5__get_signing_key,
    type_description_1,
    par_key,
    par_date_stamp,
    par_region_name,
    par_service_name,
    var_k_date,
    var_k_region,
    var_k_service,
    var_k_signing
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__5__get_signing_key == cache_frame_frame_google$auth$aws$$$function__5__get_signing_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__5__get_signing_key);
    cache_frame_frame_google$auth$aws$$$function__5__get_signing_key = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__5__get_signing_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_k_signing);
tmp_return_value = var_k_signing;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_k_date);
CHECK_OBJECT(var_k_date);
Py_DECREF(var_k_date);
var_k_date = NULL;
CHECK_OBJECT(var_k_region);
CHECK_OBJECT(var_k_region);
Py_DECREF(var_k_region);
var_k_region = NULL;
CHECK_OBJECT(var_k_service);
CHECK_OBJECT(var_k_service);
Py_DECREF(var_k_service);
var_k_service = NULL;
CHECK_OBJECT(var_k_signing);
CHECK_OBJECT(var_k_signing);
Py_DECREF(var_k_signing);
var_k_signing = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_k_date);
var_k_date = NULL;
Py_XDECREF(var_k_region);
var_k_region = NULL;
Py_XDECREF(var_k_service);
var_k_service = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_date_stamp);
Py_DECREF(par_date_stamp);
CHECK_OBJECT(par_region_name);
Py_DECREF(par_region_name);
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_date_stamp);
Py_DECREF(par_date_stamp);
CHECK_OBJECT(par_region_name);
Py_DECREF(par_region_name);
CHECK_OBJECT(par_service_name);
Py_DECREF(par_service_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__6__generate_authentication_header_map(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_host = python_pars[0];
PyObject *par_canonical_uri = python_pars[1];
PyObject *par_canonical_querystring = python_pars[2];
PyObject *par_method = python_pars[3];
PyObject *par_region = python_pars[4];
PyObject *par_aws_security_credentials = python_pars[5];
PyObject *par_request_payload = python_pars[6];
PyObject *par_additional_headers = python_pars[7];
PyObject *var_service_name = NULL;
PyObject *var_current_time = NULL;
PyObject *var_amz_date = NULL;
PyObject *var_date_stamp = NULL;
PyObject *var_full_headers = NULL;
PyObject *var_key = NULL;
PyObject *var_canonical_headers = NULL;
PyObject *var_header_keys = NULL;
PyObject *var_signed_headers = NULL;
PyObject *var_payload_hash = NULL;
PyObject *var_canonical_request = NULL;
PyObject *var_credential_scope = NULL;
PyObject *var_string_to_sign = NULL;
PyObject *var_signing_key = NULL;
PyObject *var_signature = NULL;
PyObject *var_authorization_header = NULL;
PyObject *var_authentication_header = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map = MAKE_FUNCTION_FRAME(tstate, code_objects_89be6c2b33c1b77ae47e23f76e98adc2, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map = cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_host);
tmp_expression_value_2 = par_host;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 264;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_service_name == NULL);
var_service_name = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aws$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 266;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_current_time == NULL);
var_current_time = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_current_time);
tmp_called_instance_2 = var_current_time;
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 267;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_strftime,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_bece2bd3c5a82595198431f08195a192_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_amz_date == NULL);
var_amz_date = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_current_time);
tmp_called_instance_3 = var_current_time;
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 268;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_strftime,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3815d7b0380c036a6bbd263cd8173bc1_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_date_stamp == NULL);
var_date_stamp = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(var_full_headers == NULL);
var_full_headers = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_additional_headers);
tmp_iter_arg_1 = par_additional_headers;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 272;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_8;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_additional_headers);
tmp_expression_value_3 = par_additional_headers;
CHECK_OBJECT(var_key);
tmp_subscript_value_2 = var_key;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_full_headers == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_full_headers;
CHECK_OBJECT(var_key);
tmp_expression_value_4 = var_key;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 273;
tmp_dictset_key = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooo";
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


exception_lineno = 273;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooooo";
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_5 = par_aws_security_credentials;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_session_token);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooooooooooooooo";
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
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_6 = par_aws_security_credentials;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_session_token);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_full_headers == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dictset_dict = var_full_headers;
tmp_dictset_key = module_var_accessor_google$auth$aws$_AWS_SECURITY_TOKEN_HEADER(tstate);
if (unlikely(tmp_dictset_key == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER);
}

if (tmp_dictset_key == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dictset_value);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_host);
tmp_ass_subvalue_1 = par_host;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_1 = var_full_headers;
tmp_ass_subscript_1 = mod_consts.const_str_plain_host;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_date;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 286;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = var_full_headers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooooooooooooooo";
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
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_amz_date);
tmp_ass_subvalue_2 = var_amz_date;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_2 = var_full_headers;
tmp_ass_subscript_2 = module_var_accessor_google$auth$aws$_AWS_DATE_HEADER(tstate);
if (unlikely(tmp_ass_subscript_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_DATE_HEADER);
}

if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = const_str_empty;
assert(var_canonical_headers == NULL);
Py_INCREF(tmp_assign_source_9);
var_canonical_headers = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = var_full_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_keys);
assert(!(tmp_called_value_3 == NULL));
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 291;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_header_keys == NULL);
var_header_keys = tmp_assign_source_10;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_header_keys);
tmp_expression_value_8 = var_header_keys;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_sort);
assert(!(tmp_called_value_4 == NULL));
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 292;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_header_keys);
tmp_iter_arg_2 = var_header_keys;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_11;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooo";
exception_lineno = 293;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_13 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_13;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_4eabbfbbdbce5ed29b9d8dc3c39a5d46;
if (var_canonical_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_canonical_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_arg_value_1_1 = var_canonical_headers;
CHECK_OBJECT(var_key);
tmp_kw_call_arg_value_2_1 = var_key;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_9 = var_full_headers;
CHECK_OBJECT(var_key);
tmp_subscript_value_3 = var_key;
tmp_kw_call_arg_value_3_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 294;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_canonical_headers;
    var_canonical_headers = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_59;
CHECK_OBJECT(var_header_keys);
tmp_iterable_value_1 = var_header_keys;
tmp_assign_source_15 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_signed_headers == NULL);
var_signed_headers = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
tmp_expression_value_10 = module_var_accessor_google$auth$aws$hashlib(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_sha256);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request_payload);
tmp_or_left_value_1 = par_request_payload;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_str_empty;
tmp_expression_value_11 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_11 = tmp_or_left_value_1;
or_end_1:;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_encode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 299;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 299;
tmp_called_instance_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 299;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload_hash == NULL);
var_payload_hash = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_arg_value_6_1;
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_9ad940bdd42e8c0f877f7bc42c484b5b;
CHECK_OBJECT(par_method);
tmp_kw_call_arg_value_1_2 = par_method;
CHECK_OBJECT(par_canonical_uri);
tmp_kw_call_arg_value_2_2 = par_canonical_uri;
CHECK_OBJECT(par_canonical_querystring);
tmp_kw_call_arg_value_3_2 = par_canonical_querystring;
if (var_canonical_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_canonical_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_4_1 = var_canonical_headers;
CHECK_OBJECT(var_signed_headers);
tmp_kw_call_arg_value_5_1 = var_signed_headers;
CHECK_OBJECT(var_payload_hash);
tmp_kw_call_arg_value_6_1 = var_payload_hash;
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS7(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_canonical_request == NULL);
var_canonical_request = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_kw_call_arg_value_3_3;
PyObject *tmp_kw_call_arg_value_4_2;
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_68563df8096b3070ca948a96a4033220;
CHECK_OBJECT(var_date_stamp);
tmp_kw_call_arg_value_1_3 = var_date_stamp;
CHECK_OBJECT(par_region);
tmp_kw_call_arg_value_2_3 = par_region;
CHECK_OBJECT(var_service_name);
tmp_kw_call_arg_value_3_3 = var_service_name;
tmp_kw_call_arg_value_4_2 = module_var_accessor_google$auth$aws$_AWS_REQUEST_TYPE(tstate);
if (unlikely(tmp_kw_call_arg_value_4_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_REQUEST_TYPE);
}

if (tmp_kw_call_arg_value_4_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3, tmp_kw_call_arg_value_4_2};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS5(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_credential_scope == NULL);
var_credential_scope = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_kw_call_arg_value_2_4;
PyObject *tmp_kw_call_arg_value_3_4;
PyObject *tmp_kw_call_arg_value_4_3;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_2;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_encoding_value_1;
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_87be9191f756807991d682fcb7beb241;
tmp_kw_call_arg_value_1_4 = module_var_accessor_google$auth$aws$_AWS_ALGORITHM(tstate);
if (unlikely(tmp_kw_call_arg_value_1_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_ALGORITHM);
}

if (tmp_kw_call_arg_value_1_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_amz_date);
tmp_kw_call_arg_value_2_4 = var_amz_date;
CHECK_OBJECT(var_credential_scope);
tmp_kw_call_arg_value_3_4 = var_credential_scope;
tmp_expression_value_12 = module_var_accessor_google$auth$aws$hashlib(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_sha256);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_canonical_request);
tmp_str_arg_value_2 = var_canonical_request;
tmp_encoding_value_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_args_element_value_2 = UNICODE_ENCODE2(tstate, tmp_str_arg_value_2, tmp_encoding_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 320;
tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 320;
tmp_kw_call_arg_value_4_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_kw_call_arg_value_4_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 316;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4, tmp_kw_call_arg_value_3_4, tmp_kw_call_arg_value_4_3};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS5(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_4_3);
Py_DECREF(tmp_kw_call_arg_value_4_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_string_to_sign == NULL);
var_string_to_sign = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_8 = module_var_accessor_google$auth$aws$_get_signing_key(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_signing_key);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_13 = par_aws_security_credentials;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_secret_access_key);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_date_stamp);
tmp_args_element_value_4 = var_date_stamp;
CHECK_OBJECT(par_region);
tmp_args_element_value_5 = par_region;
CHECK_OBJECT(var_service_name);
tmp_args_element_value_6 = var_service_name;
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 324;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_signing_key == NULL);
var_signing_key = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_instance_6;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_encoding_value_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_15;
tmp_expression_value_14 = module_var_accessor_google$auth$aws$hmac(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_new);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_signing_key);
tmp_args_element_value_7 = var_signing_key;
CHECK_OBJECT(var_string_to_sign);
tmp_str_arg_value_3 = var_string_to_sign;
tmp_encoding_value_2 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_args_element_value_8 = UNICODE_ENCODE2(tstate, tmp_str_arg_value_3, tmp_encoding_value_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 328;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_google$auth$aws$hashlib(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 328;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_sha256);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 328;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 327;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_called_instance_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 327;
tmp_assign_source_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_signature == NULL);
var_signature = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_arg_value_1_5;
PyObject *tmp_kw_call_arg_value_2_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_3_5;
PyObject *tmp_kw_call_arg_value_4_4;
PyObject *tmp_kw_call_arg_value_5_2;
tmp_kw_call_arg_value_0_5 = mod_consts.const_str_digest_094282026a91cc14732554a0586756f4;
tmp_kw_call_arg_value_1_5 = module_var_accessor_google$auth$aws$_AWS_ALGORITHM(tstate);
if (unlikely(tmp_kw_call_arg_value_1_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AWS_ALGORITHM);
}

if (tmp_kw_call_arg_value_1_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_aws_security_credentials);
tmp_expression_value_16 = par_aws_security_credentials;
tmp_kw_call_arg_value_2_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_access_key_id);
if (tmp_kw_call_arg_value_2_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_credential_scope);
tmp_kw_call_arg_value_3_5 = var_credential_scope;
CHECK_OBJECT(var_signed_headers);
tmp_kw_call_arg_value_4_4 = var_signed_headers;
CHECK_OBJECT(var_signature);
tmp_kw_call_arg_value_5_2 = var_signature;
frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5, tmp_kw_call_arg_value_3_5, tmp_kw_call_arg_value_4_4, tmp_kw_call_arg_value_5_2};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS6(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_5);
Py_DECREF(tmp_kw_call_arg_value_2_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_authorization_header == NULL);
var_authorization_header = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_authorization_header;
CHECK_OBJECT(var_authorization_header);
tmp_dict_value_1 = var_authorization_header;
tmp_assign_source_23 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_authentication_header == NULL);
var_authentication_header = tmp_assign_source_23;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_date;
if (var_full_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 342;
type_description_1 = "ooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_3 = var_full_headers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooooooooooooooooooo";
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
CHECK_OBJECT(var_amz_date);
tmp_dictset_value = var_amz_date;
CHECK_OBJECT(var_authentication_header);
tmp_dictset_dict = var_authentication_header;
tmp_dictset_key = mod_consts.const_str_plain_amz_date;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map,
    type_description_1,
    par_host,
    par_canonical_uri,
    par_canonical_querystring,
    par_method,
    par_region,
    par_aws_security_credentials,
    par_request_payload,
    par_additional_headers,
    var_service_name,
    var_current_time,
    var_amz_date,
    var_date_stamp,
    var_full_headers,
    var_key,
    var_canonical_headers,
    var_header_keys,
    var_signed_headers,
    var_payload_hash,
    var_canonical_request,
    var_credential_scope,
    var_string_to_sign,
    var_signing_key,
    var_signature,
    var_authorization_header,
    var_authentication_header
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map == cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map);
    cache_frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__6__generate_authentication_header_map);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_authentication_header);
tmp_return_value = var_authentication_header;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_service_name);
CHECK_OBJECT(var_service_name);
Py_DECREF(var_service_name);
var_service_name = NULL;
CHECK_OBJECT(var_current_time);
CHECK_OBJECT(var_current_time);
Py_DECREF(var_current_time);
var_current_time = NULL;
CHECK_OBJECT(var_amz_date);
CHECK_OBJECT(var_amz_date);
Py_DECREF(var_amz_date);
var_amz_date = NULL;
CHECK_OBJECT(var_date_stamp);
CHECK_OBJECT(var_date_stamp);
Py_DECREF(var_date_stamp);
var_date_stamp = NULL;
Py_XDECREF(var_full_headers);
var_full_headers = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_canonical_headers);
var_canonical_headers = NULL;
CHECK_OBJECT(var_header_keys);
CHECK_OBJECT(var_header_keys);
Py_DECREF(var_header_keys);
var_header_keys = NULL;
CHECK_OBJECT(var_signed_headers);
CHECK_OBJECT(var_signed_headers);
Py_DECREF(var_signed_headers);
var_signed_headers = NULL;
CHECK_OBJECT(var_payload_hash);
CHECK_OBJECT(var_payload_hash);
Py_DECREF(var_payload_hash);
var_payload_hash = NULL;
CHECK_OBJECT(var_canonical_request);
CHECK_OBJECT(var_canonical_request);
Py_DECREF(var_canonical_request);
var_canonical_request = NULL;
CHECK_OBJECT(var_credential_scope);
CHECK_OBJECT(var_credential_scope);
Py_DECREF(var_credential_scope);
var_credential_scope = NULL;
CHECK_OBJECT(var_string_to_sign);
CHECK_OBJECT(var_string_to_sign);
Py_DECREF(var_string_to_sign);
var_string_to_sign = NULL;
CHECK_OBJECT(var_signing_key);
CHECK_OBJECT(var_signing_key);
Py_DECREF(var_signing_key);
var_signing_key = NULL;
CHECK_OBJECT(var_signature);
CHECK_OBJECT(var_signature);
Py_DECREF(var_signature);
var_signature = NULL;
CHECK_OBJECT(var_authorization_header);
CHECK_OBJECT(var_authorization_header);
Py_DECREF(var_authorization_header);
var_authorization_header = NULL;
CHECK_OBJECT(var_authentication_header);
CHECK_OBJECT(var_authentication_header);
Py_DECREF(var_authentication_header);
var_authentication_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_service_name);
var_service_name = NULL;
Py_XDECREF(var_current_time);
var_current_time = NULL;
Py_XDECREF(var_amz_date);
var_amz_date = NULL;
Py_XDECREF(var_date_stamp);
var_date_stamp = NULL;
Py_XDECREF(var_full_headers);
var_full_headers = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_canonical_headers);
var_canonical_headers = NULL;
Py_XDECREF(var_header_keys);
var_header_keys = NULL;
Py_XDECREF(var_signed_headers);
var_signed_headers = NULL;
Py_XDECREF(var_payload_hash);
var_payload_hash = NULL;
Py_XDECREF(var_canonical_request);
var_canonical_request = NULL;
Py_XDECREF(var_credential_scope);
var_credential_scope = NULL;
Py_XDECREF(var_string_to_sign);
var_string_to_sign = NULL;
Py_XDECREF(var_signing_key);
var_signing_key = NULL;
Py_XDECREF(var_signature);
var_signature = NULL;
Py_XDECREF(var_authorization_header);
var_authorization_header = NULL;
Py_XDECREF(var_authentication_header);
var_authentication_header = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_canonical_uri);
Py_DECREF(par_canonical_uri);
CHECK_OBJECT(par_canonical_querystring);
Py_DECREF(par_canonical_querystring);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_aws_security_credentials);
Py_DECREF(par_aws_security_credentials);
CHECK_OBJECT(par_request_payload);
Py_DECREF(par_request_payload);
CHECK_OBJECT(par_additional_headers);
Py_DECREF(par_additional_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_canonical_uri);
Py_DECREF(par_canonical_uri);
CHECK_OBJECT(par_canonical_querystring);
Py_DECREF(par_canonical_querystring);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_aws_security_credentials);
Py_DECREF(par_aws_security_credentials);
CHECK_OBJECT(par_request_payload);
Py_DECREF(par_request_payload);
CHECK_OBJECT(par_additional_headers);
Py_DECREF(par_additional_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__7_get_aws_security_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_ce9dde1c26639ea99a425bae81d306c6, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials = cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = const_str_empty;
frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials->m_frame.f_lineno = 387;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 387;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials,
    type_description_1,
    par_self,
    par_context,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials == cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials);
    cache_frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__7_get_aws_security_credentials);

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
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$aws$$$function__8_get_aws_region(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__8_get_aws_region;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__8_get_aws_region = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__8_get_aws_region)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__8_get_aws_region);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__8_get_aws_region == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__8_get_aws_region = MAKE_FUNCTION_FRAME(tstate, code_objects_575e67b2775ec23b9577440782a305e8, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__8_get_aws_region->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__8_get_aws_region = cache_frame_frame_google$auth$aws$$$function__8_get_aws_region;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__8_get_aws_region);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__8_get_aws_region) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = const_str_empty;
frame_frame_google$auth$aws$$$function__8_get_aws_region->m_frame.f_lineno = 406;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 406;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__8_get_aws_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__8_get_aws_region->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__8_get_aws_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__8_get_aws_region,
    type_description_1,
    par_self,
    par_context,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__8_get_aws_region == cache_frame_frame_google$auth$aws$$$function__8_get_aws_region) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__8_get_aws_region);
    cache_frame_frame_google$auth$aws$$$function__8_get_aws_region = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__8_get_aws_region);

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
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$aws$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_credential_source = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e023be43c1ce713c92b98b04a821ad74, module_google$auth$aws, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__9___init__->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__9___init__ = cache_frame_frame_google$auth$aws$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__9___init__);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_1 = par_credential_source;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__9___init__->m_frame.f_lineno = 415;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_region_url_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__region_url, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_2 = par_credential_source;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__9___init__->m_frame.f_lineno = 416;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_url_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__security_credentials_url, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_3 = par_credential_source;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__9___init__->m_frame.f_lineno = 417;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_imdsv2_session_token_url_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__imdsv2_session_token_url, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__9___init__,
    type_description_1,
    par_self,
    par_credential_source
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__9___init__ == cache_frame_frame_google$auth$aws$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__9___init__);
    cache_frame_frame_google$auth$aws$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__9___init__);

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
CHECK_OBJECT(par_credential_source);
Py_DECREF(par_credential_source);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_credential_source);
Py_DECREF(par_credential_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__10_get_aws_security_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *var_env_aws_access_key_id = NULL;
PyObject *var_env_aws_secret_access_key = NULL;
PyObject *var_env_aws_session_token = NULL;
PyObject *var_imdsv2_session_token = NULL;
PyObject *var_role_name = NULL;
PyObject *var_credentials = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_962c7a1e68c4910b74b993a87aca213b, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials = cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials) == 2);

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


exception_lineno = 425;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$aws$environment_vars(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_AWS_ACCESS_KEY_ID);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 425;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_env_aws_access_key_id == NULL);
var_env_aws_access_key_id = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_environ);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_google$auth$aws$environment_vars(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 427;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 427;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 426;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_env_aws_secret_access_key == NULL);
var_env_aws_secret_access_key = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_environ);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_google$auth$aws$environment_vars(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 430;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_AWS_SESSION_TOKEN);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 430;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 430;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_env_aws_session_token == NULL);
var_env_aws_session_token = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_env_aws_access_key_id);
tmp_truth_name_1 = CHECK_IF_TRUE(var_env_aws_access_key_id);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_env_aws_secret_access_key);
tmp_truth_name_2 = CHECK_IF_TRUE(var_env_aws_secret_access_key);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_google$auth$aws$AwsSecurityCredentials(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AwsSecurityCredentials);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_env_aws_access_key_id);
tmp_args_element_value_4 = var_env_aws_access_key_id;
CHECK_OBJECT(var_env_aws_secret_access_key);
tmp_args_element_value_5 = var_env_aws_secret_access_key;
CHECK_OBJECT(var_env_aws_session_token);
tmp_args_element_value_6 = var_env_aws_session_token;
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 432;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_7 = par_request;
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 436;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_imdsv2_session_token, tmp_args_element_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_imdsv2_session_token == NULL);
var_imdsv2_session_token = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_8 = par_request;
CHECK_OBJECT(var_imdsv2_session_token);
tmp_args_element_value_9 = var_imdsv2_session_token;
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 437;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__get_metadata_role_name,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_role_name == NULL);
var_role_name = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_10 = par_request;
CHECK_OBJECT(var_role_name);
tmp_args_element_value_11 = var_role_name;
CHECK_OBJECT(var_imdsv2_session_token);
tmp_args_element_value_12 = var_imdsv2_session_token;
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__get_metadata_security_credentials,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_credentials == NULL);
var_credentials = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_12;
tmp_called_value_5 = module_var_accessor_google$auth$aws$AwsSecurityCredentials(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AwsSecurityCredentials);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_credentials);
tmp_expression_value_10 = var_credentials;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 445;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_AccessKeyId_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_credentials);
tmp_expression_value_11 = var_credentials;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 446;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 446;
tmp_args_element_value_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_SecretAccessKey_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 446;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_credentials);
tmp_expression_value_12 = var_credentials;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);

exception_lineno = 447;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 447;
tmp_args_element_value_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_Token_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);

exception_lineno = 447;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials,
    type_description_1,
    par_self,
    par_context,
    par_request,
    var_env_aws_access_key_id,
    var_env_aws_secret_access_key,
    var_env_aws_session_token,
    var_imdsv2_session_token,
    var_role_name,
    var_credentials
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials == cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials);
    cache_frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__10_get_aws_security_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_env_aws_access_key_id);
CHECK_OBJECT(var_env_aws_access_key_id);
Py_DECREF(var_env_aws_access_key_id);
var_env_aws_access_key_id = NULL;
CHECK_OBJECT(var_env_aws_secret_access_key);
CHECK_OBJECT(var_env_aws_secret_access_key);
Py_DECREF(var_env_aws_secret_access_key);
var_env_aws_secret_access_key = NULL;
CHECK_OBJECT(var_env_aws_session_token);
CHECK_OBJECT(var_env_aws_session_token);
Py_DECREF(var_env_aws_session_token);
var_env_aws_session_token = NULL;
Py_XDECREF(var_imdsv2_session_token);
var_imdsv2_session_token = NULL;
Py_XDECREF(var_role_name);
var_role_name = NULL;
Py_XDECREF(var_credentials);
var_credentials = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_env_aws_access_key_id);
var_env_aws_access_key_id = NULL;
Py_XDECREF(var_env_aws_secret_access_key);
var_env_aws_secret_access_key = NULL;
Py_XDECREF(var_env_aws_session_token);
var_env_aws_session_token = NULL;
Py_XDECREF(var_imdsv2_session_token);
var_imdsv2_session_token = NULL;
Py_XDECREF(var_role_name);
var_role_name = NULL;
Py_XDECREF(var_credentials);
var_credentials = NULL;
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
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__11_get_aws_region(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_context = python_pars[1];
PyObject *par_request = python_pars[2];
PyObject *var_env_aws_region = NULL;
PyObject *var_headers = NULL;
PyObject *var_imdsv2_session_token = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__11_get_aws_region;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__11_get_aws_region = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__11_get_aws_region)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__11_get_aws_region);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__11_get_aws_region == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__11_get_aws_region = MAKE_FUNCTION_FRAME(tstate, code_objects_368abc1c7c12c4ca5dbc6d2a8350de18, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__11_get_aws_region->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__11_get_aws_region = cache_frame_frame_google$auth$aws$$$function__11_get_aws_region;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__11_get_aws_region);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__11_get_aws_region) == 2);

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


exception_lineno = 455;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$aws$environment_vars(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 455;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_AWS_REGION);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 455;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 455;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_env_aws_region == NULL);
var_env_aws_region = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_env_aws_region);
tmp_cmp_expr_left_1 = var_env_aws_region;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_env_aws_region);
tmp_return_value = var_env_aws_region;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_environ);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_google$auth$aws$environment_vars(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 459;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_AWS_DEFAULT_REGION);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 459;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 459;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_env_aws_region;
    assert(old != NULL);
    var_env_aws_region = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_env_aws_region);
tmp_cmp_expr_left_2 = var_env_aws_region;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_env_aws_region);
tmp_return_value = var_env_aws_region;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__region_url);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 464;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 464;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_5943970e14eccb15a07d6ab30148e6fb_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 464;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_headers == NULL);
Py_INCREF(tmp_assign_source_3);
var_headers = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_3 = par_request;
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 467;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_imdsv2_session_token, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_imdsv2_session_token == NULL);
var_imdsv2_session_token = tmp_assign_source_4;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_imdsv2_session_token);
tmp_cmp_expr_left_3 = var_imdsv2_session_token;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e;
CHECK_OBJECT(var_imdsv2_session_token);
tmp_dict_value_1 = var_imdsv2_session_token;
tmp_assign_source_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_request);
tmp_called_value_3 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__region_url);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_1 = var_headers;
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 471;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
bool tmp_condition_result_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_response);
tmp_expression_value_10 = var_response;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_data);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_12 = var_response;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_data);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 475;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_13 = var_response;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_data);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_response);
tmp_expression_value_14 = var_response;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_google$auth$aws$http_client(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 480;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 480;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_16 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_42ec356c71b83a15b86e610c746c8860;
CHECK_OBJECT(var_response_body);
tmp_kw_call_arg_value_1_1 = var_response_body;
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 482;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 482;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame.f_lineno = 481;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 481;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_body);
tmp_expression_value_17 = var_response_body;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__11_get_aws_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__11_get_aws_region->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__11_get_aws_region, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__11_get_aws_region,
    type_description_1,
    par_self,
    par_context,
    par_request,
    var_env_aws_region,
    var_headers,
    var_imdsv2_session_token,
    var_response,
    var_response_body
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__11_get_aws_region == cache_frame_frame_google$auth$aws$$$function__11_get_aws_region) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__11_get_aws_region);
    cache_frame_frame_google$auth$aws$$$function__11_get_aws_region = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__11_get_aws_region);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_env_aws_region);
CHECK_OBJECT(var_env_aws_region);
Py_DECREF(var_env_aws_region);
var_env_aws_region = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_imdsv2_session_token);
var_imdsv2_session_token = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_env_aws_region);
var_env_aws_region = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_imdsv2_session_token);
var_imdsv2_session_token = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
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
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__12__get_imdsv2_session_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_headers = NULL;
PyObject *var_imdsv2_session_token_response = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token = MAKE_FUNCTION_FRAME(tstate, code_objects_054c6add381873a8b461ac339ee5ecef, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token = cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token) == 2);

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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_request);
tmp_cmp_expr_left_1 = par_request;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__imdsv2_session_token_url);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_0e47daa4c0bcfd8c7e0303654140765c;
tmp_dict_value_1 = module_var_accessor_google$auth$aws$_IMDSV2_SESSION_TOKEN_TTL_SECONDS(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 492;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_request);
tmp_called_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__imdsv2_session_token_url);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_PUT;
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_1 = var_headers;
frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token->m_frame.f_lineno = 495;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_imdsv2_session_token_response == NULL);
var_imdsv2_session_token_response = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_imdsv2_session_token_response);
tmp_expression_value_3 = var_imdsv2_session_token_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$aws$http_client(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 499;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 499;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c59a09c312ef10dcfb9647347eb84d6d;
CHECK_OBJECT(var_imdsv2_session_token_response);
tmp_expression_value_6 = var_imdsv2_session_token_response;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 502;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token->m_frame.f_lineno = 501;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 501;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token->m_frame.f_lineno = 500;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 500;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_imdsv2_session_token_response);
tmp_expression_value_7 = var_imdsv2_session_token_response;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token,
    type_description_1,
    par_self,
    par_request,
    var_headers,
    var_imdsv2_session_token_response
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token == cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token);
    cache_frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__12__get_imdsv2_session_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_imdsv2_session_token_response);
var_imdsv2_session_token_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_imdsv2_session_token_response);
var_imdsv2_session_token_response = NULL;
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


static PyObject *impl_google$auth$aws$$$function__13__get_metadata_security_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_role_name = python_pars[2];
PyObject *par_imdsv2_session_token = python_pars[3];
PyObject *var_headers = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *var_credentials_response = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_imdsv2_session_token);
tmp_cmp_expr_left_1 = par_imdsv2_session_token;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e;
CHECK_OBJECT(par_imdsv2_session_token);
tmp_dict_value_1 = par_imdsv2_session_token;
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(var_headers == NULL);
Py_INCREF(tmp_assign_source_2);
var_headers = tmp_assign_source_2;
}
branch_end_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_5d3662af42b7a41e66b1bc7872a49ad6, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials = cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_request);
tmp_called_value_1 = par_request;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_fd005b348a64593f09cc040bfd9806ee;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__security_credentials_url);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_role_name);
tmp_kw_call_arg_value_2_1 = par_role_name;
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 539;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_1 = var_headers;
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 538;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_response);
tmp_expression_value_3 = var_response;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_data);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 546;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_6 = var_response;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 548;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_response);
tmp_expression_value_7 = var_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_google$auth$aws$http_client(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 551;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 551;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_9 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 552;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_4da2e9b1e490396712a88f17f26d9d2e;
CHECK_OBJECT(var_response_body);
tmp_kw_call_arg_value_1_2 = var_response_body;
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 553;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 553;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 552;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 552;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$aws$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 556;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_2 = var_response_body;
frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame.f_lineno = 556;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_loads, tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_credentials_response == NULL);
var_credentials_response = tmp_assign_source_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials,
    type_description_1,
    par_self,
    par_request,
    par_role_name,
    par_imdsv2_session_token,
    var_headers,
    var_response,
    var_response_body,
    var_credentials_response
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials == cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials);
    cache_frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__13__get_metadata_security_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_credentials_response);
tmp_return_value = var_credentials_response;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
CHECK_OBJECT(var_credentials_response);
CHECK_OBJECT(var_credentials_response);
Py_DECREF(var_credentials_response);
var_credentials_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
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
CHECK_OBJECT(par_role_name);
Py_DECREF(par_role_name);
CHECK_OBJECT(par_imdsv2_session_token);
Py_DECREF(par_imdsv2_session_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_role_name);
Py_DECREF(par_role_name);
CHECK_OBJECT(par_imdsv2_session_token);
Py_DECREF(par_imdsv2_session_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__14__get_metadata_role_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_imdsv2_session_token = python_pars[2];
PyObject *var_headers = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__14__get_metadata_role_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name = MAKE_FUNCTION_FRAME(tstate, code_objects_0dab3392fe4528d978434edcacc59d9c, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name = cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__14__get_metadata_role_name);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__14__get_metadata_role_name) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__security_credentials_url);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "oooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame.f_lineno = 580;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1067f26c6bf3b4df4feaa45aac601dbf_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 580;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_headers == NULL);
Py_INCREF(tmp_assign_source_1);
var_headers = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_imdsv2_session_token);
tmp_cmp_expr_left_2 = par_imdsv2_session_token;
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
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_78f2cf6f0550bfd11a32ba22079cf22e;
CHECK_OBJECT(par_imdsv2_session_token);
tmp_dict_value_1 = par_imdsv2_session_token;
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_request);
tmp_called_value_1 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__security_credentials_url);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_1 = var_headers;
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame.f_lineno = 588;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_method_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_response);
tmp_expression_value_4 = var_response;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_data);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_6 = var_response;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame.f_lineno = 594;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_7 = var_response;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_response);
tmp_expression_value_8 = var_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_google$auth$aws$http_client(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 599;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 599;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_10 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 600;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_b49a318721a2a3959e6414d18e3c8e13;
CHECK_OBJECT(var_response_body);
tmp_kw_call_arg_value_1_1 = var_response_body;
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame.f_lineno = 601;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 601;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame.f_lineno = 600;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 600;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__14__get_metadata_role_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__14__get_metadata_role_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__14__get_metadata_role_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__14__get_metadata_role_name,
    type_description_1,
    par_self,
    par_request,
    par_imdsv2_session_token,
    var_headers,
    var_response,
    var_response_body
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__14__get_metadata_role_name == cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name);
    cache_frame_frame_google$auth$aws$$$function__14__get_metadata_role_name = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__14__get_metadata_role_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_response_body);
tmp_return_value = var_response_body;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
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
CHECK_OBJECT(par_imdsv2_session_token);
Py_DECREF(par_imdsv2_session_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_imdsv2_session_token);
Py_DECREF(par_imdsv2_session_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$aws$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_audience = python_pars[1];
PyObject *par_subject_token_type = python_pars[2];
PyObject *par_token_url = python_pars[3];
PyObject *par_credential_source = python_pars[4];
PyObject *par_aws_security_credentials_supplier = python_pars[5];
PyObject *par_args = python_pars[6];
PyObject *par_kwargs = python_pars[7];
PyObject *var_environment_id = NULL;
PyObject *var_matches = NULL;
PyObject *var_env_id = NULL;
PyObject *var_env_version = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_57c08b4adc7ff360d23e92759a820475, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__15___init__->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__15___init__ = cache_frame_frame_google$auth$aws$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__15___init__);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$aws$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 663;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$aws, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
tmp_dict_key_1 = mod_consts.const_str_plain_audience;
CHECK_OBJECT(par_audience);
tmp_dict_value_1 = par_audience;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_subject_token_type;
CHECK_OBJECT(par_subject_token_type);
tmp_dict_value_1 = par_subject_token_type;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_token_url;
CHECK_OBJECT(par_token_url);
tmp_dict_value_1 = par_token_url;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_credential_source;
CHECK_OBJECT(par_credential_source);
tmp_dict_value_1 = par_credential_source;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_keywords_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_credential_source);
tmp_cmp_expr_left_1 = par_credential_source;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_aws_security_credentials_supplier);
tmp_cmp_expr_left_2 = par_aws_security_credentials_supplier;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 672;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 672;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_657774c19614cce5955dfb9fa009ba39_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 672;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_credential_source);
tmp_cmp_expr_left_3 = par_credential_source;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_aws_security_credentials_supplier);
tmp_cmp_expr_left_4 = par_aws_security_credentials_supplier;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 679;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_InvalidValue,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_782dab3386fd2d95f3ac238fdf3e90ed_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 679;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooN";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_aws_security_credentials_supplier);
tmp_truth_name_1 = CHECK_IF_TRUE(par_aws_security_credentials_supplier);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 683;
type_description_1 = "ooooooooooooN";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_aws_security_credentials_supplier);
tmp_assattr_value_1 = par_aws_security_credentials_supplier;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__aws_security_credentials_supplier, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = module_var_accessor_google$auth$aws$_DEFAULT_AWS_REGIONAL_CREDENTIAL_VERIFICATION_URL(tstate);
if (unlikely(tmp_assattr_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc);
}

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 687;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__cred_verification_url, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_2 = par_credential_source;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 690;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_environment_id_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 690;
type_description_1 = "ooooooooooooN";
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
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_environment_id == NULL);
var_environment_id = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_google$auth$aws$_DefaultAwsSecurityCredentialsSupplier(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 692;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_credential_source);
tmp_args_element_value_1 = par_credential_source;
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 692;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__aws_security_credentials_supplier, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_credential_source);
tmp_expression_value_3 = par_credential_source;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 694;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_regional_cred_verification_url_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__cred_verification_url, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_google$auth$aws$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 699;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_5959ff037b3ad84868bb89065e64980a;
CHECK_OBJECT(var_environment_id);
tmp_args_element_value_3 = var_environment_id;
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 699;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_matches == NULL);
var_matches = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(var_matches);
tmp_truth_name_2 = CHECK_IF_TRUE(var_matches);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooooooooN";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_matches);
tmp_called_instance_4 = var_matches;
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 701;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_groups);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "ooooooooooooN";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_env_id == NULL);
Py_INCREF(tmp_assign_source_6);
var_env_id = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_env_version == NULL);
Py_INCREF(tmp_assign_source_7);
var_env_version = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_tuple_none_none_tuple;
tmp_assign_source_8 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 703;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 703;
type_description_1 = "ooooooooooooN";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 703;
type_description_1 = "ooooooooooooN";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
assert(var_env_id == NULL);
Py_INCREF(tmp_assign_source_11);
var_env_id = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
assert(var_env_version == NULL);
Py_INCREF(tmp_assign_source_12);
var_env_version = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_end_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_env_id);
tmp_cmp_expr_left_5 = var_env_id;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_aws;
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__cred_verification_url);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_or_right_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_condition_result_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_5 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 706;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 706;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_InvalidResource,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3debe8b6b1a78bdca25e1c11d9b9efae_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 706;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooN";
goto frame_exception_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_env_version);
tmp_cmp_expr_left_7 = var_env_version;
tmp_cmp_expr_right_7 = Py_None;
tmp_or_left_value_3 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_env_version);
tmp_int_arg_1 = var_env_version;
tmp_cmp_expr_left_8 = PyNumber_Int(tmp_int_arg_1);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = const_int_pos_1;
tmp_or_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_6 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_5 = module_var_accessor_google$auth$aws$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 710;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3a9a0e13841f11de235984bd1d99f0fb;
CHECK_OBJECT(var_env_version);
tmp_kw_call_arg_value_1_1 = var_env_version;
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 711;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 711;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__15___init__->m_frame.f_lineno = 710;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 710;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooN";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_end_5:;
branch_end_3:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_audience);
tmp_assattr_value_5 = par_audience;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__target_resource, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__request_signer, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "ooooooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__15___init__,
    type_description_1,
    par_self,
    par_audience,
    par_subject_token_type,
    par_token_url,
    par_credential_source,
    par_aws_security_credentials_supplier,
    par_args,
    par_kwargs,
    var_environment_id,
    var_matches,
    var_env_id,
    var_env_version,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__15___init__ == cache_frame_frame_google$auth$aws$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__15___init__);
    cache_frame_frame_google$auth$aws$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__15___init__);

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
Py_XDECREF(var_environment_id);
var_environment_id = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_env_id);
var_env_id = NULL;
Py_XDECREF(var_env_version);
var_env_version = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_environment_id);
var_environment_id = NULL;
Py_XDECREF(var_matches);
var_matches = NULL;
Py_XDECREF(var_env_id);
var_env_id = NULL;
Py_XDECREF(var_env_version);
var_env_version = NULL;
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
CHECK_OBJECT(par_subject_token_type);
Py_DECREF(par_subject_token_type);
CHECK_OBJECT(par_token_url);
Py_DECREF(par_token_url);
CHECK_OBJECT(par_credential_source);
Py_DECREF(par_credential_source);
CHECK_OBJECT(par_aws_security_credentials_supplier);
Py_DECREF(par_aws_security_credentials_supplier);
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
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_subject_token_type);
Py_DECREF(par_subject_token_type);
CHECK_OBJECT(par_token_url);
Py_DECREF(par_token_url);
CHECK_OBJECT(par_credential_source);
Py_DECREF(par_credential_source);
CHECK_OBJECT(par_aws_security_credentials_supplier);
Py_DECREF(par_aws_security_credentials_supplier);
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


static PyObject *impl_google$auth$aws$$$function__16_retrieve_subject_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_aws_security_credentials = NULL;
PyObject *var_request_options = NULL;
PyObject *var_request_headers = NULL;
PyObject *var_aws_signed_req = NULL;
PyObject *var_key = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__16_retrieve_subject_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token = MAKE_FUNCTION_FRAME(tstate, code_objects_b2c9f8b6e2cd01e381f50eb42cc47ae7, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token = cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__16_retrieve_subject_token);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__16_retrieve_subject_token) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__request_signer);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "ooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__aws_security_credentials_supplier);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_aws_region);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__supplier_context);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 756;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_2 = par_request;
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 755;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__region, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 755;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_google$auth$aws$RequestSigner(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestSigner);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 758;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__region);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 758;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__request_signer, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__aws_security_credentials_supplier);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_get_aws_security_credentials);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__supplier_context);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 764;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_5 = par_request;
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 763;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_aws_security_credentials == NULL);
var_aws_security_credentials = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__request_signer);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_get_request_options);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aws_security_credentials);
tmp_args_element_value_6 = var_aws_security_credentials;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__cred_verification_url);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 771;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 771;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_digest_1ba278cf5508f02581f5cd5f4867e87a;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__region);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_called_value_5);

exception_lineno = 771;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 771;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 771;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_POST;
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 769;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_10};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 769;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_request_options == NULL);
var_request_options = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_request_options);
tmp_expression_value_14 = var_request_options;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 786;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_headers_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_request_headers == NULL);
var_request_headers = tmp_assign_source_3;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__target_resource);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_request_headers);
tmp_ass_subscribed_1 = var_request_headers;
tmp_ass_subscript_1 = mod_consts.const_str_digest_60b4bc1bf5c25a1d262848c7ea196703;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(var_aws_signed_req == NULL);
var_aws_signed_req = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_request_options);
tmp_expression_value_16 = var_request_options;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 795;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 795;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_url_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 795;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aws_signed_req);
tmp_dictset_dict = var_aws_signed_req;
tmp_dictset_key = mod_consts.const_str_plain_url;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_request_options);
tmp_expression_value_17 = var_request_options;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 796;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_method_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aws_signed_req);
tmp_dictset_dict = var_aws_signed_req;
tmp_dictset_key = mod_consts.const_str_plain_method;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(var_aws_signed_req);
tmp_dictset_dict = var_aws_signed_req;
tmp_dictset_key = mod_consts.const_str_plain_headers;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_request_headers);
tmp_expression_value_18 = var_request_headers;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_keys);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 799;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 799;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 799;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 799;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 799;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_11;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(var_aws_signed_req);
tmp_dict_arg_value_1 = var_aws_signed_req;
tmp_key_value_1 = mod_consts.const_str_plain_headers;
tmp_expression_value_19 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 800;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 800;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_key;
CHECK_OBJECT(var_key);
tmp_dict_value_1 = var_key;
tmp_args_element_value_11 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_1;
tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_value;
CHECK_OBJECT(var_request_headers);
tmp_expression_value_20 = var_request_headers;
CHECK_OBJECT(var_key);
tmp_subscript_value_1 = var_key;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_11);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 800;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 800;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 799;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_22 = module_var_accessor_google$auth$aws$urllib(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 804;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_parse);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 804;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 804;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = module_var_accessor_google$auth$aws$json(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 805;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_dumps);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 805;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_aws_signed_req);
tmp_tuple_element_1 = var_aws_signed_req;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_cc4bbbe542a9abe47a32e1b7fea52246);
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 805;
tmp_args_element_value_12 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 805;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame.f_lineno = 804;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 804;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__16_retrieve_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__16_retrieve_subject_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__16_retrieve_subject_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__16_retrieve_subject_token,
    type_description_1,
    par_self,
    par_request,
    var_aws_security_credentials,
    var_request_options,
    var_request_headers,
    var_aws_signed_req,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__16_retrieve_subject_token == cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token);
    cache_frame_frame_google$auth$aws$$$function__16_retrieve_subject_token = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__16_retrieve_subject_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_aws_security_credentials);
CHECK_OBJECT(var_aws_security_credentials);
Py_DECREF(var_aws_security_credentials);
var_aws_security_credentials = NULL;
CHECK_OBJECT(var_request_options);
CHECK_OBJECT(var_request_options);
Py_DECREF(var_request_options);
var_request_options = NULL;
CHECK_OBJECT(var_request_headers);
CHECK_OBJECT(var_request_headers);
Py_DECREF(var_request_headers);
var_request_headers = NULL;
CHECK_OBJECT(var_aws_signed_req);
CHECK_OBJECT(var_aws_signed_req);
Py_DECREF(var_aws_signed_req);
var_aws_signed_req = NULL;
Py_XDECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_aws_security_credentials);
var_aws_security_credentials = NULL;
Py_XDECREF(var_request_options);
var_request_options = NULL;
Py_XDECREF(var_request_headers);
var_request_headers = NULL;
Py_XDECREF(var_aws_signed_req);
var_aws_signed_req = NULL;
Py_XDECREF(var_key);
var_key = NULL;
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


static PyObject *impl_google$auth$aws$$$function__17__create_default_metrics_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_metrics_options = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__17__create_default_metrics_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options = MAKE_FUNCTION_FRAME(tstate, code_objects_eb9eea42f3602e8652ee520a0e93dc8f, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__17__create_default_metrics_options = cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__17__create_default_metrics_options);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__17__create_default_metrics_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$aws$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 809;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$aws, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__17__create_default_metrics_options->m_frame.f_lineno = 809;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__create_default_metrics_options);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 809;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
assert(var_metrics_options == NULL);
var_metrics_options = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_aws;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_1 = var_metrics_options;
tmp_ass_subscript_1 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 810;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$aws$$$function__17__create_default_metrics_options->m_frame.f_lineno = 811;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__has_custom_supplier);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 811;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 811;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_programmatic;
CHECK_OBJECT(var_metrics_options);
tmp_ass_subscribed_2 = var_metrics_options;
tmp_ass_subscript_2 = mod_consts.const_str_plain_source;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__17__create_default_metrics_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__17__create_default_metrics_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__17__create_default_metrics_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__17__create_default_metrics_options,
    type_description_1,
    par_self,
    var_metrics_options,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__17__create_default_metrics_options == cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options);
    cache_frame_frame_google$auth$aws$$$function__17__create_default_metrics_options = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__17__create_default_metrics_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_metrics_options);
tmp_return_value = var_metrics_options;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_metrics_options);
CHECK_OBJECT(var_metrics_options);
Py_DECREF(var_metrics_options);
var_metrics_options = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_metrics_options);
var_metrics_options = NULL;
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


static PyObject *impl_google$auth$aws$$$function__18__has_custom_supplier(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__18__has_custom_supplier;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier = MAKE_FUNCTION_FRAME(tstate, code_objects_a7620d97731393bbcb1d97315a5378b8, module_google$auth$aws, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__18__has_custom_supplier = cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__18__has_custom_supplier);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__18__has_custom_supplier) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__credential_source);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__18__has_custom_supplier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__18__has_custom_supplier->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__18__has_custom_supplier, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__18__has_custom_supplier,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__18__has_custom_supplier == cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier);
    cache_frame_frame_google$auth$aws$$$function__18__has_custom_supplier = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__18__has_custom_supplier);

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


static PyObject *impl_google$auth$aws$$$function__19__constructor_args(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_args = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__19__constructor_args;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__19__constructor_args = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__19__constructor_args)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__19__constructor_args);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__19__constructor_args == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__19__constructor_args = MAKE_FUNCTION_FRAME(tstate, code_objects_098d1ed197c0e046e6605c51cc7c2937, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__19__constructor_args->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__19__constructor_args = cache_frame_frame_google$auth$aws$$$function__19__constructor_args;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__19__constructor_args);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__19__constructor_args) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$aws$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 819;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$aws, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 819;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__19__constructor_args->m_frame.f_lineno = 819;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__constructor_args);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 819;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
assert(var_args == NULL);
var_args = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$aws$$$function__19__constructor_args->m_frame.f_lineno = 821;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__has_custom_supplier);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 821;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 821;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_args);
tmp_expression_value_1 = var_args;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_aws_security_credentials_supplier;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__aws_security_credentials_supplier);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 824;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_google$auth$aws$$$function__19__constructor_args->m_frame.f_lineno = 822;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__19__constructor_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__19__constructor_args->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__19__constructor_args, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__19__constructor_args,
    type_description_1,
    par_self,
    var_args,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__19__constructor_args == cache_frame_frame_google$auth$aws$$$function__19__constructor_args) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__19__constructor_args);
    cache_frame_frame_google$auth$aws$$$function__19__constructor_args = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__19__constructor_args);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_args);
tmp_return_value = var_args;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_args);
CHECK_OBJECT(var_args);
Py_DECREF(var_args);
var_args = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_args);
var_args = NULL;
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


static PyObject *impl_google$auth$aws$$$function__20_from_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_aws_security_credentials_supplier = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__20_from_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__20_from_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__20_from_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__20_from_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__20_from_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__20_from_info = MAKE_FUNCTION_FRAME(tstate, code_objects_8cedcdd2f805cac07423471322f8385e, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__20_from_info->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__20_from_info = cache_frame_frame_google$auth$aws$$$function__20_from_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__20_from_info);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__20_from_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_info);
tmp_expression_value_1 = par_info;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 844;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$aws$$$function__20_from_info->m_frame.f_lineno = 844;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_aws_security_credentials_supplier_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 844;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
assert(var_aws_security_credentials_supplier == NULL);
var_aws_security_credentials_supplier = tmp_assign_source_1;
}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_dict_key_1 = mod_consts.const_str_plain_aws_security_credentials_supplier;
CHECK_OBJECT(var_aws_security_credentials_supplier);
tmp_dict_value_1 = var_aws_security_credentials_supplier;
tmp_iterable_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 848;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$aws$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 850;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$aws, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_info);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 850;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_tuple_element_1 = par_info;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
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


exception_lineno = 850;
type_description_1 = "ooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__20_from_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__20_from_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__20_from_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__20_from_info,
    type_description_1,
    par_cls,
    par_info,
    par_kwargs,
    var_aws_security_credentials_supplier,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__20_from_info == cache_frame_frame_google$auth$aws$$$function__20_from_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__20_from_info);
    cache_frame_frame_google$auth$aws$$$function__20_from_info = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__20_from_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_aws_security_credentials_supplier);
CHECK_OBJECT(var_aws_security_credentials_supplier);
Py_DECREF(var_aws_security_credentials_supplier);
var_aws_security_credentials_supplier = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_aws_security_credentials_supplier);
var_aws_security_credentials_supplier = NULL;
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


static PyObject *impl_google$auth$aws$$$function__21_from_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$function__21_from_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$aws$$$function__21_from_file = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$aws$$$function__21_from_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$aws$$$function__21_from_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$aws$$$function__21_from_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$aws$$$function__21_from_file = MAKE_FUNCTION_FRAME(tstate, code_objects_ba0bb6f2cb4b99523cf5d4ddd871ac01, module_google$auth$aws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$aws$$$function__21_from_file->m_type_description == NULL);
frame_frame_google$auth$aws$$$function__21_from_file = cache_frame_frame_google$auth$aws$$$function__21_from_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$function__21_from_file);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$function__21_from_file) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$aws$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 863;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$aws, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_file);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 863;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
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


exception_lineno = 863;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$function__21_from_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$function__21_from_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$function__21_from_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$function__21_from_file,
    type_description_1,
    par_cls,
    par_filename,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$aws$$$function__21_from_file == cache_frame_frame_google$auth$aws$$$function__21_from_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$aws$$$function__21_from_file);
    cache_frame_frame_google$auth$aws$$$function__21_from_file = NULL;
}

assertFrameObject(frame_frame_google$auth$aws$$$function__21_from_file);

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



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__10_get_aws_security_credentials(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__10_get_aws_security_credentials,
        mod_consts.const_str_plain_get_aws_security_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6bccfab7d545027bef1abf5cdb3d065b,
#endif
        code_objects_962c7a1e68c4910b74b993a87aca213b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__11_get_aws_region(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__11_get_aws_region,
        mod_consts.const_str_plain_get_aws_region,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f4a0dbb955d7902a7868e4f68cb358d,
#endif
        code_objects_368abc1c7c12c4ca5dbc6d2a8350de18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__12__get_imdsv2_session_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__12__get_imdsv2_session_token,
        mod_consts.const_str_plain__get_imdsv2_session_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ffadb64cef0e0e834162b68ead64512,
#endif
        code_objects_054c6add381873a8b461ac339ee5ecef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__13__get_metadata_security_credentials(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__13__get_metadata_security_credentials,
        mod_consts.const_str_plain__get_metadata_security_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_da84bccbd0ea57ee56641432522619b5,
#endif
        code_objects_5d3662af42b7a41e66b1bc7872a49ad6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_783389783839766daf072303a8754953,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__14__get_metadata_role_name(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__14__get_metadata_role_name,
        mod_consts.const_str_plain__get_metadata_role_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bac16f44b7478a9e1a33cdb819d87002,
#endif
        code_objects_0dab3392fe4528d978434edcacc59d9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_cea96adb25b9ddac9c29d7f0d9eb1bc7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__15___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_57c08b4adc7ff360d23e92759a820475,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_9e8031b02e0997eb525f7cdece48fe0e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__16_retrieve_subject_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__16_retrieve_subject_token,
        mod_consts.const_str_plain_retrieve_subject_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee5b4eb753af0dbd321c5a140cc652e8,
#endif
        code_objects_b2c9f8b6e2cd01e381f50eb42cc47ae7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_26a6155808afeed9ffef7910eb05c1ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__17__create_default_metrics_options(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__17__create_default_metrics_options,
        mod_consts.const_str_plain__create_default_metrics_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c5e1d2b34a82bcc3493b4fed9f36469,
#endif
        code_objects_eb9eea42f3602e8652ee520a0e93dc8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__18__has_custom_supplier(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__18__has_custom_supplier,
        mod_consts.const_str_plain__has_custom_supplier,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_223a6dab34ee5dbfcea6cb8787d661a1,
#endif
        code_objects_a7620d97731393bbcb1d97315a5378b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__19__constructor_args(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__19__constructor_args,
        mod_consts.const_str_plain__constructor_args,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0942c1edbb706cce2ad2fe70cc0d77a1,
#endif
        code_objects_098d1ed197c0e046e6605c51cc7c2937,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d78345715e142fad6ccd7ba8257d55ba,
#endif
        code_objects_9bd3ea79d54692b9524ceee37e7728c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_1bcd82c34922ba9bce62bee8b37afc4b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__20_from_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__20_from_info,
        mod_consts.const_str_plain_from_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_235941431ecb9ca24eb20b88770edeba,
#endif
        code_objects_8cedcdd2f805cac07423471322f8385e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_c7983d2f447fa559b6b0c313ebcf99d2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__21_from_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__21_from_file,
        mod_consts.const_str_plain_from_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_987cb2208d197b62244cc44a9c8137db,
#endif
        code_objects_ba0bb6f2cb4b99523cf5d4ddd871ac01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_e002fa3d0754cb34b132d37bb270838e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__2_get_request_options(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__2_get_request_options,
        mod_consts.const_str_plain_get_request_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f9315aba46deb9bf7d1e79593e2b22ec,
#endif
        code_objects_7f21de43a85d4748e1be645ea0b40df7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_7d7b40f3298487ab2b732e6d2273b400,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__3__get_canonical_querystring(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__3__get_canonical_querystring,
        mod_consts.const_str_plain__get_canonical_querystring,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_768947fa5ce022b986ef9bcf00e1e907,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_c3af2c51f38d8934606cc7197521315d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__4__sign(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__4__sign,
        mod_consts.const_str_plain__sign,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_196d622b4a991b59f140622115596adc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_4b661685eb2a43d44d01ee322c34777f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__5__get_signing_key(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__5__get_signing_key,
        mod_consts.const_str_plain__get_signing_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7c7fda98c3cb88c64eecef2c2dede4da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_a609b022030a3082fc71545ffa049143,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__6__generate_authentication_header_map(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__6__generate_authentication_header_map,
        mod_consts.const_str_plain__generate_authentication_header_map,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_89be6c2b33c1b77ae47e23f76e98adc2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_b0b04ceddbb7c6e4281a81e193c2ee1b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__7_get_aws_security_credentials(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__7_get_aws_security_credentials,
        mod_consts.const_str_plain_get_aws_security_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_60ac47e3cc7b018c8807f7bbd6bb5367,
#endif
        code_objects_ce9dde1c26639ea99a425bae81d306c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_d94e7939f2618d46aee897b8cad73faa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__8_get_aws_region(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__8_get_aws_region,
        mod_consts.const_str_plain_get_aws_region,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f414ac400ab24de3442891e76f239bfd,
#endif
        code_objects_575e67b2775ec23b9577440782a305e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
        mod_consts.const_str_digest_f7e2c81ca3ebd5a254ee1141ccda99ca,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$aws$$$function__9___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$aws$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1f28f763b89e4482a9b08d3a9954061e,
#endif
        code_objects_e023be43c1ce713c92b98b04a821ad74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$aws,
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

static function_impl_code const function_table_google$auth$aws[] = {
impl_google$auth$aws$$$function__1___init__,
impl_google$auth$aws$$$function__2_get_request_options,
impl_google$auth$aws$$$function__3__get_canonical_querystring,
impl_google$auth$aws$$$function__4__sign,
impl_google$auth$aws$$$function__5__get_signing_key,
impl_google$auth$aws$$$function__6__generate_authentication_header_map,
impl_google$auth$aws$$$function__7_get_aws_security_credentials,
impl_google$auth$aws$$$function__8_get_aws_region,
impl_google$auth$aws$$$function__9___init__,
impl_google$auth$aws$$$function__10_get_aws_security_credentials,
impl_google$auth$aws$$$function__11_get_aws_region,
impl_google$auth$aws$$$function__12__get_imdsv2_session_token,
impl_google$auth$aws$$$function__13__get_metadata_security_credentials,
impl_google$auth$aws$$$function__14__get_metadata_role_name,
impl_google$auth$aws$$$function__15___init__,
impl_google$auth$aws$$$function__16_retrieve_subject_token,
impl_google$auth$aws$$$function__17__create_default_metrics_options,
impl_google$auth$aws$$$function__18__has_custom_supplier,
impl_google$auth$aws$$$function__19__constructor_args,
impl_google$auth$aws$$$function__20_from_info,
impl_google$auth$aws$$$function__21_from_file,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$aws);
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
        module_google$auth$aws,
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
        function_table_google$auth$aws,
        sizeof(function_table_google$auth$aws) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.aws";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$aws(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$aws");

    // Store the module for future use.
    module_google$auth$aws = module;

    moduledict_google$auth$aws = MODULE_DICT(module_google$auth$aws);

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
        PRINT_STRING("google$auth$aws: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$aws: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$aws: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aws" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$aws\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$aws,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$aws,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$aws,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aws,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$aws,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$aws);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$aws);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
struct Nuitka_CellObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
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
struct Nuitka_FrameObject *frame_frame_google$auth$aws;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$aws$$$class__1_RequestSigner_76 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$class__1_RequestSigner_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_google$auth$aws$$$class__5_Credentials_607 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$aws$$$class__5_Credentials_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_4ba040d3eeea161027510c0216b6dd1c;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$aws = MAKE_MODULE_FRAME(code_objects_f1f64d53b748577db1b68d9e745e5705, module_google$auth$aws);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws);
assert(Py_REFCNT(frame_frame_google$auth$aws) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$aws$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$aws$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 41;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 42;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 43;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_hmac;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 44;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 45;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 46;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_POSIXPATH();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_posixpath, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 49;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_urllib;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 51;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_urljoin_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 52;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_urljoin,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_urljoin);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 54;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_environment_vars_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 55;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_environment_vars);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 56;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$auth$aws;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_external_account_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_google$auth$aws->m_frame.f_lineno = 57;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$aws,
        mod_consts.const_str_plain_external_account,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_external_account);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_external_account, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_digest_d28e4629a1aeceb4fbcf9cfa98449559;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_ALGORITHM, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_str_plain_aws4_request;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_REQUEST_TYPE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_digest_e864059fd838b1820c6c2e76d5ce67b7;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_SECURITY_TOKEN_HEADER, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_digest_98cccf2c0b61e0129d25c8a8430d01b3;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__AWS_DATE_HEADER, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_digest_71d14ce0b6a971993b0e8dcc664d090e;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_digest_c70cb11b4463b2de2902969c4333d5fc, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_str_plain_300;
UPDATE_STRING_DICT0(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__IMDSV2_SESSION_TOKEN_TTL_SECONDS, tmp_assign_source_25);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_RequestSigner;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 76;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 76;

    goto try_except_handler_1;
}
frame_frame_google$auth$aws->m_frame.f_lineno = 76;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 76;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
branch_end_1:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$aws$$$class__1_RequestSigner_76 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_8a8e7667a2354b778d6c73cb2300f20e;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestSigner;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_76;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
frame_frame_google$auth$aws$$$class__1_RequestSigner_2 = MAKE_CLASS_FRAME(tstate, code_objects_7b8bfa2b46799f59ed396c70a434566a, module_google$auth$aws, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$class__1_RequestSigner_2);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$class__1_RequestSigner_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = const_str_empty;
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = MAKE_DICT_EMPTY(tstate);
PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_3);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__2_get_request_options(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, mod_consts.const_str_plain_get_request_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$class__1_RequestSigner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$class__1_RequestSigner_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$class__1_RequestSigner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$class__1_RequestSigner_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$aws$$$class__1_RequestSigner_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__region_name_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__1_RequestSigner_76, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_RequestSigner;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$auth$aws$$$class__1_RequestSigner_76;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 76;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_31 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$aws$$$class__1_RequestSigner_76);
locals_google$auth$aws$$$class__1_RequestSigner_76 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aws$$$class__1_RequestSigner_76);
locals_google$auth$aws$$$class__1_RequestSigner_76 = NULL;
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
exception_lineno = 76;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestSigner, tmp_assign_source_31);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_33;

tmp_assign_source_33 = MAKE_FUNCTION_google$auth$aws$$$function__3__get_canonical_querystring(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_canonical_querystring, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;

tmp_assign_source_34 = MAKE_FUNCTION_google$auth$aws$$$function__4__sign(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__sign, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;

tmp_assign_source_35 = MAKE_FUNCTION_google$auth$aws$$$function__5__get_signing_key(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__get_signing_key, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = const_str_empty;
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = MAKE_DICT_EMPTY(tstate);
PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_5);

tmp_assign_source_36 = MAKE_FUNCTION_google$auth$aws$$$function__6__generate_authentication_header_map(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_authentication_header_map, tmp_assign_source_36);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_38;
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_google$auth$aws$dataclass(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 347;

    goto try_except_handler_4;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_4b4bb7e4c1b9f00f64525774cbef99c6;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AwsSecurityCredentials;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_348;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3 = MAKE_CLASS_FRAME(tstate, code_objects_b3ccbbe1e946c090e211e89b95975e4c, module_google$auth$aws, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_access_key_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = (PyObject *)&PyUnicode_Type;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_secret_access_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = Py_None;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, mod_consts.const_str_plain_session_token, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_expression_value_7 = module_var_accessor_google$auth$aws$Optional(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_session_token;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$aws$$$class__2_AwsSecurityCredentials_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_6 = mod_consts.const_str_plain_AwsSecurityCredentials;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 348;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_1 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348);
locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348);
locals_google$auth$aws$$$class__2_AwsSecurityCredentials_348 = NULL;
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
exception_lineno = 348;
goto try_except_handler_4;
outline_result_4:;
frame_frame_google$auth$aws->m_frame.f_lineno = 347;
tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentials, tmp_assign_source_39);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_8;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_8 = module_var_accessor_google$auth$aws$abc(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;

    goto try_except_handler_7;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
tmp_assign_source_41 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
bool tmp_condition_result_5;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_42 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_42 == NULL) {
    tmp_assign_source_42 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_42);
}
assert(!(tmp_assign_source_42 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_42 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_42);
condexpr_end_2:;
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_3__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
tmp_args_value_4 = mod_consts.const_tuple_str_plain_AwsSecurityCredentialsSupplier_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 362;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_7;
}
frame_frame_google$auth$aws->m_frame.f_lineno = 362;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 362;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
branch_end_5:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_d5f6d1281d82c2b0079b805ce666942f;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_AwsSecurityCredentialsSupplier;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_362;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4 = MAKE_CLASS_FRAME(tstate, code_objects_b4b0b05f8b6d8c582a7331cc85f66c28, module_google$auth$aws, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = PyObject_GetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_google$auth$aws$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$aws$$$function__7_get_aws_security_credentials(tstate);

frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4->m_frame.f_lineno = 368;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain_get_aws_security_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = PyObject_GetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$auth$aws$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 389;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$aws$$$function__8_get_aws_region(tstate);

frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4->m_frame.f_lineno = 389;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain_get_aws_region, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AwsSecurityCredentialsSupplier;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 362;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_45 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362);
locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362);
locals_google$auth$aws$$$class__3_AwsSecurityCredentialsSupplier_362 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 362;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_AwsSecurityCredentialsSupplier, tmp_assign_source_45);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_google$auth$aws$AwsSecurityCredentialsSupplier(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;

    goto try_except_handler_10;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_2;
PyObject *tmp_type_arg_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_14 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
if (tmp_type_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_4);
CHECK_OBJECT(tmp_type_arg_4);
Py_DECREF(tmp_type_arg_4);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
tmp_tuple_element_10 = mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 409;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_17 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
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
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_16, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_19;
PyObject *tmp_type_arg_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_5 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_5);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_10;
}
frame_frame_google$auth$aws->m_frame.f_lineno = 409;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 409;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
branch_end_7:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_db6a6564750521d4497a674f4ee82535;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_409;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5 = MAKE_CLASS_FRAME(tstate, code_objects_668e85a96b778f7a2fec39c28b8b604b, module_google$auth$aws, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__9___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_20 = PyObject_GetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_20 = module_var_accessor_google$auth$aws$_helpers(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_args_element_value_4 = PyObject_GetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);

if (tmp_args_element_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_4 = module_var_accessor_google$auth$aws$AwsSecurityCredentialsSupplier(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_args_element_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5->m_frame.f_lineno = 421;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_args_element_value_5 = MAKE_FUNCTION_google$auth$aws$$$function__10_get_aws_security_credentials(tstate);

frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5->m_frame.f_lineno = 421;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain_get_aws_security_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_21 = PyObject_GetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_google$auth$aws$_helpers(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_args_element_value_6 = PyObject_GetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);

if (tmp_args_element_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_args_element_value_6 = module_var_accessor_google$auth$aws$AwsSecurityCredentialsSupplier(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AwsSecurityCredentialsSupplier);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_args_element_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5->m_frame.f_lineno = 450;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_args_element_value_7 = MAKE_FUNCTION_google$auth$aws$$$function__11_get_aws_region(tstate);

frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5->m_frame.f_lineno = 450;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain_get_aws_region, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__12__get_imdsv2_session_token(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain__get_imdsv2_session_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__13__get_metadata_security_credentials(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain__get_metadata_security_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__14__get_metadata_role_name(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain__get_metadata_role_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_32898a605de57dac0e57ddbf51594a1d_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
branch_no_9:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 409;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_53 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409);
locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409);
locals_google$auth$aws$$$class__4__DefaultAwsSecurityCredentialsSupplier_409 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 409;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultAwsSecurityCredentialsSupplier, tmp_assign_source_53);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_google$auth$aws$external_account(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_external_account);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_Credentials);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_55, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_3;
PyObject *tmp_type_arg_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
if (tmp_type_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_6);
CHECK_OBJECT(tmp_type_arg_6);
Py_DECREF(tmp_type_arg_6);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_Credentials;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 607;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
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
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_17, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_7;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_7 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_7);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_13;
}
frame_frame_google$auth$aws->m_frame.f_lineno = 607;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 607;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_60;
}
branch_end_10:;
{
PyObject *tmp_assign_source_61;
outline_4_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$auth$aws$$$class__5_Credentials_607 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a16d59363d06b784339ff26fae0f137e;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_a460e9a77c3dc7456bc44809e9390149;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_607;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
frame_frame_google$auth$aws$$$class__5_Credentials_6 = MAKE_CLASS_FRAME(tstate, code_objects_02b2132cbc1d7fa659fc58713091db24, module_google$auth$aws, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$aws$$$class__5_Credentials_6);
assert(Py_REFCNT(frame_frame_google$auth$aws$$$class__5_Credentials_6) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_29;
tmp_expression_value_29 = PyObject_GetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain_external_account);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_google$auth$aws$external_account(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_external_account);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__DEFAULT_TOKEN_URL);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_16);

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__15___init__(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__16_retrieve_subject_token(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain_retrieve_subject_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__17__create_default_metrics_options(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain__create_default_metrics_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 808;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__18__has_custom_supplier(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain__has_custom_supplier, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 815;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$aws$$$function__19__constructor_args(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain__constructor_args, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 818;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_8;
tmp_called_value_14 = PyObject_GetItem(locals_google$auth$aws$$$class__5_Credentials_607, const_str_plain_classmethod);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}


tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$aws$$$function__20_from_info(tstate);

frame_frame_google$auth$aws$$$class__5_Credentials_6->m_frame.f_lineno = 829;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain_from_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_9;
tmp_called_value_15 = PyObject_GetItem(locals_google$auth$aws$$$class__5_Credentials_607, const_str_plain_classmethod);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}


tmp_args_element_value_9 = MAKE_FUNCTION_google$auth$aws$$$function__21_from_file(tstate);

frame_frame_google$auth$aws$$$class__5_Credentials_6->m_frame.f_lineno = 852;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 852;
type_description_2 = "c";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain_from_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 853;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws$$$class__5_Credentials_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws$$$class__5_Credentials_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws$$$class__5_Credentials_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$aws$$$class__5_Credentials_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_google$auth$aws$$$class__5_Credentials_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_60cff2da0acbc150447c4045dd9f923f_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_google$auth$aws$$$class__5_Credentials_607, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
branch_no_12:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_Credentials;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_google$auth$aws$$$class__5_Credentials_607;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$aws->m_frame.f_lineno = 607;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;

    goto try_except_handler_15;
}
assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
Nuitka_Cell_SET(outline_4_var___class__, tmp_assign_source_62);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
tmp_assign_source_61 = Nuitka_Cell_GET(outline_4_var___class__);
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_google$auth$aws$$$class__5_Credentials_607);
locals_google$auth$aws$$$class__5_Credentials_607 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$aws$$$class__5_Credentials_607);
locals_google$auth$aws$$$class__5_Credentials_607 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 607;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$auth$aws, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_61);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$aws, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$aws->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$aws, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$aws);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$aws", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.aws" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$aws);
    return module_google$auth$aws;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$aws, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$aws", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
